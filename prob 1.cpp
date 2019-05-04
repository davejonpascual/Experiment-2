#include <iostream>
#include <string>
using namespace std;
int main() {
 string package;
 float time;
 float price;
 cout << "Create package: ";
 cin >> package;
 
 if ((package == "A") || (package == "B") || (package == "C")) {
 cout << "The number of hours: ";
 cin >> time;

 if (time <= 744) {

if (package == "A") {
if (time > 10) {
price = 995 + (time - 10) * 2;
} else {
price = 995;
}

} else if (package == "B") {
if (time > 20) {
price = 1495 + (time - 20) * 1;
} else {
price = 1495;
}

} else {
price = 1995;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout << "Price: P" << price;
}


	
	

