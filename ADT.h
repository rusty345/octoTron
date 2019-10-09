AudioSynthWaveform       lfovco[9];
AudioSynthWaveform       lfofilt[9];
AudioSynthWaveformModulated vco1[9];
AudioSynthWaveformModulated vco2[9];
AudioEffectMultiply      mult[9];
AudioMixer4              mixvco[9];
AudioFilterStateVariable filt[9];
AudioMixer4              mixfilt[9];
AudioEffectEnvelope      ahdsr[9];
AudioMixer4              mix18;
AudioMixer4              mix58;
AudioMixer4              mix14;
AudioOutputI2S           i2s1;
AudioConnection          patchCord1(lfovco[1], 0, vco1[1], 0);
AudioConnection          patchCord2(lfovco[1], 0, vco2[1], 0);
AudioConnection          patchCord3(lfofilt[1], 0, filt[1], 1);
AudioConnection          patchCord4(lfovco[2], 0, vco1[2], 0);
AudioConnection          patchCord5(lfovco[2], 0, vco2[2], 0);
AudioConnection          patchCord6(lfofilt[2], 0, filt[2], 1);
AudioConnection          patchCord7(lfovco[3], 0, vco1[3], 0);
AudioConnection          patchCord8(lfovco[3], 0, vco2[3], 0);
AudioConnection          patchCord9(lfofilt[3], 0, filt[3], 1);
AudioConnection          patchCord10(lfovco[4], 0, vco1[4], 0);
AudioConnection          patchCord11(lfovco[4], 0, vco2[4], 0);
AudioConnection          patchCord12(lfofilt[4], 0, filt[4], 1);
AudioConnection          patchCord13(lfovco[5], 0, vco1[5], 0);
AudioConnection          patchCord14(lfovco[5], 0, vco2[5], 0);
AudioConnection          patchCord15(lfofilt[5], 0, filt[5], 1);
AudioConnection          patchCord16(lfovco[6], 0, vco1[6], 0);
AudioConnection          patchCord17(lfovco[6], 0, vco2[6], 0);
AudioConnection          patchCord18(lfofilt[6], 0, filt[6], 1);
AudioConnection          patchCord19(lfovco[7], 0, vco1[7], 0);
AudioConnection          patchCord20(lfovco[7], 0, vco2[7], 0);
AudioConnection          patchCord21(lfofilt[7], 0, filt[7], 1);
AudioConnection          patchCord22(lfovco[8], 0, vco1[8], 0);
AudioConnection          patchCord23(lfovco[8], 0, vco2[8], 0);
AudioConnection          patchCord24(lfofilt[8], 0, filt[8], 1);
AudioConnection          patchCord25(vco2[1], 0, mixvco[1], 1);
AudioConnection          patchCord26(vco2[2], 0, mixvco[2], 1);
AudioConnection          patchCord27(vco2[3], 0, mixvco[3], 1);
AudioConnection          patchCord28(vco1[1], 0, mixvco[1], 0);
AudioConnection          patchCord29(vco2[4], 0, mixvco[4], 1);
AudioConnection          patchCord30(vco1[2], 0, mixvco[2], 0);
AudioConnection          patchCord31(vco2[5], 0, mixvco[5], 1);
AudioConnection          patchCord32(vco1[3], 0, mixvco[3], 0);
AudioConnection          patchCord33(vco2[6], 0, mixvco[6], 1);
AudioConnection          patchCord34(vco1[4], 0, mixvco[4], 0);
AudioConnection          patchCord35(vco2[7], 0, mixvco[7], 1);
AudioConnection          patchCord36(vco1[5], 0, mixvco[5], 0);
AudioConnection          patchCord37(vco2[8], 0, mixvco[8], 1);
AudioConnection          patchCord38(vco1[6], 0, mixvco[6], 0);
AudioConnection          patchCord39(vco1[7], 0, mixvco[7], 0);
AudioConnection          patchCord40(vco1[8], 0, mixvco[8], 0);
AudioConnection          patchCord41(mixvco[1], 0, filt[1], 0);
AudioConnection          patchCord42(mixvco[1], 0, mixfilt[1], 0);
AudioConnection          patchCord43(mixvco[2], 0, filt[2], 0);
AudioConnection          patchCord44(mixvco[2], 0, mixfilt[2], 0);
AudioConnection          patchCord45(mixvco[3], 0, filt[3], 0);
AudioConnection          patchCord46(mixvco[3], 0, mixfilt[3], 0);
AudioConnection          patchCord47(mixvco[4], 0, filt[4], 0);
AudioConnection          patchCord48(mixvco[4], 0, mixfilt[4], 0);
AudioConnection          patchCord49(mixvco[5], 0, filt[5], 0);
AudioConnection          patchCord50(mixvco[5], 0, mixfilt[5], 0);
AudioConnection          patchCord51(mixvco[6], 0, filt[6], 0);
AudioConnection          patchCord52(mixvco[6], 0, mixfilt[6], 0);
AudioConnection          patchCord53(mixvco[7], 0, filt[7], 0);
AudioConnection          patchCord54(mixvco[7], 0, mixfilt[7], 0);
AudioConnection          patchCord55(mixvco[8], 0, filt[8], 0);
AudioConnection          patchCord56(mixvco[8], 0, mixfilt[8], 0);
AudioConnection          patchCord57(filt[1], 0, mixfilt[1], 1);
AudioConnection          patchCord58(filt[1], 1, mixfilt[1], 2);
AudioConnection          patchCord59(filt[1], 2, mixfilt[1], 3);
AudioConnection          patchCord60(filt[2], 0, mixfilt[2], 1);
AudioConnection          patchCord61(filt[2], 1, mixfilt[2], 2);
AudioConnection          patchCord62(filt[2], 2, mixfilt[2], 3);
AudioConnection          patchCord63(filt[3], 0, mixfilt[3], 1);
AudioConnection          patchCord64(filt[3], 1, mixfilt[3], 2);
AudioConnection          patchCord65(filt[3], 2, mixfilt[3], 3);
AudioConnection          patchCord66(filt[4], 0, mixfilt[4], 1);
AudioConnection          patchCord67(filt[4], 1, mixfilt[4], 2);
AudioConnection          patchCord68(filt[4], 2, mixfilt[4], 3);
AudioConnection          patchCord69(filt[5], 0, mixfilt[5], 1);
AudioConnection          patchCord70(filt[5], 1, mixfilt[5], 2);
AudioConnection          patchCord71(filt[5], 2, mixfilt[5], 3);
AudioConnection          patchCord72(filt[6], 0, mixfilt[6], 1);
AudioConnection          patchCord73(filt[6], 1, mixfilt[6], 2);
AudioConnection          patchCord74(filt[6], 2, mixfilt[6], 3);
AudioConnection          patchCord75(filt[7], 0, mixfilt[7], 1);
AudioConnection          patchCord76(filt[7], 1, mixfilt[7], 2);
AudioConnection          patchCord77(filt[7], 2, mixfilt[7], 3);
AudioConnection          patchCord78(filt[8], 0, mixfilt[8], 1);
AudioConnection          patchCord79(filt[8], 1, mixfilt[8], 2);
AudioConnection          patchCord80(filt[8], 2, mixfilt[8], 3);
AudioConnection          patchCord81(mixfilt[1], ahdsr[1]);
AudioConnection          patchCord82(mixfilt[2], ahdsr[2]);
AudioConnection          patchCord83(mixfilt[3], ahdsr[3]);
AudioConnection          patchCord84(mixfilt[4], ahdsr[4]);
AudioConnection          patchCord85(mixfilt[5], ahdsr[5]);
AudioConnection          patchCord86(mixfilt[6], ahdsr[6]);
AudioConnection          patchCord87(mixfilt[7], ahdsr[7]);
AudioConnection          patchCord88(mixfilt[8], ahdsr[8]);
AudioConnection          patchCord89(ahdsr[5], 0, mix58, 0);
AudioConnection          patchCord90(ahdsr[8], 0, mix58, 3);
AudioConnection          patchCord91(ahdsr[1], 0, mix14, 0);
AudioConnection          patchCord92(ahdsr[2], 0, mix14, 1);
AudioConnection          patchCord93(ahdsr[3], 0, mix14, 2);
AudioConnection          patchCord94(ahdsr[4], 0, mix14, 3);
AudioConnection          patchCord95(ahdsr[7], 0, mix58, 2);
AudioConnection          patchCord96(ahdsr[6], 0, mix58, 1);
AudioConnection          patchCord97(mix18, 0, i2s1, 0);
AudioConnection          patchCord98(mix18, 0, i2s1, 1);
AudioConnection          patchCord99(mix58, 0, mix18, 1);
AudioConnection          patchCord100(mix14, 0, mix18, 0);
AudioConnection          patchCord101(vco1[1], 0, mult[1], 0);
AudioConnection          patchCord102(vco1[2], 0, mult[2], 0);
AudioConnection          patchCord103(vco1[3], 0, mult[3], 0);
AudioConnection          patchCord104(vco1[4], 0, mult[4], 0);
AudioConnection          patchCord105(vco1[5], 0, mult[5], 0);
AudioConnection          patchCord106(vco1[6], 0, mult[6], 0);
AudioConnection          patchCord107(vco1[7], 0, mult[7], 0);
AudioConnection          patchCord108(vco1[8], 0, mult[8], 0);
AudioConnection          patchCord109(vco2[1], 0, mult[1], 1);
AudioConnection          patchCord110(vco2[2], 0, mult[2], 1);
AudioConnection          patchCord111(vco2[3], 0, mult[3], 1);
AudioConnection          patchCord112(vco2[4], 0, mult[4], 1);
AudioConnection          patchCord113(vco2[5], 0, mult[5], 1);
AudioConnection          patchCord114(vco2[6], 0, mult[6], 1);
AudioConnection          patchCord115(vco2[7], 0, mult[7], 1);
AudioConnection          patchCord116(vco2[8], 0, mult[8], 1);
AudioConnection          patchCord117(mult[1], 0, mixvco[1], 2);
AudioConnection          patchCord118(mult[2], 0, mixvco[2], 2);
AudioConnection          patchCord119(mult[3], 0, mixvco[3], 2);
AudioConnection          patchCord120(mult[4], 0, mixvco[4], 2);
AudioConnection          patchCord121(mult[5], 0, mixvco[5], 2);
AudioConnection          patchCord122(mult[6], 0, mixvco[6], 2);
AudioConnection          patchCord123(mult[7], 0, mixvco[7], 2);
AudioConnection          patchCord124(mult[8], 0, mixvco[8], 2);
AudioControlSGTL5000     sgtl5000_1;