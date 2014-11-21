//  Class2.cpp
//  Helper Class2
//
//  These class heaaders are for use in your Trainer class. If you wish to 
//  write helper classes, write them in these 5 classes. 
//  Use of these classes is optional. You may use none or any or all of them. 
//  You still may NOT #include any.h files we provide you
//  (Battle, Creature, CreatureType, EECSRandom, Party, PrintHelper)
//

#include "Class2.h"
#include <sstream>
#include <iostream>



void Class2::getMyCreatures(stringstream& situation){
	char a = ' ';
	while (a != '*'){   //reads until it hits the *
		situation >> a;
	}
	string junk;
	char j;
	
	//gets things for poke1

	situation >> poke1name;     // stores the 1st pokemon name to poke1
	situation >> poke1health;         //stores first int after name as poke1health
	situation >> j;					//ignores the "/"
	situation >> poke1maxHealth;	//stores the second in to maxhealth
	situation >> junk;

	//gets things for poke2

	situation >> poke2name;
	situation >> poke2health;
	situation >> j;
	situation >> poke2maxHealth;
	situation >> junk;

	//gets things for poke3

	situation >> poke3name;
	situation >> poke3health;
	situation >> j;
	situation >> poke3maxHealth;
	situation >> junk;

	//gets things for poke4

	situation >> poke4name;
	situation >> poke4health;
	situation >> j;
	situation >> poke4maxHealth;
	situation >> junk;


	//tests shit


	cout << poke1name << "has : " << poke1health <<" health. The max health is: " << poke1maxHealth<<  endl << endl;      // tests the 1st poke name   REMOVE
	cout << junk << " stored in junk" << endl << endl;
	// resets the stream to the beginning, might be unnecessary now




	situation.clear();    // clears stream
	situation.seekg(0, ios::beg);     // brings stream to the beginning



	//string b;                  //prints out everything in the stream situation  REMOVE
	//while (situation >> b){
	//	cout << b << " ";

};

//getters

string Class2::getPoke1Name(){
	return poke1name;
}

string Class2::getPoke2Name(){
	return poke2name;
}

string Class2::getPoke3Name(){
	return poke3name;
}

string Class2::getPoke4Name(){
	return poke4name;
}

int Class2::getPoke1health(){
	return poke1health;
}

int Class2::getPoke2health(){
	return poke2health;
}

int Class2::getPoke3health(){
	return poke3health;
}

int Class2::getPoke4health(){
	return poke4health;
}

int Class2::getPoke1maxHealth(){
	return poke1maxHealth;
}

int Class2::getPoke2maxHealth(){
	return poke2maxHealth;
}

int Class2::getPoke3maxHealth(){
	return poke3maxHealth;
}

int Class2::getPoke4maxHealth(){
	return poke4maxHealth;
}
