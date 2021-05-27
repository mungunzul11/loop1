#include <iostream>

using namespace std;

int main (){
	int i,n,rev=0;
	cout<<"Input any number: ";
	cin>>n;
	i=n;
	
	while (n>0){
		rev=n%10+rev*10;
		n=n/10;
	}
	cout<<"Reverse of "<<i<<" = "<<rev;
	
	
	return 0;
}
