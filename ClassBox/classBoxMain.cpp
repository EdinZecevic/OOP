#include <iostream>
#include "ClassBox.h"
using namespace std;

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
  
	cout << "Area is: " <<box.calculateArea(w,l) <<endl;
	cout << "Volume is: "<<box.calculateVolume(w,l,d) <<endl;
  

 
  return 0;
}
