function [ C_new ] = MatrixC_1(C, K, S)
    C_new = zeros(16,1);
    for i0 =1:4
        for i1=1:4
            d0 = 0;
            for i2=1:2
                d0 = d0 + K(i0 + bitshift(i2-1, 2)) * S(i2 + bitshift(i1-1, 1));
            end
            C_new(i0 + bitshift(i1-1, 2)) = C(i0 + bitshift(i1-1, 2)) - d0;
        end
    end
end