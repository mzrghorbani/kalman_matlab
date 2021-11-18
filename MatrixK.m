function K = MatrixK(St, RmatInv)
    K = zeros(8,1);
    for i0=1:4
        for i1=1:2
            K(i0 + bitshift(i1-1, 2)) = 0;
            for i2=1:2
                K(i0 + bitshift(i1-1, 2)) = K(i0 + bitshift(i1-1, 2)) + ...
                    St(i0 + bitshift(i2-1, 2)) * RmatInv(i2 + bitshift(i1-1, 1));
            end
        end
    end
end