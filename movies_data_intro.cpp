#include <iostream>
using namespace std;
int main() 
{
    cout << "Enter username and pasword!"<<endl;
    
    string username;
    string pasword;
    
    cin>>username;
    cin>> pasword;
    
    if(username!="user" && pasword!="pass"){
    	cout << "Be concentrate!";
	}
	else if(username!="user"){
    	cout << "Do you know hwo you are!";
	}
	else if(pasword!="pass"){
    	cout << "Wrong password!";
	}
	else
		cout << "Welcome to movie world!";
	
    
    
    
    
    return 0;
}
