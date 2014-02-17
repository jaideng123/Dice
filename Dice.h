//Dice.h
//Jaiden Gerig
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;
class Dice {
protected:
	int result = 0;
	bool is_rolled = false;
	vector <int> past_results;
public:
	bool randomBool();
	Dice();
	virtual int roll_dice();
	const int show_result(){return result;}
};
struct Cup : Dice {
	Cup(int dice_num = 2);
	int roll_dice();
	const int show_rolls(){ return rolls; }
private:
	int rolls = 0;
};
struct Loaded_Die : Dice{
	Loaded_Die(int num_set);
	int roll_dice();
	const int show_bias(){ return bias; }
private:
	int bias = 1;

};