#include <SPI.h>
#include <boards.h>
#include <RBL_nRF8001.h>

char *testData[180];
int count;
int i;
int numDataPoints;
int bufferBytes;
char buffer[29];
unsigned char buff[29];
void setup()
{
  //  
  // For BLE Shield and Blend:
  //   Default pins set to 9 and 8 for REQN and RDYN
  //   Set your REQN and RDYN here before ble_begin() if you need
  //
  // For Blend Micro:
  //   Default pins set to 6 and 7 for REQN and RDYN
  //   So, no need to set for Blend Micro.
  //
  //ble_set_pins(3, 2);
  
  // Set your BLE advertising name here, max. length 10
  //ble_set_name("My BLE");
  
  // Init. and start BLE library.
  ble_begin();
  
  count = 0;
  numDataPoints = 5;
  bufferBytes = numDataPoints * 6 - 1;

char *test0 = "4.995";
char *test1 = "4.715";
char *test2 = "4.715";
char *test3 = "4.205";
char *test4 = "4.830";
char *test5 = "4.880";
char *test6 = "4.960";
char *test7 = "4.850";
char *test8 = "4.835";
char *test9 = "4.770";
char *test10 = "4.790";
char *test11 = "4.820";
char *test12 = "5.015";
char *test13 = "4.730";
char *test14 = "4.845";
char *test15 = "4.570";
char *test16 = "4.850";
char *test17 = "4.975";
char *test18 = "5.020";
char *test19 = "4.920";
char *test20 = "4.855";
char *test21 = "4.790";
char *test22 = "4.825";
char *test23 = "4.840";
char *test24 = "5.000";
char *test25 = "4.800";
char *test26 = "4.515";
char *test27 = "4.850";
char *test28 = "4.915";
char *test29 = "5.010";
char *test30 = "4.935";
char *test31 = "4.855";
char *test32 = "4.775";
char *test33 = "4.780";
char *test34 = "4.800";
char *test35 = "4.830";
char *test36 = "5.055";
char *test37 = "4.780";
char *test38 = "4.610";
char *test39 = "4.815";
char *test40 = "4.870";
char *test41 = "4.970";
char *test42 = "4.920";
char *test43 = "4.870";
char *test44 = "4.805";
char *test45 = "4.820";
char *test46 = "4.850";
char *test47 = "4.995";
char *test48 = "4.780";
char *test49 = "4.790";
char *test50 = "4.535";
char *test51 = "4.875";
char *test52 = "4.990";
char *test53 = "5.000";
char *test54 = "4.910";
char *test55 = "4.870";
char *test56 = "4.890";
char *test57 = "4.890";
char *test58 = "5.075";
char *test59 = "4.870";
char *test60 = "4.760";
char *test61 = "4.670";
char *test62 = "5.055";
char *test63 = "5.050";
char *test64 = "5.045";
char *test65 = "4.895";
char *test66 = "4.815";
char *test67 = "4.760";
char *test68 = "4.765";
char *test69 = "4.860";
char *test70 = "4.735";
char *test71 = "4.775";
char *test72 = "4.265";
char *test73 = "4.835";
char *test74 = "4.930";
char *test75 = "4.985";
char *test76 = "4.855";
char *test77 = "4.845";
char *test78 = "4.785";
char *test79 = "4.790";
char *test80 = "4.830";
char *test81 = "5.010";
char *test82 = "4.800";
char *test83 = "4.740";
char *test84 = "4.250";
char *test85 = "4.880";
char *test86 = "4.930";
char *test87 = "5.000";
char *test88 = "4.855";
char *test89 = "4.800";
char *test90 = "4.710";
char *test91 = "4.740";
char *test92 = "4.775";
char *test93 = "4.780";
char *test94 = "4.860";
char *test95 = "4.730";
char *test96 = "4.385";
char *test97 = "4.835";
char *test98 = "4.875";
char *test99 = "4.970";
char *test100 = "4.885";
char *test101 = "4.835";
char *test102 = "4.770";
char *test103 = "4.735";
char *test104 = "4.765";
char *test105 = "4.845";
char *test106 = "4.715";
char *test107 = "4.710";
char *test108 = "4.115";
char *test109 = "4.825";
char *test110 = "4.890";
char *test111 = "4.935";
char *test112 = "4.790";
char *test113 = "4.780";
char *test114 = "4.705";
char *test115 = "4.745";
char *test116 = "4.760";
char *test117 = "4.970";
char *test118 = "4.690";
char *test119 = "4.760";
char *test120 = "4.430";
char *test121 = "4.845";
char *test122 = "4.940";
char *test123 = "4.920";
char *test124 = "4.865";
char *test125 = "4.820";
char *test126 = "4.820";
char *test127 = "4.830";
char *test128 = "4.950";
char *test129 = "4.820";
char *test130 = "4.825";
char *test131 = "4.415";
char *test132 = "4.950";
char *test133 = "5.070";
char *test134 = "4.990";
char *test135 = "4.925";
char *test136 = "4.870";
char *test137 = "5.240";
char *test138 = "4.795";
char *test139 = "4.840";
char *test140 = "4.715";
char *test141 = "4.795";
char *test142 = "4.845";
char *test143 = "4.895";
char *test144 = "4.890";
char *test145 = "4.935";
char *test146 = "4.930";
char *test147 = "4.960";
char *test148 = "4.945";
char *test149 = "4.960";
char *test150 = "4.945";
char *test151 = "5.185";
char *test152 = "4.900";
char *test153 = "4.675";
char *test154 = "4.965";
char *test155 = "5.005";
char *test156 = "5.075";
char *test157 = "5.065";
char *test158 = "5.005";
char *test159 = "4.975";
char *test160 = "4.875";
char *test161 = "4.940";
char *test162 = "4.950";
char *test163 = "5.165";
char *test164 = "4.920";
char *test165 = "4.945";
char *test166 = "4.725";
char *test167 = "5.040";
char *test168 = "5.120";
char *test169 = "5.155";
char *test170 = "4.995";
char *test171 = "4.950";
char *test172 = "4.900";
char *test173 = "4.915";
char *test174 = "4.925";
char *test175 = "4.940";
char *test176 = "4.970";
char *test177 = "4.865";
char *test178 = "4.495";
char *test179 = "4.950";
testData[0] = test0;
testData[1] = test1;
testData[2] = test2;
testData[3] = test3;
testData[4] = test4;
testData[5] = test5;
testData[6] = test6;
testData[7] = test7;
testData[8] = test8;
testData[9] = test9;
testData[10] = test10;
testData[11] = test11;
testData[12] = test12;
testData[13] = test13;
testData[14] = test14;
testData[15] = test15;
testData[16] = test16;
testData[17] = test17;
testData[18] = test18;
testData[19] = test19;
testData[20] = test20;
testData[21] = test21;
testData[22] = test22;
testData[23] = test23;
testData[24] = test24;
testData[25] = test25;
testData[26] = test26;
testData[27] = test27;
testData[28] = test28;
testData[29] = test29;
testData[30] = test30;
testData[31] = test31;
testData[32] = test32;
testData[33] = test33;
testData[34] = test34;
testData[35] = test35;
testData[36] = test36;
testData[37] = test37;
testData[38] = test38;
testData[39] = test39;
testData[40] = test40;
testData[41] = test41;
testData[42] = test42;
testData[43] = test43;
testData[44] = test44;
testData[45] = test45;
testData[46] = test46;
testData[47] = test47;
testData[48] = test48;
testData[49] = test49;
testData[50] = test50;
testData[51] = test51;
testData[52] = test52;
testData[53] = test53;
testData[54] = test54;
testData[55] = test55;
testData[56] = test56;
testData[57] = test57;
testData[58] = test58;
testData[59] = test59;
testData[60] = test60;
testData[61] = test61;
testData[62] = test62;
testData[63] = test63;
testData[64] = test64;
testData[65] = test65;
testData[66] = test66;
testData[67] = test67;
testData[68] = test68;
testData[69] = test69;
testData[70] = test70;
testData[71] = test71;
testData[72] = test72;
testData[73] = test73;
testData[74] = test74;
testData[75] = test75;
testData[76] = test76;
testData[77] = test77;
testData[78] = test78;
testData[79] = test79;
testData[80] = test80;
testData[81] = test81;
testData[82] = test82;
testData[83] = test83;
testData[84] = test84;
testData[85] = test85;
testData[86] = test86;
testData[87] = test87;
testData[88] = test88;
testData[89] = test89;
testData[90] = test90;
testData[91] = test91;
testData[92] = test92;
testData[93] = test93;
testData[94] = test94;
testData[95] = test95;
testData[96] = test96;
testData[97] = test97;
testData[98] = test98;
testData[99] = test99;
testData[100] = test100;
testData[101] = test101;
testData[102] = test102;
testData[103] = test103;
testData[104] = test104;
testData[105] = test105;
testData[106] = test106;
testData[107] = test107;
testData[108] = test108;
testData[109] = test109;
testData[110] = test110;
testData[111] = test111;
testData[112] = test112;
testData[113] = test113;
testData[114] = test114;
testData[115] = test115;
testData[116] = test116;
testData[117] = test117;
testData[118] = test118;
testData[119] = test119;
testData[120] = test120;
testData[121] = test121;
testData[122] = test122;
testData[123] = test123;
testData[124] = test124;
testData[125] = test125;
testData[126] = test126;
testData[127] = test127;
testData[128] = test128;
testData[129] = test129;
testData[130] = test130;
testData[131] = test131;
testData[132] = test132;
testData[133] = test133;
testData[134] = test134;
testData[135] = test135;
testData[136] = test136;
testData[137] = test137;
testData[138] = test138;
testData[139] = test139;
testData[140] = test140;
testData[141] = test141;
testData[142] = test142;
testData[143] = test143;
testData[144] = test144;
testData[145] = test145;
testData[146] = test146;
testData[147] = test147;
testData[148] = test148;
testData[149] = test149;
testData[150] = test150;
testData[151] = test151;
testData[152] = test152;
testData[153] = test153;
testData[154] = test154;
testData[155] = test155;
testData[156] = test156;
testData[157] = test157;
testData[158] = test158;
testData[159] = test159;
testData[160] = test160;
testData[161] = test161;
testData[162] = test162;
testData[163] = test163;
testData[164] = test164;
testData[165] = test165;
testData[166] = test166;
testData[167] = test167;
testData[168] = test168;
testData[169] = test169;
testData[170] = test170;
testData[171] = test171;
testData[172] = test172;
testData[173] = test173;
testData[174] = test174;
testData[175] = test175;
testData[176] = test176;
testData[177] = test177;
testData[178] = test178;
testData[179] = test179;

for (i = 0; i < numDataPoints; i++) {
  strcat(buffer, testData[i]);
  if (i < numDataPoints - 1) {
    strcat(buffer, ",");
  }
}
  
  memcpy(buff,buffer,bufferBytes);
  
  // Enable serial debug
  Serial.begin(57600);
  pinMode(13, OUTPUT);
  Serial.println(test0[0]);
  
}

// EKG max 5.375
// EKG min 4.05

//unsigned char testData[ ] = {"4.556", "5.234", "4.788", "4.233", "4.333", "5.111", "4.999", "5.243", "4.383", "5.299"};


void loop()
{
  
  if ( ble_connected() )
  {
    ble_write_bytes(buff, bufferBytes);
  }

  ble_do_events();
  
  count = count + 1;
  
  if (count > 179) {
    count = 0;
  }     
}
