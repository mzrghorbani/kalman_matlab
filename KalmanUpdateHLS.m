function [stateOut] = KalmanUpdateHLS(stub, stateIn)
    stateOut.cBin = stateIn.cBin;
    stateOut.mBin = stateIn.mBin;

    % Store vector of stub coords
    m = VectorM(stub.phiS, stub.z);
    
    % Store covariance matrix of stub coords
    V = MatrixV(stub.r, stub.z, stateIn.inv2R, stateIn.tanL);
    
    % Store vector of input helix params
    x = VectorX(stateIn.inv2R, stateIn.phi0, stateIn.tanL, stateIn.z0);
    
    % Store covariance matrix of input helix params
    C = MatrixC(stateIn.cov_00, stateIn.cov_11, stateIn.cov_22, stateIn.cov_33, stateIn.cov_01, stateIn.cov_23);
    
    % Calculate matrix of derivatives of predicted stub coords w.r.t. helix params
    H = MatrixH(stub.r);
    
    % Calculate S = H * C, and its transpose St, which is equal to C * H(transpose)
    S = MatrixS(H, C);
    
    % St = S';
    St = MatrixS_transpose(S);
    
    % V + H * St
    Rmat = MatrixR(V, H, St);
    
    % RmatInv = inv(Rmat)
    RmatInv = MatrixInverseR(Rmat);
    
    % K  = St * RmatInv;
    K = MatrixK(St, RmatInv);
    
    % res = m - (H * x)
    res = VectorRes(m, H, x);
    
    % x_new = x + (K * res)
    x_new = VectorX_1(x, K, res);
    
    % C_new = C - (K * S)
    C_new = MatrixC_1(C, K, S);
    
    % delta(chi2) = res(transpose) * R(inverse) * res
    deltaChi2 = calcDeltaChi2(res, RmatInv);
    
    chi2 = stateIn.chiSquared + deltaChi2;
    
    % Truncate chi2 to avoid overflow.
    MAX_CHI2 = (1^10) - 1;
     
    if (chi2 > MAX_CHI2)
        chi2 = MAX_CHI2;
    end
    
    stateOut.chiSquared = chi2;
    stateOut.inv2R = x_new(1);
    stateOut.phi0  = x_new(2);
    stateOut.tanL  = x_new(3);
    stateOut.z0    = x_new(4);
    stateOut.cov_00 = C_new(1,1);
    stateOut.cov_11 = C_new(6,1);
    stateOut.cov_22 = C_new(11,1);
    stateOut.cov_33 = C_new(16,1);
    stateOut.cov_01 = C_new(5,1);
    stateOut.cov_23 = C_new(15,1);
end