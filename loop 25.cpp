#include <iostream>

using namespace std;

int main (){
	int n1,n2, max, lcm=1, i;
	cout<<"Input first number: ";
	cin>>n1;
	cout<<"Input second number: ";
	cin>>n2;
	if (n1>n2){
		max=n1;
	}
	else {
		max=n2;
	}
	cout<<max<<endl;
	
	i=max;
		while(1) {
		if (i%n1==0 && i%n2){
			lcm=i;
			break;
		}
		
		i+=max;
		
	}
	cout<<lcm<<endl;
	

	return 0;
}
