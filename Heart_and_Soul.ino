/***********************************************************************
 * Exp4_MakingSounds -- RedBot Experiment 4
 *
 * Push the button (D12) to make some noise and start running!
 *
 * Hardware setup:
 * Plug the included RedBot Buzzer board into the Servo header labeled 9.
 *
 * This sketch was written by SparkFun Electronics,with lots of help from 
 * the Arduino community. This code is completely free for any use.
 * 
 * 23 Sept 2013 N. Seidle/M. Hord
 * 29 Oct 2014 B. Huang
 ***********************************************************************/

#include <RedBot.h>
#include <Servo.h>
RedBotMotors motors;
RedBotAccel accelerometer;


// Create a couple of constants for our pins.
const int buzzerPin = 9;
const int buttonPin = 12;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP); // configures the button as an INPUT
  // INPUT_PULLUP defaults it to HIGH.
  pinMode(buzzerPin, OUTPUT);  // configures the buzzerPin as an OUTPUT
}

void loop() 
{ 
accelerometer.read();

if ( accelerometer.x > 1200)
  { 
    tone(buzzerPin, 587.33);   // D5, first note
    //  the variable "buzzerPin". 
    motors.leftDrive(-350);    // Start the motors. The whiskers will stop them.
    motors.rightDrive(360);
    delay(200);   // Wait for 200ms.
    noTone(buzzerPin);   // Stop playing the tone.
    
    delay(100);
    
    tone(buzzerPin, 587.33);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 739.99);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 739.99);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 587.33);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 587.33);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 392.00);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 392.00);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 440.00);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 440.00);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 554.37);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);
    
    motors.stop();

    tone(buzzerPin, 554.37);// end of repeat
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 587.33);
    motors.drive(250);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 587.33);
    delay(100);
    noTone(buzzerPin);
    motors.stop();
    
    delay(100);

    tone(buzzerPin, 739.99);
    motors.drive(-250);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 739.99);
    delay(100);
    noTone(buzzerPin);
    motors.stop();
    
    delay(100);

    tone(buzzerPin, 493.88);
    motors.drive(250);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 739.99);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 739.99);
    delay(100);
    noTone(buzzerPin);
    motors.stop();
    
    delay(100);

    tone(buzzerPin, 659.25);
    motors.leftDrive(-255);    // Start the motors. The whiskers will stop them.
    motors.rightDrive(-150);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 659.25);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 783.99);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 783.99);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 880.00);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 880.00);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 554.37);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 554.37);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 587.33); //loop 3
    delay(200);
    noTone(buzzerPin); 
    
    delay(100);
    
    tone(buzzerPin, 587.33);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 739.99);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 739.99);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 587.33);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 587.33);
    delay(100);
    noTone(buzzerPin);
    motors.stop();
    
    delay(100);
    
    motors.leftDrive(-200);
    motors.rightDrive(-250);
    tone(buzzerPin, 392.00);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 392.00);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 493.88);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 440.00);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 440.00);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 554.37);
    delay(200);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 554.37);
    delay(100);
    noTone(buzzerPin);
    
    delay(100);
    
    motors.drive(255);
    tone(buzzerPin, 587.33);
    delay(800);
    noTone(buzzerPin);
    
    delay(100);

    tone(buzzerPin, 554.37);
    delay(100); 
    noTone(buzzerPin);
    
    delay(100);
 
    tone(buzzerPin, 493.88);
    delay(800);
    noTone(buzzerPin);
    
    delay(100);    
 
    tone(buzzerPin, 440.00);
    delay(100);
    noTone(buzzerPin);
  
    delay(100);
    
    tone(buzzerPin, 392.00);
    delay(800);
    noTone(buzzerPin);

    delay(100);
    
    tone(buzzerPin, 369.99);
    delay(100);
    noTone(buzzerPin);
            
    delay(100);
    
    tone(buzzerPin, 329.63);
    delay(400);
    noTone(buzzerPin);
    
    delay(100);
    
    tone(buzzerPin, 440);
    delay(400);
    noTone(buzzerPin);
    motors.stop();
    
    delay(1000);
    
     // drive forward -- instead of using motors.drive(); Here is another way.
  motors.rightMotor(117); // Turn on right motor clockwise medium power (motorPower = 150) 
  motors.leftMotor(-100); // Turn on left motor counter clockwise medium power (motorPower = 150) 
  delay(5000);       // for 1000 ms.
  motors.stop();    // brake() motors

  // pivot -- spinning both motors CCW causes the RedBot to turn to the right
  motors.rightMotor(-100); // Turn CCW at motorPower of 100
  motors.leftMotor(-100);  // Turn CCW at motorPower of 100
  delay(500);       // for 500 ms.    
  motors.stop();    // brake() motors
  delay(500);       // for 500 ms.    

  // drive forward -- instead of using motors.drive(); Here is another way.
  motors.rightMotor(117); // Turn on right motor clockwise medium power (motorPower = 150) 
  motors.leftMotor(-100); // Turn on left motor counter clockwise medium power (motorPower = 150)
  delay(5000);       // for 1000 ms.
  motors.stop();     // brake() motors
  
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
  motors.rightMotor(-100); // Turn CCW at motorPower of 100
  motors.leftMotor(-100);  // Turn CCW at motorPower of 100
  delay(500);       // for 500 ms.    
  motors.stop();    // brake() motors
  delay(500);       // for 500 ms.    

  // drive forward -- instead of using motors.drive(); Here is another way.
  motors.rightMotor(117); // Turn on right motor clockwise medium power (motorPower = 150) 
  motors.leftMotor(-100); // Turn on left motor counter clockwise medium power (motorPower = 150)
  delay(5000);       // for 1000 ms.
  motors.stop();     // brake() motors
  
    // pivot -- spinning both motors CCW causes the RedBot to turn to the right
  motors.rightMotor(-100); // Turn CCW at motorPower of 100
  motors.leftMotor(-100);  // Turn CCW at motorPower of 100
  delay(500);       // for 500 ms.    
  motors.stop();    // brake() motors
  delay(500);       // for 500 ms.    

  // drive forward -- instead of using motors.drive(); Here is another way.
  motors.rightMotor(117); // Turn on right motor clockwise medium power (motorPower = 150) 
  motors.leftMotor(-100); // Turn on left motor counter clockwise medium power (motorPower = 150)
  delay(5000);       // for 1000 ms.
  motors.stop();     // brake() motors

  delay(10000);
    
  }
else  // otherwise, do this.
 {
 }
 }


