function [RmatInv] = MatrixInverseR(Rmat)
    RmatInv = zeros(4,1);
    if (abs(Rmat(2,1)) > abs(Rmat(1,1)))
        r = Rmat(1,1) / Rmat(2,1);
        t = 1.0 / (r * Rmat(4,1) - Rmat(3,1));
        RmatInv(1,1) = Rmat(4,1) / Rmat(2,1) * t;
        RmatInv(2,1) = -t;
        RmatInv(3,1) = -Rmat(3,1) / Rmat(2,1) * t;
        RmatInv(4,1) = r * t;
    else
        r = Rmat(2,1) / Rmat(1,1);
        t = 1.0 / (Rmat(4,1) - r * Rmat(3,1));
        RmatInv(1,1) = Rmat(4,1) / Rmat(1,1) * t;
        RmatInv(2,1) = -r * t;
        RmatInv(3,1) = -Rmat(3,1) / Rmat(1,1) * t;
        RmatInv(4,1) = t;
    end
end