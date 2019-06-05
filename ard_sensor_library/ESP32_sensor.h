/*
 open to anyone

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

/**
 * first shot at home sensor network as a standard library to load to all ESP32-Sensors that varies only by initialization
 *
 * Class declaration for ESP32_sensor
 *
 */

/*
Peripherals definition mapping:
0 - Emitter node (connected to a Sever)
1 - Red led Bookshelf
2 - Green led Bookshelf
3 - Blue led Bookshelf
4 - Dim-able light TV

*/
#ifndef __ESP32_sensor__
#define __ESP32_sensor__

//initial definitions
#include "Arduino.h"
#include <SPI.h>
#include <WiFi.h> //for connecting to WiFi
#include <ESPAsyncWebServer.h> // for handling GET/POST requests
#include <HTTPClient.h> //for GET/POST requests to main server
#include <stdarg.h> //for variable length arg functions
#include <stdio.h> //for variable length arg functions


/**
 * Define intilizations? or sensors?
 *
 * 
 */
 
//////////////////include info if necessary 
 


class E32SN
{
	public:
		/////////// for All
		E32SN();
		
		
		void I_am(char SENSORS , ...); //rename peripheral

		/////////// all sensors have servers and client implementations
		//void ReadSerial();
		//bool MessageAvailable(RF24 radio); //checks if message is available and sends message
		//bool FeedBackChecker(RF24 RADIO); //checks for feedback and tries to resend message is none. (max 5 times, once every 100ms)

	
	private:
		//int _Ihave;
		//unsigned long _FeedBackTimer;
		//int _SerialBuffer;
		//int _messageSize = 5;// needs to be the same as _inByte
		//int _inByte[5] = {0,0,0,0,0}; // largest number for 2 Bytes - coded info for ECU (byte1) and value (byte2)
		//int _tempCount;
		//unsigned long FeedBackTimer[10]={0,0,0,0,0,0,0,0,0,0};
		//int FeedBackCounter[10]={0,0,0,0,0,0,0,0,0,0};
		///////////for Client
		//int Peripherals[10] = {0,0,0,0,0,0,0,0,0,0};
		//int _version;
		
		  
		//Peripherals

};

#endif // __ESP32_sensor__