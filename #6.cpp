#include <iostream>
#include <list>
#include <conio.h>
using namespace std;

int main()
{
	  	double n ;  
	  	double sum =0;
		double m=sum;
	  	
	  
	do{
    cout << "Enter a number: ";
    cin >> n;
	if(n<=0){
	cout<<"Thankyou!";
	break;
	}
    for (int i = 0; i <= n; i++) {
        sum += i;
       
    }	
 	cout << "The sum of all whole numbers from "<<"1 to "<<n<<" is "<< sum<<endl;
 	sum=0;
	}

	while( n!=0 );

	getch();
	return 0;
	}



