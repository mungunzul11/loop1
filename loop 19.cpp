#include <iostream>

using namespace std;

int main (){
	int num1, rev=0, a;
	cout<<"Input any number: ";
	cin>>num1;
	while (num1>0){
		rev=rev*10+num1%10;
		num1=num1/10;
	}
	cout<<rev<<endl;
	
	a=rev;
	
	while (a>0){
	
	switch (a%10){
		case 1 :
			cout<<" one ";
			break;
			
		case 2 :
			cout<<" two ";
			break;
			
		case 3:
			cout<<" three ";
			break;
				
		case 4 :
			cout<<" four ";
			break;
			
		case 5 :
			cout<<" five ";
			break;
			
		case 6 :
			cout<<" six ";
			break;
			
		case 7 :
			cout<<" seven ";
			break;
			
		case 8 :
			cout<<" eigth ";
			break;
			
		case 9 :
			cout<<" nine ";
			break;
		
		case 0 :
			cout<<"zero";
			break;
			
	}
	a=a/10;
}

	
return 0;
	
}
