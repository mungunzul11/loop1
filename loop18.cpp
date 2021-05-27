#include <iostream>

using namespace std ;

int main (){
	int n, one=0 ,two=0, three=0, four=0, five=0, six=0, seven=0, eigth=0, nine=0, zero=0;
	cout<<"Input any number: ";
	cin>>n;
	while  (n>0){
	
	switch (n%10){
	
	    case 1:
	    	one++;
	    	break;
	    case 2:
	    	two++;
	    	break;
	    case 3: 
	         three++;
	         break;
	    case 4:
	    	four++;
	    	break;
	    case 5:
	    	five++;
	    	break;
	    case 6:
	    	six++;
	    	break;
	    case 7:
	    	seven++;
	    	break;
	    case 8:
	    	eigth++;
	    	break;
	    case 9:
	    	nine++;
	    	break;
		case 0:
		    zero++;
			break;
			}
	    n=n/10;}
	    cout<<" Frequency of 1 = "<<one<<endl;
		cout<<" Frequency of 2 = "<<two<<endl;
		cout<<" Frequency of 3 = "<<three<<endl;
		cout<<" Frequency of 4 = "<<four<<endl;
		cout<<" Frequency of 5 = "<<five<<endl;
		cout<<" Frequency of 6 = "<<six<<endl;
		cout<<" Frequency of 7 = "<<seven<<endl;
		cout<<" Frequency of 8 = "<<eigth<<endl;
		cout<<" Frequency of 9 = "<<nine<<endl;
		cout<<" Frequency of 0 = "<<zero<<endl; 
return 0;
}
