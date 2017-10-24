#include <iostream>
#include <string>

using namespace std;

class  Realchicken{
public:
	Realchicken(string s){

		cout << "chicken morning exercise"<< endl;
	}
	~Realchicken(){
	}
	void chicken_sport(){
		cout << "singing" << "\n" << endl;
	}
};
//chicken proxy
class chicken {
	Realchicken* real_chicken_sport;
	string ss;
public:
	chicken(){
		real_chicken_sport = 0;
	}
	~chicken() {
		delete real_chicken_sport;
	}
	void chicken_sport() {
		if (!real_chicken_sport)
			real_chicken_sport = new Realchicken(ss);
		real_chicken_sport->chicken_sport();
	}
};

class  Realduck {
	string ss;
public:
	Realduck(string s){

		cout << "duck morning exercise" << endl;
	}
	~Realduck() {
	}
	void duck_sport() {
		cout << "swimming" <<"\n"<< endl;
	}
};
//duck proxy
class duck {
	Realduck* real_duck_sport;
	string ss;
public:
	duck() {
		real_duck_sport = 0;
	}
	~duck() {
		delete real_duck_sport;
	}
	void duck_sport() {
		if (!real_duck_sport)
			real_duck_sport = new Realduck(ss);
		real_duck_sport->duck_sport();
	}
};

class  Realcow {
	string ss;
public:
	Realcow(string s) {

		cout << "cows morning exercise" << endl;
	}
	~Realcow() {
	}
	void cow_sport() {
		cout << "sunbathing" << "\n" << endl;
	}
};
//cow proxy
class cow {
	Realcow* real_cow_sport;
	string ss;
public:
	cow() {
		real_cow_sport = 0;
	}
	~cow() {
		delete real_cow_sport;
	}
	void cow_sport() {
		if (!real_cow_sport)
			real_cow_sport = new Realcow(ss);
		real_cow_sport->cow_sport();
	}
};

class  Realsheep {
	string ss;
public:
	Realsheep(string s) {

		cout << "sheep moring exercise" << endl;
	}
	~Realsheep() {
	}
	void sheep_sport() {
		cout << "walking" << "\n" << endl;
	}
};
//sheep proxy
class sheep {
	Realsheep* real_sheep_sport;
	string ss;
public:
	sheep() {
		real_sheep_sport = 0;
	}
	~sheep() {
		delete real_sheep_sport;
	}
	void sheep_sport() {
		if (!real_sheep_sport)
			real_sheep_sport = new Realsheep(ss);
		real_sheep_sport->sheep_sport();
	}
};

class  Realpig {
	string ss;
public:
	Realpig(string s) {

		cout << "pig exercise" << endl;
	}
	~Realpig() {
	}
	void pig_sport() {
		cout << "sleeping" << "\n" << endl;
	}
};
//pig proxy
class pig {
	Realpig* real_pig_sport;
	string ss;
public:
	pig() {
		real_pig_sport = 0;
	}
	~pig() {
		delete real_pig_sport;
	}
	void pig_sport() {
		if (!real_pig_sport)
			real_pig_sport = new Realpig(ss);
		real_pig_sport->pig_sport();
	}
};

class  Realdog {
	string ss;
public:
	Realdog(string s) {

		cout << "dog exercise" << endl;
	}
	~Realdog() {
	}
	void dog_sport() {
		cout << "guard" << "\n" << endl;
	}
};
// dog proxy
class dog {
	Realdog* real_dog_sport;
	string ss;
public:
	dog() {
		real_dog_sport = 0;
	}
	~dog() {
		delete real_dog_sport;
	}
	void dog_sport() {
		if (!real_dog_sport)
			real_dog_sport = new Realdog(ss);
		real_dog_sport->dog_sport();
	}
};
class  Realfish {
	string ss;
public:
	Realfish(string s) {

		cout << "fish exercise" << endl;
	}
	~Realfish() {
	}
	void fish_sport() {
		cout << "Spit bubbles" << "\n" << endl;
	}
};
//fish proxy
class fish {
	Realfish* real_fish_sport;
	string ss;
public:
	fish() {
		real_fish_sport = 0;
	}
	~fish() {
		delete real_fish_sport;
	}
	void fish_sport() {
		if (!real_fish_sport)
			real_fish_sport = new Realfish(ss);
		real_fish_sport->fish_sport();
	}
};


void sports_list() {
	cout << "please choose your animal：chick duck cow sheep pig dog fish,并输入名称(exit结束)：" << endl;
}

int main() {
	string option;
	while (true)
	{
		sports_list();
		cin >> option;
		if (option == "exit")
			break;
		if (option == "chick")
		{
			chicken chick;
			chick.chicken_sport();
		}
		if (option == "duck")
		{
			duck Duck;
			Duck.duck_sport();
		}
		if (option == "cow")
		{
			cow cows;
			cows.cow_sport();
		}
		if (option == "sheep")
		{
			sheep Sheep;
			Sheep.sheep_sport();
		}
		if (option == "pig")
		{
			pig pigs;
			pigs.pig_sport();
		}
		if (option == "dog")
		{
			dog Dog;
			Dog.dog_sport();
		}
		if (option == "fish")
		{
			fish fishes;
			fishes.fish_sport();
		}
	}
}