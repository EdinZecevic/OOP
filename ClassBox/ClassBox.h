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
