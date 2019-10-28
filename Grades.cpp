#include <iostream>
using namespace std;
int main() 
{
    cout << "Enter number of grade form 0-100!"<<endl;
    int a;
    cin>>a;
    if(a>100 && a<0){
    	cout << "please enter number 0-100!"<<endl;
	}
	
	else if(a>=95 && a<=100){
		cout << "Grade A";
	}
	
	else if(a>=80 && a<=94){
		cout << "Grade B";
	}
	
	else if(a>=79 && a<=70){
		cout << "Grade C";
	}
	
	else if(a>=55 && a<=69){
		cout << "Grade D ";
	}
	
	else{
		cout << "You Fail";
	}
    
    return 0;
}
