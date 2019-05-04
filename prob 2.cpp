#include <iostream>
using namespace std;
int main(){
	int prev_gallon, curr_gallon;
	float bill;
	float charge = 1.10;
	float late_charge = 20;
	
	cout << "enter previous gallon consumption: "; cin >> prev_gallon;
	cout << "enter current gallon consumption: "; cin >> curr_gallon;
	
	bill = 35;
	bill += curr_gallon * charge;
	if(prev_gallon >0 ){

		bill += late_charge;
	}
	cout << "The total bill is: "<< bill;
}
