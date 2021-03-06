%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%#codegen
function [ x_new ] = VectorX_1_fixpt(x, K, res)
    fm = get_fimath();

    x_new = fi(zeros(4,1), 1, 16, 3, fm);
    for i0=1:4
        d0 = fi(0, 1, 16, 9, fm);
        for i1=1:2
            d0(:) = d0 + K(fi(i0, 0, 3, 0, fm) + bitshift(i1-1, 2)) * res(i1);
        end
        x_new(i0) = x(i0) + d0;
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
