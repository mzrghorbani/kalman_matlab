%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%#codegen
function [ y ] = PitchOverR_fixpt(pitch, r)
    fm = get_fimath();

    get = fi(zeros(512,1), 0, 16, 10, fm);
    for n = 3:511
      get(n) = fi_div(pitch, (bitshift(n,2) + fi(2, 0, 2, 0, fm)));
    end 
    y = fi(get(round(fi_div_by_shift(r, 2))), 0, 16, 14, fm);
end



function ntype = divideType(a,b)
    coder.inline( 'always' );
    nt1 = numerictype( a );
    nt2 = numerictype( b );
    maxFL = max( [ min( nt1.WordLength, nt1.FractionLength ), min( nt2.WordLength, nt2.FractionLength ) ] );
    FL = max( maxFL, 24 );
    extraBits = (FL - maxFL);
    WL = nt1.WordLength + nt2.WordLength;
    WL = min( WL, 124 );
    if (WL + extraBits)<64
        ntype = numerictype( nt1.Signed || nt2.Signed, WL + extraBits, FL );
    else
        ntype = numerictype( nt1.Signed || nt2.Signed, WL, FL );
    end
end


function c = fi_div(a,b)
    coder.inline( 'always' );
    if isfi( a ) && isfi( b ) && isscalar( b )
        a1 = fi( a, 'RoundMode', 'fix' );
        b1 = fi( b, 'RoundMode', 'fix' );
        c1 = divide( divideType( a1, b1 ), a1, b1 );
        c = fi( c1, numerictype( c1 ), fimath( a ) );
    else
        c = a/b;
    end
end


function y = fi_div_by_shift(a,shift_len)
    coder.inline( 'always' );
    if isfi( a )
        nt = numerictype( a );
        fm = fimath( a );
        nt_bs = numerictype( nt.Signed, nt.WordLength + shift_len, nt.FractionLength + shift_len );
        y = bitsra( fi( a, nt_bs, fm ), shift_len );
    else
        y = a/2^shift_len;
    end
end

function fm = get_fimath()
	fm = fimath('RoundingMethod', 'Floor',...
	     'OverflowAction', 'Wrap',...
	     'ProductMode','FullPrecision',...
	     'MaxProductWordLength', 128,...
	     'SumMode','FullPrecision',...
	     'MaxSumWordLength', 128);
end
