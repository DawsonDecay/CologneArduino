#include <Servo.h>
Servo servo;
// Dawson's file
const int MOTION_PIN_1 = 2; // Pin connected to motion detector 1
const int MOTION_PIN_2 = 3; // Pin connected to motion detector 2
const int MOTION_PIN_3 = 4; // Pin connected to motion detector 3
const int MOTION_PIN_4 = 5; // Pin connected to motion detector 4
const int MOTION_PIN_5 = 6; // Pin connected to motion detector 5
const int LED_PIN_1 = 13; // LED pin 1 - active-high
const int LED_PIN_2 = 12; // LED pin 2 - active-high
const int LED_PIN_3 = 11; // LED pin 3 - active-high
const int LED_PIN_4 = 10; // LED pin 4 - active-high
const int LED_PIN_5 = 9; // LED pin 5 - active-high
int position1 = 0;
int position2 = 37;
int position3 = 75;
int position4 = 112;
int position5 = 150;
int currentpostion = 0;

void setup()
{
  Serial.begin(9600);
  servo.attach(7);
  // The PIR sensor's output signal is an open-collector, 
  // so a pull-up resistor is required:
  pinMode(MOTION_PIN_1, INPUT_PULLUP);
  pinMode(MOTION_PIN_2, INPUT_PULLUP);
  pinMode(MOTION_PIN_3, INPUT_PULLUP);
  pinMode(MOTION_PIN_4, INPUT_PULLUP);
  pinMode(MOTION_PIN_5, INPUT_PULLUP);
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  pinMode(LED_PIN_4, OUTPUT);
  pinMode(LED_PIN_5, OUTPUT);
  delay(10000);
}

void loop() 
{
  int proximity_1 = digitalRead(MOTION_PIN_1);
  if (proximity_1 == LOW) // If the sensor's output goes low, motion is detected
  {
    //digitalWrite(LED_PIN_1, HIGH);
    servo.write(position1);
    Serial.println("Motion detected on 1!");
    delay(100);
  }
  else
  {
    if (proximity_1 == HIGH);
    digitalWrite(LED_PIN_1, LOW);
    servo.write(position2);    
  }

  int proximity_2 = digitalRead(MOTION_PIN_2);
  if (proximity_2 == LOW) // If the senor's output goes low, motion is detected
  {
    digitalWrite(LED_PIN_2, HIGH);
    servo.write(position2);
    Serial.println("Motion detected on 2!");
    delay(100);
  }
  else
  {
    if (proximity_1 == HIGH);
    digitalWrite(LED_PIN_2, LOW);
    servo.write(position3);
  }
  
    int proximity_3 = digitalRead(MOTION_PIN_3);
  if (proximity_3 == LOW) // If the sensor's output goes low, motion is detected
  {
    digitalWrite(LED_PIN_3, HIGH);
    servo.write(position3);
    Serial.println("Motion detected on 3!");
    delay(100);
  }
  else
  {
    if (proximity_1 == HIGH);
    digitalWrite(LED_PIN_3, LOW);
    servo.write(position4);
  }

    int proximity_4 = digitalRead(MOTION_PIN_4);
  if (proximity_4 == LOW) // If the sensor's output goes low, motion is detected
  {
    digitalWrite(LED_PIN_4, HIGH);
    servo.write(position4);
    Serial.println("Motion detected on 4!");
    delay(100);
  }
  else
  {
    if (proximity_1 == HIGH);
    digitalWrite(LED_PIN_4, LOW);
    servo.write(position5);
  }

    int proximity_5 = digitalRead(MOTION_PIN_5);
  if (proximity_5 == LOW) // If the sensor's output goes low, motion is detected
  {
    digitalWrite(LED_PIN_5, HIGH);
    servo.write(position5);
    Serial.println("Motion detected on 5!");
    delay(100);
  }
  else
  {
    if (proximity_1 == HIGH);
    digitalWrite(LED_PIN_5, LOW);
    servo.write(position4);
  }
}
