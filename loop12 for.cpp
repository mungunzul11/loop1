#include <iostream>

using namespace std;

int main (){
	int i, n, sum, fdigit, ldigit;
	cout<<"Input any number: ";
	cin>>n;
	
	ldigit=n%10;
	cout<<ldigit<<endl;
	
	for (int i=n; i>10; i=n/10 ){
		fdigit=i;}{
		cout<<i<<"= first digit"<<endl;
	}
	sum=ldigit+ i;
	
	cout<<sum<<endl;
	return 0;
	
}
