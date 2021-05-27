#include <iostream>

using namespace std;

int main () {
    int num;
    cout<<"Input number: ";
    cin>>num;
   
    int count=0;
    while(num>0){
	    count++;
	    num = num/10; 
	}
	cout<<"Number of digits in "<<count<<endl;
	

return 0;
}
