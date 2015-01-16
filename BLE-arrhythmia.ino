//"services.h/spi.h/boards.h" is needed in every new project
#include <SPI.h>
#include <boards.h>
#include <RBL_nRF8001.h>

unsigned char *testData[11];
int randNum;
int i;
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
  randomSeed(analogRead(0));

// create mock heartbeat data (no space in between beats)
char *test0 = "4.400";
char *test1 = "4.580";
char *test2 = "4.350";
char *test3 = "4.000";
char *test4 = "7.000";
char *test5 = "3.000";
char *test6 = "4.300";
char *test7 = "4.560";
char *test8 = "4.500";
char *test9 = "4.350";

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

// data corresponding to flat line is in tenth array element
char *flat = "4.300";
testData[10] = (unsigned char *)flat;



  
  // Enable serial debug
  Serial.begin(57600);
  pinMode(13, OUTPUT);
}

void loop()
{
  // get a random number of flat-line points
  randNum = random(5);
  // create that many points
  for (i = 0; i < randNum; i++) {
    if (ble_connected()) {
      ble_write_bytes(testData[10],5);
      ble_do_events();
      delay(50);
    }
  }
  // loop through heartbeat data points
  for (i = 0; i < 10; i++) {
    ble_write_bytes(testData[i], 5);
    ble_do_events();
    delay(50);
  }
}