%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function K = MatrixK_wrapper_fixpt(St,RmatInv)
    fm = get_fimath();
    St_in = fi( St, 1, 16, -1, fm );
    RmatInv_in = fi( RmatInv, 0, 16, 25, fm );
    [K_out] = MatrixK_fixpt( St_in, RmatInv_in );
    K = double( K_out );
end

function fm = get_fimath()
	fm = fimath('RoundingMethod', 'Floor',...
	     'OverflowAction', 'Wrap',...
	     'ProductMode','FullPrecision',...
	     'MaxProductWordLength', 128,...
	     'SumMode','FullPrecision',...
	     'MaxSumWordLength', 128);
end
