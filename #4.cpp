#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int main () {
int n, number,i;
number=1;	
cout<<"counting.."<<endl;
for (i = 1;i <= 10;i++)
{
cout<<number<<",";
number++;
}
for (number=12;number<=30;i++)
{

cout<<number<<",";
number +=2;
}
/*while (n<31)
{
	cout << n << ",";
	n++;
if (n==11){
n++;
continue;}

else if (n==13){
n++;
continue;}
else if (n==15){
n++;
continue;}
else if (n==17){
n++;
continue;}
else if (n==19){
n++;
continue;}
else if (n==21){
n++;
continue;}
else if (n==23){
n++;
continue;}
else if (n==25){
n++;
continue;}
else if (n==27){
n++;
continue;}
else if (n==29){
n++;
continue;}
}/**/




	
	getch();
	return 0;
}
