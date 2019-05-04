#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main() {
 string package;
 double time;
 double price;
 cout << "Choose package:A, B, C ";
 cin >> package;

 if ( (package == "A") || (package == "B") || (package == "C")) {
 cout << "The number of hours: ";
 cin >> time;

 if (time <= 730.001) {

if (package == "A") {
if (time > 10) {
price = 995 + (time - 10) * 20;	
cout << "Price: php" << price;
} else {
price = 995;
cout << "Price: php" << price;
}

} else if (package == "B") {
if (time > 20) {
price = 1495 + (time - 20) * 10;
cout << "Price: php" << price;
} else {
price = 1495;
cout << "Price: php" << price;
}

} else if (package == "C") {
price = 1995;
cout << "Price: php" << price;
}

 } else if (time > 730.001){
cout << "Invalid number of hours!";
 }
else{
  cout << "Invalid package just choose A,B,C !";}
  getch ();
return 0;
 }}




