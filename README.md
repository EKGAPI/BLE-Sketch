BLE-Sketch
============

#Introduction

This repo contains several sketches used to mock ECG data and broadcast it via Bluetooth Smart (Bluetooth Low Energy) from a Redbear Lab Blend Micro board.

The .ino files can be opened, edited and uploaded to the device with Arduino IDE software.

In all sketch files, the write frequency can be adjusted in the loop() functions by changing the number of miliseconds passed into delay().

##RBL_nRF8001.h:##
This is a library file that has been modified to suit the needs of our data transmission and should replace the library file in your local Arduino Library directory. The modification is small and can be found in the ble_write_bytes() function on line 164. To prevent data stacking in the transmission write buffer, we reset the buffer length to zero before every write.


##BLE-NSR.ino:##
This sketch broadcasts a mock Normal Sinus Rhythm (NSR, normal heart rythm) every 50ms in an infinite loop. This is achieved by mocking a [QRS complex](http://en.wikipedia.org/wiki/QRS_complex) of 9 datapoints followed by 4 flatline datapoints (adjustable), giving consisten r-wave intervals.


##BLE-arrhythmia.ino:##
This sketch broadcasts mock arrhythmia ECG data every 50ms in an infinite loop. This is achieved by mocking a [QRS complex](http://en.wikipedia.org/wiki/QRS_complex) of 9 datapoints followed by either 0 to 4 flatline datapoints (adjustable), giving greater variance among r-wave intervals.

##BLE-Sketch.ino##
This sketch broadcasts 180 points of real ECG NSR data every 50ms. A light on the Arduino board flashes coorespondingly every 50ms.

##BLE-testChunking.ino##
This sketch was used to test the ability of the Arduino to chunk data points together as an attempt to shoehorn in higher time resolution. Since the time between Bluetooth events bottomed out at around 60ms, which is too high for a decent ECG trace, we explored the possibility of delivering multiple data points per event in order to mimic a higher time resolution. This turned out to be not a viable strategy, as the hardware has a write buffer of only 20 bytes, which would be filled by merely three data points (e.g. 4.555,4.798,4.356 is 18 bytes).

##LogSampleIntoCLangArray.js##
A JS file you can run to convert an object in the following format:
[
  {
      "x": 14.992 ,
      "y": 4.985
    },
  {
      "x": 14.994 ,
      "y": 4.995
    }
]

by outputting the result to the console, a C++ array in the following format:

char *test178 = "4.495";
char *test179 = "4.950";

testData[178] = (unsigned char *)test178;
testData[179] = (unsigned char *)test179;

The data resolution interval can be set at the top of the file.

The data object included in this file consists of around 5000 real ECG NSR datapoints read at 3ms per point.



