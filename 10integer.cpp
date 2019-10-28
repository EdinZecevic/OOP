#include <iostream>
using namespace std;
int main() 
{
    cout << "Enter 10 integers!"<<endl;
    
    int a[10];
    int even=0;
    int odd=0;
    
    for(int i=0; i<10 ; i++){
    	cin>>a[i];
	}
	
	for(int i=0; i<10 ; i++){
    	if ( a[i] % 2 == 0)
    	even=even+a[i];
    else
        odd=odd+a[i];
	}
	
	cout << "sum of even numbers "<<even<<endl;
	cout << "sum of odd numbers "<<odd<<endl;
	
	cout << "Plase enter the mathematical operation + - / *!"<<endl;
	
	char b;
	cin>>b;
	
	if(b=='+'){
		cout << "Sum is "<<even+odd<<endl;
	}
	
	else if(b=='-'){
		cout << "Takeing is "<<even-odd<<endl;
	}
		else if(b=='*'){
		cout << "Product is "<<even*odd<<endl;
	}
		else if(b=='/'){
		cout << "Devide is "<<even/odd<<endl;
	}
	else
		cout << "Entered character is wrong "<<endl;
	

	
	
    
    
    return 0;
}
