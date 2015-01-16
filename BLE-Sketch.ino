#include <SPI.h>
#include <boards.h>
#include <RBL_nRF8001.h>

unsigned char *testData[180];
int count;

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
testData[0] = (unsigned char *)test0;
testData[1] = (unsigned char *)test1;
testData[2] = (unsigned char *)test2;
testData[3] = (unsigned char *)test3;
testData[4] = (unsigned char *)test4;
testData[5] = (unsigned char *)test5;
testData[6] = (unsigned char *)test6;
testData[7] = (unsigned char *)test7;
testData[8] = (unsigned char *)test8;
testData[9] = (unsigned char *)test9;
testData[10] = (unsigned char *)test10;
testData[11] = (unsigned char *)test11;
testData[12] = (unsigned char *)test12;
testData[13] = (unsigned char *)test13;
testData[14] = (unsigned char *)test14;
testData[15] = (unsigned char *)test15;
testData[16] = (unsigned char *)test16;
testData[17] = (unsigned char *)test17;
testData[18] = (unsigned char *)test18;
testData[19] = (unsigned char *)test19;
testData[20] = (unsigned char *)test20;
testData[21] = (unsigned char *)test21;
testData[22] = (unsigned char *)test22;
testData[23] = (unsigned char *)test23;
testData[24] = (unsigned char *)test24;
testData[25] = (unsigned char *)test25;
testData[26] = (unsigned char *)test26;
testData[27] = (unsigned char *)test27;
testData[28] = (unsigned char *)test28;
testData[29] = (unsigned char *)test29;
testData[30] = (unsigned char *)test30;
testData[31] = (unsigned char *)test31;
testData[32] = (unsigned char *)test32;
testData[33] = (unsigned char *)test33;
testData[34] = (unsigned char *)test34;
testData[35] = (unsigned char *)test35;
testData[36] = (unsigned char *)test36;
testData[37] = (unsigned char *)test37;
testData[38] = (unsigned char *)test38;
testData[39] = (unsigned char *)test39;
testData[40] = (unsigned char *)test40;
testData[41] = (unsigned char *)test41;
testData[42] = (unsigned char *)test42;
testData[43] = (unsigned char *)test43;
testData[44] = (unsigned char *)test44;
testData[45] = (unsigned char *)test45;
testData[46] = (unsigned char *)test46;
testData[47] = (unsigned char *)test47;
testData[48] = (unsigned char *)test48;
testData[49] = (unsigned char *)test49;
testData[50] = (unsigned char *)test50;
testData[51] = (unsigned char *)test51;
testData[52] = (unsigned char *)test52;
testData[53] = (unsigned char *)test53;
testData[54] = (unsigned char *)test54;
testData[55] = (unsigned char *)test55;
testData[56] = (unsigned char *)test56;
testData[57] = (unsigned char *)test57;
testData[58] = (unsigned char *)test58;
testData[59] = (unsigned char *)test59;
testData[60] = (unsigned char *)test60;
testData[61] = (unsigned char *)test61;
testData[62] = (unsigned char *)test62;
testData[63] = (unsigned char *)test63;
testData[64] = (unsigned char *)test64;
testData[65] = (unsigned char *)test65;
testData[66] = (unsigned char *)test66;
testData[67] = (unsigned char *)test67;
testData[68] = (unsigned char *)test68;
testData[69] = (unsigned char *)test69;
testData[70] = (unsigned char *)test70;
testData[71] = (unsigned char *)test71;
testData[72] = (unsigned char *)test72;
testData[73] = (unsigned char *)test73;
testData[74] = (unsigned char *)test74;
testData[75] = (unsigned char *)test75;
testData[76] = (unsigned char *)test76;
testData[77] = (unsigned char *)test77;
testData[78] = (unsigned char *)test78;
testData[79] = (unsigned char *)test79;
testData[80] = (unsigned char *)test80;
testData[81] = (unsigned char *)test81;
testData[82] = (unsigned char *)test82;
testData[83] = (unsigned char *)test83;
testData[84] = (unsigned char *)test84;
testData[85] = (unsigned char *)test85;
testData[86] = (unsigned char *)test86;
testData[87] = (unsigned char *)test87;
testData[88] = (unsigned char *)test88;
testData[89] = (unsigned char *)test89;
testData[90] = (unsigned char *)test90;
testData[91] = (unsigned char *)test91;
testData[92] = (unsigned char *)test92;
testData[93] = (unsigned char *)test93;
testData[94] = (unsigned char *)test94;
testData[95] = (unsigned char *)test95;
testData[96] = (unsigned char *)test96;
testData[97] = (unsigned char *)test97;
testData[98] = (unsigned char *)test98;
testData[99] = (unsigned char *)test99;
testData[100] = (unsigned char *)test100;
testData[101] = (unsigned char *)test101;
testData[102] = (unsigned char *)test102;
testData[103] = (unsigned char *)test103;
testData[104] = (unsigned char *)test104;
testData[105] = (unsigned char *)test105;
testData[106] = (unsigned char *)test106;
testData[107] = (unsigned char *)test107;
testData[108] = (unsigned char *)test108;
testData[109] = (unsigned char *)test109;
testData[110] = (unsigned char *)test110;
testData[111] = (unsigned char *)test111;
testData[112] = (unsigned char *)test112;
testData[113] = (unsigned char *)test113;
testData[114] = (unsigned char *)test114;
testData[115] = (unsigned char *)test115;
testData[116] = (unsigned char *)test116;
testData[117] = (unsigned char *)test117;
testData[118] = (unsigned char *)test118;
testData[119] = (unsigned char *)test119;
testData[120] = (unsigned char *)test120;
testData[121] = (unsigned char *)test121;
testData[122] = (unsigned char *)test122;
testData[123] = (unsigned char *)test123;
testData[124] = (unsigned char *)test124;
testData[125] = (unsigned char *)test125;
testData[126] = (unsigned char *)test126;
testData[127] = (unsigned char *)test127;
testData[128] = (unsigned char *)test128;
testData[129] = (unsigned char *)test129;
testData[130] = (unsigned char *)test130;
testData[131] = (unsigned char *)test131;
testData[132] = (unsigned char *)test132;
testData[133] = (unsigned char *)test133;
testData[134] = (unsigned char *)test134;
testData[135] = (unsigned char *)test135;
testData[136] = (unsigned char *)test136;
testData[137] = (unsigned char *)test137;
testData[138] = (unsigned char *)test138;
testData[139] = (unsigned char *)test139;
testData[140] = (unsigned char *)test140;
testData[141] = (unsigned char *)test141;
testData[142] = (unsigned char *)test142;
testData[143] = (unsigned char *)test143;
testData[144] = (unsigned char *)test144;
testData[145] = (unsigned char *)test145;
testData[146] = (unsigned char *)test146;
testData[147] = (unsigned char *)test147;
testData[148] = (unsigned char *)test148;
testData[149] = (unsigned char *)test149;
testData[150] = (unsigned char *)test150;
testData[151] = (unsigned char *)test151;
testData[152] = (unsigned char *)test152;
testData[153] = (unsigned char *)test153;
testData[154] = (unsigned char *)test154;
testData[155] = (unsigned char *)test155;
testData[156] = (unsigned char *)test156;
testData[157] = (unsigned char *)test157;
testData[158] = (unsigned char *)test158;
testData[159] = (unsigned char *)test159;
testData[160] = (unsigned char *)test160;
testData[161] = (unsigned char *)test161;
testData[162] = (unsigned char *)test162;
testData[163] = (unsigned char *)test163;
testData[164] = (unsigned char *)test164;
testData[165] = (unsigned char *)test165;
testData[166] = (unsigned char *)test166;
testData[167] = (unsigned char *)test167;
testData[168] = (unsigned char *)test168;
testData[169] = (unsigned char *)test169;
testData[170] = (unsigned char *)test170;
testData[171] = (unsigned char *)test171;
testData[172] = (unsigned char *)test172;
testData[173] = (unsigned char *)test173;
testData[174] = (unsigned char *)test174;
testData[175] = (unsigned char *)test175;
testData[176] = (unsigned char *)test176;
testData[177] = (unsigned char *)test177;
testData[178] = (unsigned char *)test178;
testData[179] = (unsigned char *)test179;



  
  // Enable serial debug
  Serial.begin(57600);
  pinMode(13, OUTPUT);
}


void loop()
{
  
  if ( ble_connected() )
  {
    ble_write_bytes(testData[count], 5);
  }

  ble_do_events();
  
  count = count + 1;
  
  if (count > 179) {
    count = 0;
  }
  digitalWrite(13, HIGH);
  delay(25);
  digitalWrite(13, LOW);
  delay(25);         
}


