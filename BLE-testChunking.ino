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


  // Concatenate a string together for writing to output
  for (i = 0; i < numDataPoints; i++) {
    strcat(buffer, testData[i]);
    if (i < numDataPoints - 1) {
      strcat(buffer, ",");
    }
  }
  
  // memcpy is used to type convert char into unsigned char (required by the ble_write_bytes fn)
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
