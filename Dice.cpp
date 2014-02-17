//Dice.cpp
//Jaiden Gerig
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <exception>
#include "Dice.h"
using namespace std;
Dice::Dice(){
result = 1;//default result
}

int Dice::roll_dice(){//Base roll dice function
	result = 0;
	srand(time(0));
	result = rand() % 6 + 1;//between 1 and 6
	is_rolled = true;
	past_results.push_back(result);//store prev. result
	return result;
}
bool Dice::randomBool() {
	srand(time(0) + 20);//add to compensate for time diff.
	return rand() % 2 == 1;
}
Cup::Cup(int dice_num){
	if (dice_num > 1)
		rolls = dice_num;
	else
		throw invalid_argument("Dice in cup must be greater than 1");

}
int Cup::roll_dice(){//roll cup
	result = 0;
	for (int i = 0; i<rolls; ++i){
		srand(time(0)+i);//add to compensate for time diff.
		result += rand() % 6 + 1;
	}
	is_rolled = true;
	past_results.push_back(result);
	return result;
}

Loaded_Die::Loaded_Die(int num_set){
	if (num_set > 0 && num_set <= 6)//input check
		bias = num_set;
	else
		throw invalid_argument("Must be between 1 and 6");
}

int Loaded_Die::roll_dice(){//roll loaded die
	result = 0;
	srand(time(0));
	result = rand() % 6 + 1;
	if (bias != 0){
		bool change = randomBool();
		if (change == true)
			return bias;
		else
			return result;
	}
	else
		return result;
}