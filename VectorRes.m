function [ res ] = VectorRes(m, H, x)
    res = zeros(2,1);
    for i0=1:2
        d0 = 0;
        for i1=1:4
            d0 = d0 + H(i0 + bitshift(i1-1, 1)) * x(i1);
        end
        res(i0) = m(i0) - d0;
    end
end