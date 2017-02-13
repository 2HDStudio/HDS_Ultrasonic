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
 
 #ifndef _HDS_ULTRASONIC_H_
#define _HDS_ULTRASONIC_H_

#include "Arduino.h"

class HDS_Ultrasonic
{
public:
	HDS_Ultrasonic(uint8_t pin);
    
    /**
     * \par Function
     *   distanceInch
     * \par Description
     *   Inch return the distance
     * \param[in]
     *   None
     * \par Output
     *   None
     * \return
     *   The distance measurement in inch
     * \par Others
     *   None
     */
	double distanceInch(void);
    /**
     * \par Function
     *   distanceCm
     * \par Description
     *   Centimeters return the distance
     * \param[in]
     *   None
     * \par Output
     *   None
     * \return
     *   The distance measurement in centimeters
     * \par Others
     *   None
     */
	double distanceCm(void);
private:
    long measure(unsigned long timeout);
	uint8_t _Ultrasonic_pin;
};


#endif