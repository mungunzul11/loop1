#include <iostream>

using namespace std;

int main (){
	int n1,n2, min, hcf, i;
	cout<<"Input first number: ";
	cin>>n1;
	cout<<"Input second number: ";
	cin>>n2;
	if(n1>n2){
		min=n2;}
		else{
			min=n1;
		}
	
	for (int i=1; i<=min; i++)
	{
	//	cout<<i<<endl;
	    if (n1%i==0 && n2%i==0){
		 hcf=i;}
	}
		 {
		cout<<n1<<" ,"<<n2<<"toonuudiin hamgiin ih yerunhii huwaagch bol "<<hcf<<endl;
	}
	
	
	return 0;
}
	
