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


/****************************************************************************/

E32SN::E32SN()
{

	//_Ihave = _Ihave; //state who this Arduino will control - check _Ihave map table
	//
	//PERIPHERAL detail
	
	
}

/****************************************************************************/

void E32SN::I_am(char SENSORS , ...){//declare sensors/node - initialize: Peripherals matrix; Sensor Pins
	
	Serial.println("in ESN");
	
}

/****************************************************************************/



/****************************************************************************/




/****************************************************************************/





