#include <iostream>

using namespace std;

int main (){
	int n,i,i1;
	cout<<"Input any number: ";
	cin>>n;
	for (int i=1; i<=n; i++) 
	{
		if (n%i==0){
			cout<<i<<" ";
		}
		
	     else {
	     	cout<<" ";
		 }
	}
	cout<<"Factors of: "<<i<<" ,";
	
	return 0;
}
