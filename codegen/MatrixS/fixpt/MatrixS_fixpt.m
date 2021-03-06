%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%#codegen
function [S] = MatrixS_fixpt(H, C)
    fm = get_fimath();

    S = fi(zeros(8,1), 1, 16, -1, fm);
    for i0=1:2
        for i1=1:4
            S(fi(i0, 0, 2, 0, fm) + bitshift(i1-1,1)) = 0.0;
            for i2=1:4
                S(fi(i0, 0, 2, 0, fm) + bitshift(i1-1,1))= S(fi(i0, 0, 2, 0, fm) + bitshift(i1-1,1)) + ...
                H(fi(i0, 0, 2, 0, fm) + bitshift(i2-1,1)) * C(fi(i2, 0, 3, 0, fm) + bitshift(i1-1,2));
            end
        end
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
