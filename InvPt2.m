function [ y ] = InvPt2(iOpt, scaleFactor)
    rMult = 2^12 / 103.0382;
    phiMult = 2^14 / 0.698131701;
    inv2R_Mult = phiMult / rMult;
    bField = 3.8112;
    invPtToInvR = bField * (3.0e8 / 1.0e11);
    minPtBin = -18;
    maxPtBin = 17;
    minPt_HT = 3;
    numPtBins = 36;
    if(iOpt == 0)
        theConst = kalmanMultScatTerm * phiMult;
    else
       theConst = (0.5 * invPtToInvR * scaleFactor * inv2R_Mult);
    end
    
    get = zeros(36,1);
    for m = 1 : 1 : 36
       constOverPt = theConst * (1 / minPt_HT) * (m + 0.5) / (numPtBins / 2);
       get(m) = constOverPt * constOverPt;
       y = get;
    end
end
