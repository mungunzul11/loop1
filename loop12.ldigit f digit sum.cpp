#include <iostream>

using namespace std;

int main (){
	
    int num, fdigit , ldigit;
	cout<<"Enter your number: ";
	cin>>num;
	
	ldigit=num%10;
	
	while(num>10){
		num=num/10;
	}	
	fdigit=num;
	cout<<"first and last digit's sum: "<<fdigit+ldigit<<endl;
return 0;
}

