#include "StartGame.h"

StartGame::StartGame(){
	yellowLed = 8;
    greenLed = 9;
    blueLed = 10;
    redLed = 11;
}

void StartGame::InitGame(){
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(blueLed, OUTPUT);
    pinMode(redLed, OUTPUT);
}

void StartGame::Start(){
    OneByOne();
    for(int i = 0; i < 3; i++) Wave();
    All();
    for(int i = 0; i < 3; i++){
        GausGo();
        GausBack();
    }
}

void StartGame::Wave(){
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
    digitalWrite(redLed, HIGH);
    delay(50);
    digitalWrite(redLed, LOW);
    delay(50);
    digitalWrite(blueLed, HIGH);
    delay(50);
    digitalWrite(blueLed, LOW);
    delay(50);
    digitalWrite(greenLed, HIGH);
    delay(50);
    digitalWrite(greenLed, LOW);
    delay(50);
    digitalWrite(yellowLed, HIGH);
    delay(50);
    digitalWrite(yellowLed, LOW);
    delay(50);
}

void StartGame::OneByOne(){
    digitalWrite(yellowLed, HIGH);
    delay(500);
    digitalWrite(yellowLed, LOW);
    delay(500);
    digitalWrite(greenLed, HIGH);
    delay(500);
    digitalWrite(greenLed, LOW);
    delay(500);
    digitalWrite(blueLed, HIGH);
    delay(500);
    digitalWrite(blueLed, LOW);
    delay(500);
    digitalWrite(redLed, HIGH);
    delay(500);
    digitalWrite(redLed, LOW);
    delay(500);
}

void StartGame::All(){
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

void StartGame::GausGo(){
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

void StartGame::GausBack(){
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