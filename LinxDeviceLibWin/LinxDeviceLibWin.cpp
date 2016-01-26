/****************************************************************************************
**  Dummy LINX Device Abstraction Layer For Win32 (To prevent LabVIEW from searching
**  for .dll that does not exist.
**
**  For more information see:           www.labviewmakerhub.com/linx
**  For support visit the forums at:    www.labviewmakerhub.com/forums/linx
**
**  Written By Sam Kristoff
**
**  BSD2 License.
****************************************************************************************/

#include <stdio.h>
#include <iostream>
#include <string.h>

#include "LinxDeviceLibWin.h"

//------------------------------------- Constructor / Destructor -------------------------------------
extern "C" int LinxOpen()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxClose()
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- Enumeration -------------------------------------
extern "C" unsigned char LinxGetDeviceFamily()
{
	return 0;
}

extern "C" unsigned char LinxGetDeviceId()
{
	return L_FUNCTION_NOT_SUPPORTED;;
}

extern "C" int LinxGetDeviceName(string* name)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- General -------------------------------------
extern "C" unsigned long LinxGetMilliSeconds()
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- Analog -------------------------------------
extern "C" unsigned long LinxAiGetRefSetVoltage()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" unsigned long LinxAoGetRefSetVoltage()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" unsigned long LinxAiGetResolution()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" unsigned long LinxAoGetResolution()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" unsigned char LinxAiGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" unsigned char LinxAoGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxAiGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxAoGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxAnalogRead(unsigned char numChans, unsigned char* channels, unsigned char* values)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxAnalogReadNoPacking(unsigned char numChans, unsigned char* channels, unsigned long* values)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- CAN -------------------------------------
extern "C" unsigned char LinxCanGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}
extern "C" int LinxCanGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- Digital -------------------------------------
extern "C" unsigned char LinxDigitalGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxDigitalGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxDigitalRead(unsigned char numChans, unsigned char* channels, unsigned char* values)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxDigitalReadNoPacking(unsigned char numChans, unsigned char* channels, unsigned char* values)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxDigitalWrite(unsigned char numChans, unsigned char* channels, unsigned char* values)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxDigitalWriteNoPacking(unsigned char numChans, unsigned char* channels, unsigned char* values)
{
	return L_FUNCTION_NOT_SUPPORTED;
}



//------------------------------------- I2C -------------------------------------
extern "C" unsigned char LinxI2cGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxI2cGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxI2cOpenMaster(unsigned char channel)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxI2cSetSpeed(unsigned char channel, unsigned long speed, unsigned long* actualSpeed)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxI2cWrite(unsigned char channel, unsigned char slaveAddress, unsigned char eofConfig, unsigned char numBytes, unsigned char* sendBuffer)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxI2cRead(unsigned char channel, unsigned char slaveAddress, unsigned char eofConfig, unsigned char numBytes, unsigned int timeout, unsigned char* recBuffer)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxI2cClose(unsigned char channel)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- PWM -------------------------------------
extern "C" unsigned char LinxPwmGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxPwmGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxPwmSetDutyCycle(unsigned char numChans, unsigned char* channels, unsigned char* values)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- QE -------------------------------------
extern "C" unsigned char LinxQeGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}
extern "C" int LinxQeGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

//------------------------------------- Servo -------------------------------------
extern "C" unsigned char LinxServoGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxServoGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- SPI -------------------------------------
extern "C" unsigned char LinxSpiGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxSpiGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxSpiOpenMaster(unsigned char channel)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxSpiSetBitOrder(unsigned char channel, unsigned char bitOrder)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxSpiSetMode(unsigned char channel, unsigned char mode)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxSpiSetSpeed(unsigned char channel, unsigned long speed, unsigned long* actualSpeed)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxSpiWriteRead(unsigned char channel, unsigned char frameSize, unsigned char numFrames, unsigned char csChan, unsigned char csLL, unsigned char* sendBuffer, unsigned char* recBuffer)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


//------------------------------------- UART -------------------------------------
extern "C" unsigned char LinxUartGetNumChans()
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxUartGetChans(unsigned char numChans, unsigned char* channels)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxUartOpen(unsigned char channel, unsigned long baudRate, unsigned long* actualBaud)
{
	return L_FUNCTION_NOT_SUPPORTED;
}
extern "C" int LinxUartSetBaudRate(unsigned char channel, unsigned long baudRate, unsigned long* actualBaud)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxUartGetBytesAvailable(unsigned char channel, unsigned char *numBytes)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxUartRead(unsigned char channel, unsigned char numBytes, unsigned char* recBuffer, unsigned char* numBytesRead)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxUartWrite(unsigned char channel, unsigned char numBytes, unsigned char* sendBuffer)
{
	return L_FUNCTION_NOT_SUPPORTED;
}

extern "C" int LinxUartClose(unsigned char channel)
{
	return L_FUNCTION_NOT_SUPPORTED;
}


