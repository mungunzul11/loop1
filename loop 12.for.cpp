#include <iostream>

using namespace std;

int main () {
	
	int num, fdigit , ldigit ;
	cout<<"Enter your number: ";
	cin>>num;
	
	ldigit=num%10;
	
	for (int fdigit=num; fdigit>=10; fdigit=fdigit/10){
		cout<<"firsd and last digit sum: "<<ldigit + fdigit<<endl;
		}			
	 
	
	
return 0;
}
