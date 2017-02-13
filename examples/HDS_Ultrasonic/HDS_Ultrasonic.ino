#include"HDS_Ultrasonic.h"

HDS_Ultrasonic ultrasonic(2);

void setup() {
  // put your setup code here, to run once:
     Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("The distance measurement in inch = ");
  Serial.println(ultrasonic.distanceInch());
  delay(2000);
  
  Serial.print("The distance measurement in centimeters = ");
  Serial.println(ultrasonic.distanceCm());
  delay(2000);
}
