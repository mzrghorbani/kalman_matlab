function [ Rmat ] = MatrixR(V, H, St)
    Rmat = zeros(4,1);
    for i0=1:2
        for i1=1:2
            d0 = 0;
            for i2=1:4
                d0 = d0 + H(i0 + bitshift(i2-1, 1)) * St(i2 + bitshift(i1-1, 2));
            end
            Rmat(i0 + bitshift(i1-1, 1)) = V(i0 + bitshift(i1-1, 1)) + d0;
        end
    end
end