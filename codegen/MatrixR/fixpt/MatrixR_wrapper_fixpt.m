%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                                                                          %
%           Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           %
%                                                                          %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
function Rmat = MatrixR_wrapper_fixpt(V,H,St)
    fm = get_fimath();
    V_in = fi( V, 0, 16, 4, fm );
    H_in = fi( H, 1, 11, 0, fm );
    St_in = fi( St, 1, 16, -1, fm );
    [Rmat_out] = MatrixR_fixpt( V_in, H_in, St_in );
    Rmat = double( Rmat_out );
end

function fm = get_fimath()
	fm = fimath('RoundingMethod', 'Floor',...
	     'OverflowAction', 'Wrap',...
	     'ProductMode','FullPrecision',...
	     'MaxProductWordLength', 128,...
	     'SumMode','FullPrecision',...
	     'MaxSumWordLength', 128);
end
