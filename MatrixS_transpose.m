function [ St ] = MatrixS_transpose(S)
    St = zeros(8,1);
    for i0=1:2
        for i1=1:4
            St(i1 + bitshift(i0-1, 2)) = S(i0 + bitshift(i1-1, 1));
        end
    end
    
end

