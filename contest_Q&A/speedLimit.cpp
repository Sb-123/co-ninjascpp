#include <iostream>
using namespace std;

void speedLimit(int a,int b,int x,int y){
    float a_speed=(float)a/x;
    float b_speed=(float)b/y;
    
    if(a_speed>b_speed){
        cout<<"Alice"<<endl;
    }else if(a_speed<b_speed){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Equal"<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    speedLimit(a,b,x,y);
	    
	    
	}
	return 0;
}
