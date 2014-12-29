/*

Copyright (c) 2012-2014 RedBearLab

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

/*
 *    HelloWorld
 *
 *    HelloWorld sketch, work with the Chat iOS/Android App.
 *    It will send "Hello World" string to the App every 1 sec.
 *
 */

//"services.h/spi.h/boards.h" is needed in every new project
#include <SPI.h>
#include <boards.h>
#include <RBL_nRF8001.h>

unsigned char *testData[32];
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
  
  char *test1 = "4.453";
  char *test2 = "5.223";
  char *test3 = "4.223";
  char *test4 = "5.111";
  char *test5 = "4.783";
  char *test6 = "5.223";
  char *test7 = "4.313";
  char *test8 = "5.343";
  char *test9 = "4.903";
  char *test10 = "5.114";
  char *test11 = "4.551";
  char *test12 = "4.643";
  char *test13 = "4.888";
  char *test14 = "5.191";
  char *test15 = "4.523";
  char *test16 = "4.377";
  char *test17 = "5.423";
  char *test18 = "5.036";
  char *test19 = "4.903";
  char *test20 = "4.821";
  char *test21 = "5.383";
  char *test22 = "4.492";
  char *test23 = "5.123";
  char *test24 = "4.677";
  char *test25 = "5.249";
  char *test26 = "4.593";
  char *test27 = "5.374";
  char *test28 = "5.478";
  char *test29 = "4.553";
  char *test30 = "5.818";
  char *test31 = "5.467";
  char *test32 = "4.719";
  
  testData[0] = (unsigned char *)test1;
  testData[1] = (unsigned char *)test2;
  testData[2] = (unsigned char *)test3;
  testData[3] = (unsigned char *)test4;
  testData[4] = (unsigned char *)test5;
  testData[5] = (unsigned char *)test6;
  testData[6] = (unsigned char *)test7;
  testData[7] = (unsigned char *)test8;
  testData[8] = (unsigned char *)test9;
  testData[9] = (unsigned char *)test10;
  testData[10] = (unsigned char *)test11;
  testData[11] = (unsigned char *)test12;
  testData[12] = (unsigned char *)test13;
  testData[13] = (unsigned char *)test14;
  testData[14] = (unsigned char *)test15;
  testData[15] = (unsigned char *)test16;
  testData[16] = (unsigned char *)test17;
  testData[17] = (unsigned char *)test18;
  testData[18] = (unsigned char *)test19;
  testData[19] = (unsigned char *)test20;
  testData[20] = (unsigned char *)test21;
  testData[21] = (unsigned char *)test22;
  testData[22] = (unsigned char *)test23;
  testData[23] = (unsigned char *)test24;
  testData[24] = (unsigned char *)test25;
  testData[25] = (unsigned char *)test26;
  testData[26] = (unsigned char *)test27;
  testData[27] = (unsigned char *)test28;
  testData[28] = (unsigned char *)test29;
  testData[29] = (unsigned char *)test30;
  testData[30] = (unsigned char *)test31;
  testData[31] = (unsigned char *)test32;
  
  // Enable serial debug
  Serial.begin(57600);
  pinMode(13, OUTPUT);
}

// EKG max 5.375
// EKG min 4.05

//unsigned char testData[ ] = {"4.556", "5.234", "4.788", "4.233", "4.333", "5.111", "4.999", "5.243", "4.383", "5.299"};


void loop()
{
  
  if ( ble_connected() )
  {
    ble_write_bytes(testData[count], 5);
  }

  ble_do_events();
  
  count = count + 1;
  
  if (count > 31) {
    count = 0;
  }
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);             
}


