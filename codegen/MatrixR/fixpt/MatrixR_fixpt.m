%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%#codegen
function [ Rmat ] = MatrixR_fixpt(V, H, St)
    fm = get_fimath();

    Rmat = fi(zeros(4,1), 0, 16, 0, fm);
    for i0=1:2
        for i1=1:2
            d0 = fi(0, 0, 16, 0, fm);
            for i2=1:4
                d0(:) = d0 + H(fi(i0, 0, 2, 0, fm) + bitshift(i2-1, 1)) * St(fi(i2, 0, 3, 0, fm) + bitshift(i1-1, 2));
            end
            Rmat(fi(i0, 0, 2, 0, fm) + bitshift(i1-1, 1)) = V(fi(i0, 0, 2, 0, fm) + bitshift(i1-1, 1)) + d0;
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
