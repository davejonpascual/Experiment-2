#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	float V;
	int x;
	float y;
	float z = 2.5;
	
	cout << "Please enter the value of x: "; cin >> x;
	cout << "Please enter the value of y: "; cin >> y;
	
	switch(x){
		case 1:
			if(y>1 && y<5){
				V = x*y*z;
			}  
			else if(y>= 5){
				V = x + (y/z);
			}
			break;
		case 2:
			if(y<=5){
				V = fabs((x-y)/z);
			}
			else if(y>5){
				V = x - sqrt(y+z);
			}
			break;
		default:
			V = x+y+z;
	}
	cout << fixed << setprecision(2);
	cout << setw(10)<<setfill('_')<<V;
}
