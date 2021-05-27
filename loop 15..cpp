#include <iostream>

using namespace std;

int main (){
	int n, multi=1;
	cout<<"Input any number: ";
	cin>>n;
	while (n>0){
		multi=n%10*multi;
	    n=n/10;
	}
	{	cout<<multi<<" =tanii oruulsan toonii tsipruudiin urjwer";
	}
	 
	 return 0;
	 
}
