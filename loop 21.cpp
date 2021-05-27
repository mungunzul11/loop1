#include <iostream>

using namespace std ;

int main (){
	int num, power1, power2, result=1;
	cout<<"Input any number: ";
	cin>>num;
	cout<<"Input a power: ";
	cin>>power1;
	power2=power1;
	while (power1>0){
	
	   result=result*num;
	   power1--;
   }
   
   cout<<num<<"^"<<power2<<"="<<result<<endl;
   return 0;
}
