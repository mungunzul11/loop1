#include <iostream>

using namespace std;

int main (){
	
	int n, sum=0;
	cout<<"Input any number: ";
	cin>>n;
	 while (n>0){
	 	sum=n%10+sum;
	 	n=n/10;
	 	 	
	  }
	  {cout<<sum<<"= tanii oruulsan toonii tsipruudiin niilber";}
return 0;
}
