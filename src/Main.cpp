#include "StartGame.h"
#include "Genius.h"

Genius g;
StartGame s;

void setup(){
    s.InitPins();
    g.InitPins();
}

void loop(){
    s.StartGameLoop();
    g.GeniusLoop();
}