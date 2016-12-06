#ifndef GENIUS_H
#define GENIUS_H

#include "Arduino.h"
#include "StartGame.h"

class Genius{
private:
    /*int oneBtn;
    int twoBtn;
    int treeBtn;
    int fourBtn;*/
    
    int sequence[100];
    int actualTurn;
    int actualSequenceStep;
    int btnPins[4] = { 2, 3, 4, 5 };
    int pressedButton;
    int gameOver;

public:
	Genius();

    void InitPins();
    void GeniusLoop();
};

#endif