#include <iostream>
using namespace std;

class Rabbit{
private:
	unsigned long total;
	unsigned long mature;
	unsigned long premature;
	int MULTIPLIER;
	int MONTHS;
	int month;
public: 
	Rabbit(){
		premature = 0;
		total = mature = 1;
	}

	Rabbit(int mul, int months):Rabbit(){
		MULTIPLIER = mul;		
		MONTHS = months;	
		generate();
		printFinalData();
	}

	void printFinalData(){
		cout << "\nMonth: " << (month-1) << '\n';
		cout << "Mature Count: " << mature << '\n';	
		cout << "Premature Count: " << premature << '\n';	
		cout << "Total Count: " << total << '\n';
	}
	
	void generate(){
		unsigned long oldMature = 1; 
		unsigned long oldPremature = 0;
		for(month = 3; month <= MONTHS; ++month){
			premature = oldMature * MULTIPLIER; 	
			mature = mature + oldPremature;	
		
			total = premature + mature;
			oldMature = mature;	
			oldPremature = premature;	
		}	
	}

	void printVals(){
		cout << "\nMonth: " << month << '\n';
		cout << "Mature Count: " << mature << '\n';	
		cout << "Premature Count: " << premature << '\n';	
		cout << "Total Count: " << total << '\n';
	}
};

