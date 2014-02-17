//Dice Problem
//Jaiden Gerig
#include <iostream>
#include <vector>
#include "Dice.h"
using namespace std;

int main() {
	//Tests for dice
	Dice test;
	Cup test2(3);
	Loaded_Die test3(1);
	cout<<"Rolling "<<1<<" die: "<<test.roll_dice()<<"\n";
	cout<<"Rolling "<<test2.show_rolls()<<" dice: "<<test2.roll_dice()<<"\n";
	cout<<"Rolling a loaded die set to '"<<test3.show_bias()<<"': "<<test3.roll_dice()<<"\n";
}
