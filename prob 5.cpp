#include <iostream>
using namespace std;
int main(){
	int multiplier = 1;
	int num = 1;
	
	while(num<=30){
		cout << num;
		num += multiplier;
		
		if(num>= 10){
			multiplier = 2;
		}
		if(num<= 30){
			cout << ",";
		}
	}
}
