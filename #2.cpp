#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main () 
{
	double gallons,waterbill, total_waterbill, cubicmeters,last_month,during_month ; 
	const int water_demand=35, late_charge=20;
	
	cout<<"Enter the amount of water bill previous month:";
	cin >>last_month;
	cout <<"Enter the gallons of water used :";
	cin>>gallons; 
	cubicmeters=gallons*0.00378541;
	waterbill=last_month;
	//if statements
		if (last_month > 0){
		
		total_waterbill = waterbill+water_demand+(1.10*cubicmeters)+late_charge;
		cout << "your water bill with additional fine is:" << total_waterbill<<"php";
		}else if (last_month == 0){
		
		total_waterbill=water_demand+(1.10*cubicmeters);
		cout<<"your water bill is:"<<total_waterbill<<"php";
		}else 
		cout<<"invalid input just use positive numbers";
	getch();
	return 0;		

}


	
