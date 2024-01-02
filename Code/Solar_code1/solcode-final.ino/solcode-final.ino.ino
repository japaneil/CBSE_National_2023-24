#include <Servo.h>
#define LDR2 A0
#define LDR1 A1
#define error 10
int point =  90;
Servo myservo1;
Servo myservo2;
Servo myservo3;

void setup() {
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
   myservo1.write(point);
   myservo2.write(point);
   myservo3.write(point);
  delay(1000);
}

void loop() {
  int ldr1 = analogRead(LDR1);
  int ldr2 = analogRead(LDR2);

  int value1 = abs(ldr1 - ldr2);
  int value2 = abs(ldr2 - ldr1);

  if ((value1 <= error) || (value2 <= error)) {

  } else {
    if (ldr1 > ldr2) {
      point = point-5;
    }
    if (ldr1 < ldr2) {
      point = point+5;
    }
  }
   myservo1.write(point);
   myservo2.write(point);
   myservo3.write(point);
  delay(80);
}
