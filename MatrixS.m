function [S] = MatrixS(H, C)
    S = zeros(8,1);
    for i0=1:2
        for i1=1:4
            S(i0 + bitshift(i1-1,1)) = 0.0;
            for i2=1:4
                S(i0 + bitshift(i1-1,1))= S(i0 + bitshift(i1-1,1)) + ...
                H(i0 + bitshift(i2-1,1)) * C(i2 + bitshift(i1-1,2));
            end
        end
    end
end