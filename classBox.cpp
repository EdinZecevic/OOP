#include <iostream>
using namespace std;

class Box {       
  public:            
    int w;        
    int l;
	int d;  
	
	int calculateArea(int w, int l){
		return w*l;
	}
	
	int calculateVolume(int w, int l, int d){
		return w*l*d;
	}
};

int main() {
  Box box;
  
  	int w;        
	int l;
	int d;
  
  cout << "Enter the width: " <<endl;
  cin>>w;
  cout << "Enter the lenght: " <<endl;
  cin>>l;
  cout << "Enter the depth: " <<endl;
  cin>>d;
  
	cout << box.calculateArea(w,l) <<endl;
	cout << box.calculateVolume(w,l,d) <<endl;
  

 
  return 0;
}
