#include "Arduino.h"

int yellowLed = 8;
int greenLed = 9;
int blueLed = 10;
int redLed = 11;

void setup(){
    //Serial.begin(9600);//Inicia a comunicaço serial
    pinMode(yellowLed, OUTPUT);//Porta PWM do led
    pinMode(greenLed, OUTPUT);
    pinMode(blueLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

void loop(){
    //valor = analogRead(A0);
    //valor = map(valor,0,1024,0,255);
    //Serial.println(valor);
    for(int i = 0; i < 3; i++) wave();
    allLeds();
    for(int i = 0; i < 3; i++){
      gausGo();
      gausBack();
    }
}

void wave(){
    digitalWrite(yellowLed, HIGH);
    delay(50);
    digitalWrite(yellowLed, LOW);
    delay(50);
    digitalWrite(greenLed, HIGH);
    delay(50);
    digitalWrite(greenLed, LOW);
    delay(50);
    digitalWrite(blueLed, HIGH);
    delay(50);
    digitalWrite(blueLed, LOW);
    delay(50);
    digitalWrite(redLed, HIGH);
    delay(50);
    digitalWrite(redLed, LOW);
    delay(50);
}

void allLeds(){
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, HIGH);
  digitalWrite(blueLed, HIGH);
  digitalWrite(redLed, HIGH);
  delay(1000);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
  digitalWrite(redLed, LOW);
}

void gausGo(){
    digitalWrite(blueLed, HIGH);
    digitalWrite(greenLed, HIGH);
    delay(100);
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, HIGH);
    delay(100);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
}

void gausBack(){
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, HIGH);
    delay(100);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
    digitalWrite(blueLed, HIGH);
    digitalWrite(greenLed, HIGH);
    delay(100);
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
}