function [x] = VectorX(inv2R, phi0, tanL, z0) 
    x = zeros(4,1);
    x(1,1) = inv2R;
    x(2,1) = phi0;
    x(3,1) = tanL;
    x(4,1) = z0;
end
