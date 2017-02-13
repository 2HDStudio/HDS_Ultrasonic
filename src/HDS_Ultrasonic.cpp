/**
 * \par Copyright (C), 2017, Honeycomb hardware design studio
 * \class HdsUltrasonicSensor
 * \brief   Driver for HDS ultrasonic sensor device.
 * @file    HDS_Ultrasonic.h
 * @author  HDS Team
 * @version V1.0.0
 * @date    2017/02/13
 * @brief   Header for for HDS_Ultrasonic.cpp module
 *
 * \par Copyright
 * This software is Copyright (C), 2017, Honeycomb hardware design studio. Use is subject to license \n
 * conditions. The main licensing options available are GPL V2 or Commercial: \n
 *
 * \par Open Source Licensing GPL V2
 * This is the appropriate option if you want to share the source code of your \n
 * application with everyone you distribute it to, and you also want to give them \n
 * the right to share who uses it. If you wish to use this software under Open \n
 * Source Licensing, you must contribute all your source code to the open source \n
 * community in accordance with the GPL Version 2 when your application is \n
 * distributed. See http://www.gnu.org/copyleft/gpl.html
 *
 */
 
#include "HDS_Ultrasonic.h"

HDS_Ultrasonic::HDS_Ultrasonic(uint8_t pin)
{
	_Ultrasonic_pin = pin;
    pinMode(pin,OUTPUT);
}

long HDS_Ultrasonic::measure(unsigned long timeout)
{
    long duration;
    digitalWrite(_Ultrasonic_pin,LOW);
    delayMicroseconds(2);
    digitalWrite(_Ultrasonic_pin,HIGH);
    delayMicroseconds(10);
    digitalWrite(_Ultrasonic_pin,LOW);
    pinMode(_Ultrasonic_pin, INPUT);
    duration = pulseIn(_Ultrasonic_pin, HIGH, timeout);
    delayMicroseconds(200);
    return(duration);
}

double HDS_Ultrasonic::distanceCm(void)
{
	long digitdistance = measure(400 * 55 + 200);

    return( (double)digitdistance / 58.0);
}

double HDS_Ultrasonic::distanceInch(void)
{
	long digitdistance = measure(400 * 145 + 200);

    return( (double)digitdistance / 148.0);
}