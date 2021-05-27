#include <iostream>

using namespace std;

int main (){
	int num, ldigit, fdigit ;
	cout<<"Input number: ";
	cin>>num;
	ldigit=num%10;
	
	while (num>10){
		num=num/10;
	}
	fdigit=num;
	   
	   
	
	
	cout<<"First digit: "<<fdigit<<endl;
	cout<<"Last digit: "<<ldigit<<endl;
	
return 0 ;	
}
