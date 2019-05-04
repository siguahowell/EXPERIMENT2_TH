#include<iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include <conio.h>

using namespace std;
int main()
{
double x,y,v,num;
int num1;
const double z=2.5;

cout <<"input the value of x"<<endl;
cin>> x;
cout << "input the value of y"<<endl;
cin>>y;

switch(x<3)
{
case 1: 
if(y>1&&y<5){
v=x*y*z;
cout << "v is equal to:"<<setw(10)<<v<<setprecision(2);
}else if (y>=5){
v=x+(y/z);
cout << "v is equal to:"<<setw(10)<<v<<setprecision(2);}
else{
v=x+y+z;
cout << "v is equal to:"<<setw(10)<<v<<setprecision(2);
}
break;
case 2:
if(y<=5){
num=(x-y)/z;
v=abs(num1);
cout << "v is equal to:"<<setw(10)<<v<<setprecision(2);
}else if (y>5){
num=sqrt(x+z);
v=x-num;
cout << "v is equal to:"<<setw(10)<<v<<setprecision(2);}
else{
v=x+y+z;
cout << "v is equal to:"<<setw(10)<<v<<setprecision(2);
}
break;
default:
v=x+y+z;
cout << "v is equal to:"<<setw(10)<<v<<setprecision(2);
}
getch();
return 0;
}


	


	
	





