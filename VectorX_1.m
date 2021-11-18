function [ x_new ] = VectorX_1(x, K, res)
    x_new = zeros(4,1);
    for i0=1:4
        d0 = 0;
        for i1=1:2
            d0 = d0 + K(i0 + bitshift(i1-1, 2)) * res(i1);
        end
        x_new(i0) = x(i0) + d0;
    end
end