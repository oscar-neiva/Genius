#include "Genius.h"

//StartGame s;

Genius::Genius(){
    /*oneBtn = 2;
    twoBtn = 3;
    treeBtn = 4;
    fourBtn = 5;*/

    sequence[100] = {};
    actualTurn = 0;
    actualSequenceStep = 0;
    //btnPins[4] = { 2, 3, 4, 5 };
    pressedButton = 0;
    gameOver = false;
}

void Genius::InitPins(){
    //s.InitPins();
    for(int i = 0; i <= 3; i++){
        pinMode(btnPins[i], INPUT);
    }
    randomSeed(analogRead(0));
}

void Genius::GeniusLoop(){
    if(gameOver){
        int sequence[100] = {}; //Try comment this line after 1st test
        actualTurn = 0;
        actualSequenceStep = 0;
        gameOver = false;
    }
    //s.StartGameLoop();
    if(actualTurn == 0){
      //  s.StartGameLoop();
        delay(500);
    }

    //proximaRodada();
    //reproduzirsequencia();
    //aguardarJogador();
    delay(1000);
}