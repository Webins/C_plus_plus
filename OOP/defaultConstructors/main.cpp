#include <iostream>
#include "Player.hpp"
using namespace std;
int main(){
	Player Seromontis("Seromontis", "Knight", 4500, 75044.4545 , 550);
	cout << "Name: " << Seromontis.getName()<< endl;
	cout << "Exp: " << Seromontis.getExp() << endl;
	cout << "Health: " << Seromontis.getHealth() << endl;
	cout << "Level: " << Seromontis.getLevel() << endl;
	cout << "Vocation: " << Seromontis.getVoc() << endl;
	Seromontis.talk("I'm The King");

	cout << endl;

	Player Rookie("Rookie");
	cout << "Name: " << Rookie.getName()<< endl;
	cout << "Exp: " << Rookie.getExp() << endl;
	cout << "Health: " << Rookie.getHealth() << endl;
	cout << "Level: " << Rookie.getLevel() << endl;
	cout << "Vocation: " << Rookie.getVoc() << endl;
	Rookie.talk("I'm Rookie in rookgard");

	cout << endl;
	Player Cachero("Cachero", "Sorcerer");
	cout << "Name: " << Cachero.getName()<< endl;
	cout << "Exp: " << Cachero.getExp() << endl;
	cout << "Health: " << Cachero.getHealth() << endl;
	cout << "Level: " << Cachero.getLevel() << endl;
	cout << "Vocation: " << Cachero.getVoc() << endl;
	Rookie.talk("I'm Cachero i was banned");
	return 0;
}
