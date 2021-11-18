function [V] = MatrixV(r, z, inv2R, tanL)
    V = zeros(4,1);
    V(2,1) = 0;
    V(3,1) = 0;
    bField = 3.8112;
    rMult = 9.938;
    phiMult = 20860.75;
    rphiMult = rMult * phiMult;
    invRoot12  = 0.288675;
    pitchPS = rphiMult * invRoot12 * 0.0099;
    pitch2S = rphiMult * invRoot12 * 0.0089;
    lengthPS = 1.41*rMult * invRoot12 * 0.15;
    length2S = rMult * invRoot12 * 5.02; 
    lengthPS105 = 1.05 * lengthPS;
    length2S105 = 1.05 * length2S;
    lengthPS09  = 0.9 * lengthPS;
    length2S09  = 0.9 * length2S;
    zBarrel = rMult * 125;
    zWheel12 = rMult * 170;
    rPSbarrel = rMult * 60.0;
    rPSwheel12 = rMult * 66.4;
    rPSwheel345 = rMult * 64.6;
    
    pitchPSoverR_2 = PitchOverR_2(pitchPS, r);
    pitch2SoverR_2 = PitchOverR_2(pitch2S, r);
    
    absZ = z;

    if (z(1) < 0)
        absZ = -z;
    end
    
    calcPhiExtra2_PS = InvPt2(1, lengthPS);
    calcPhiExtra2_2S = InvPt2(1, length2S);
    
    if (absZ(1) < zBarrel)
        if (r(1) < rPSbarrel)
            sigmaPhi2 = pitchPSoverR_2;
            sigmaZ   = lengthPS;
        else
            sigmaPhi2 = pitch2SoverR_2;
            sigmaZ   = length2S;
        end
            sigmaPhiExtra2 = 0;
    else

        if(absZ < zWheel12)
            psEndcap = r < rPSwheel12;
        else
            psEndcap = r < rPSwheel345;
        end

        if (psEndcap == 1)
            sigmaPhi2 = pitchPSoverR_2;
            sigmaZ = lengthPS*tanL;
            sigmaPhiExtra2 = 392.0605;
        else
            sigmaPhi2 = pitch2SoverR_2;
            sigmaZ = length2S*tanL;
            sigmaPhiExtra2 = 392.0605;
        end
    end
   
    V(1,1) = sigmaPhi2 + sigmaPhiExtra2 + 3.2129;
    V(4,1) = sigmaZ * sigmaZ;
end