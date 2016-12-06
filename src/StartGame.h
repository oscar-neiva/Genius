#ifndef STARTGAME_H
#define STARTGAME_H

#include "Arduino.h"

class StartGame{
private:
    int yellowLed;
    int greenLed;
    int blueLed;
    int redLed;
    
    int ledPins[4] = { 8, 9, 10, 11 };

public:
	StartGame();

    void InitPins();
    void StartGameLoop();
	void Wave();
    void OneByOne();
    void All();
    void GausGo();
    void GausBack();
};

#endif