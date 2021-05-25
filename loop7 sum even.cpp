#include <iostream>
using namespace std;
int main (){
	int sum=0, n;
	cout<<"Input number: ";
	cin>>n;
	for (int i=0; i<=n; i=i+2){
		sum=sum+i;
	}
	{
	cout<<sum;
}
return 0;
}
