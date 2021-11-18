function [ y ] = PitchOverR_2(pitch, r)
    get = zeros(512,1);
    for n = 3:511
      pitchOverR = pitch / (bitshift(n,4) + 0.5 * bitshift(1,4));
    end 
    get(n) = pitchOverR * pitchOverR;
    y = get(round(r/4));
end