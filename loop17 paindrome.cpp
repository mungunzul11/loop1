#include <iostream>

using namespace std;

int main (){
	int num1 ,num2, num3, rev=0;
	cout<<"Input any number: ";
	cin>>num1;
	num2=num1;
	

	while (num1>0){
		rev=num1%10+rev*10;
		num1=num1/10;
	    }
	    { num3=rev;
		}
		
		
	if (num2==num3){
			cout<<num2<<" is palindrome";
			}
			else{
				cout<<num2<<" is not palindrome";
			}
return 0;
		
		
	
}
