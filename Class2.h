//
//  Class2.h
//  Class2
//
//  These class heaaders are for use in your Trainer class. If you wish to 
//  write helper classes, write them in these 5 classes. 
//  Use of these classes is optional. You may use none or any or all of them. 
//  You still may NOT #include any.h files we provide you
//  (Battle, Creature, CreatureType, EECSRandom, Party, PrintHelper)
//

#ifndef __CreatureTrainer__Class2__
#define __CreatureTrainer__Class2__

#include <sstream>

using namespace std;

// vvvvvv Your implementations go between this line…

class Class2{
public:

	void getMyCreatures(stringstream& situation);


	//getters

	string getPoke1Name();

	string getPoke2Name();

	string getPoke3Name();

	string getPoke4Name();

	int getPoke1health();

	int getPoke2health();

	int getPoke3health();

	int getPoke4health();

	int getPoke1maxHealth();

	int getPoke2maxHealth();

	int getPoke3maxHealth();

	int getPoke4maxHealth();

	

private:

	string poke1name, poke2name, poke3name, poke4name;
	int poke1health, poke2health, poke3health, poke4health;
	int poke1maxHealth, poke2maxHealth, poke3maxHealth, poke4maxHealth;

};

// ^^^^^^ And this line. That's it!

#endif /* defined(__CreatureTrainer__Class2__) */
