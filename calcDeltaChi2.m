function [ dChi2 ] = calcDeltaChi2(res, RmatInv)
    
    dChi2 = (res(1,1) * res(1,1) * RmatInv(1,1) + res(2,1) * res(2,1) * ...
        RmatInv(4,1)) + 2.0 * (res(1,1) * res(2,1)) * RmatInv(3,1);
end