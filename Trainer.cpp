//
//  Trainer.cpp
//  CreatureTrainer
//
//  You may NOT #include any .h files we provide you (Battle, Creature, CreatureType,
//  EECSRandom, Party, PrintHelper)
//  other than the ones name "ClassX.h" and "Trainer.h"
//  You may #include other <> libraries if you wish to
//
//  Created by Jeremy Gibson on 11/4/14.
//  Copyright (c) 2014 Jeremy Richard Gibson. All rights reserved.
//

#include <iostream>
#include <sstream>
#include "Trainer.h"
#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"


string Trainer::makeMove(stringstream& situation) {
    // Output for human player
    // Instead of doing this, you will need to replace the code of Trainer
    // to parse the input situation and create a proper response,
    // (like "a" for attack or "s3" to swap to the creature in slot 3).
    cout << situation.str();
    poke1.readIn(situation);
    poke1.setPokeNumber(1);
    poke2.readIn(situation);
    poke2.setPokeNumber(2);
    poke3.readIn(situation);
    poke3.setPokeNumber(3);
    poke4.readIn(situation);
    poke4.setPokeNumber(4);
    int count;
    count = activePoke.readInActive(situation);
    switch (count){
        case 1:
            activePoke = poke1;
            break;
        case 2:
            activePoke = poke2;
            break;
        case 3:
            activePoke = poke3;
            break;
        case 4:
            activePoke = poke4;
            break;
    }
    
    
    
    //cout << endl << endl;
    //cout << "Active Poke: " << activePoke.getPokeName() << " has health of " << activePoke.getPokeHealth() << " out of " << activePoke.getPokeMaxHealth() << endl;
    //cout << endl << endl;
    //cout << poke1.getPokeName() << " has health of " << poke1.getPokeHealth() << " out of " << poke1.getPokeMaxHealth() << endl;
    //cout << poke2.getPokeName() << " has health of " << poke2.getPokeHealth() << " out of " << poke2.getPokeMaxHealth() << endl;
    //cout << poke3.getPokeName() << " has health of " << poke3.getPokeHealth() << " out of " << poke3.getPokeMaxHealth() << endl;
    //cout << poke4.getPokeName() << " has health of " << poke4.getPokeHealth() << " out of " << poke4.getPokeMaxHealth() << endl;
    
    string response;
    response = switchIfDead(activePoke);
    
    
    /*
     * This line is basically what your AI chooses to do
     * When first playing, you may type in your move.
     * For both the core and reach portions, however, you need to
     * comment out "cin >> response" and instead have this function
     * generate a response string.
     */
    
    
    return response;
}


void Trainer::finalSituation(stringstream& situation) {
    cout << situation.str();
    
}

string Trainer::switchIfDead(Pokemon& active){
    
    AI a;
    int i = a.SwitchToRight(active);;
    if (a.isDead(active)){
        while (a.isDead(active)){
            switch (i){
                case 1:
                    active = poke1;
                    break;
                case 2:
                    active = poke2;
                    break;
                case 3:
                    active = poke3;
                    break;
                case 4:
                    active = poke4;
                    break;
            }
            
        }
        string a = "s" + to_string(i);
        return a;
    }
    else{
        return "a";
    }
}
