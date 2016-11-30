#ifndef STARTGAME_H
#define STARTGAME_H

#include "Arduino.h"

class StartGame{
private:
    int yellowLed;
    int greenLed;
    int blueLed;
    int redLed;

public:
	StartGame();

    void InitGame();
    void Start();
	void Wave();
    void OneByOne();
    void All();
    void GausGo();
    void GausBack();
};

#endif