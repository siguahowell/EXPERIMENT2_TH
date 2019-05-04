#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main () 
{
	double gallons,waterbill, total_waterbill, meters,last_month,during_month ; 
	const int water_demand=35, late_charge=20;
	
	cout<<"Enter the amount of water bill previous month:";
	cin >>last_month;
	cout<<"enter the of water bill during this month:";
	cin>>during_month;
	cout <<"Enter the gallons of water used in meteric units:";
	cin>>meters; 
	waterbill=last_month+during_month;
	//if statements
		if (last_month > 0){
		
		total_waterbill = waterbill+water_demand+(1.10*meters)+late_charge;
		cout << "your water bill with additional fine is:" << total_waterbill<<"php";
		}else if (last_month == 0){
		
		total_waterbill=during_month+water_demand+(1.10*meters);
		cout<<"your water bill is:"<<total_waterbill<<"php";
		}else 
		cout<<"invalid input just use positive numbers";
	getch();
	return 0;		

}


	

