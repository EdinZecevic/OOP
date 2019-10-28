#include <iostream>
using namespace std;

bool isPrime(int num);
int main() 
{
    cout << "Enter a matrix!"<<endl;
    
    int a[2][2];
    int b[2][2];
    bool aa=true;
    int sumofprimesa=0;
    int sumofprimesb=0;
    int sumofprimes=0;
    
   for(int i=0; i<2 ; i++){
    	for(int j=0; j<2 ; j++){
    	cin>>a[i][j];
	}
	}
	
	for(int i=0; i<2 ; i++){
    	for(int j=0; j<2 ; j++){
    	cin>>b[i][j];
	}
	}
	

	for(int i=0; i<2 ; i++){
    	for(int j=0; j<2 ; j++){
    	aa=isPrime(a[i][j]);
    	if (aa==true){
      cout<<a[i][j]<<" is a prime number"<<endl;
      sumofprimesa=sumofprimesa+a[i][j];
  }
   else if (aa==false){
      cout<<a[i][j]<<" is not a prime number"<<endl;
  }
      else
      cout<<"---"<<endl;
	}
}
	
	for(int i=0; i<2 ; i++){
    	for(int j=0; j<2 ; j++){
    	aa=isPrime(b[i][j]);
    	if (aa==true){
      cout<<b[i][j]<<" is a prime number"<<endl;
      sumofprimesb=sumofprimesb+b[i][j];
  }
   else if (aa==false){
      cout<<b[i][j]<<" is not a prime number"<<endl;
  }
      else
      cout<<"---"<<endl;
	}
}
	
	sumofprimes=sumofprimesb+sumofprimesa;
	cout<<sumofprimes<<" is Sum of prime numbers"<<endl;
    return 0;
}

bool isPrime(int num){
       if(num % 2 == 0) {
          return false;
       }
    return true;
}
