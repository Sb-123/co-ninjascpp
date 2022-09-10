#include <iostream>
using namespace std;

int after_z_month(int w,int x,int y,int z){
    int month_after_bal=w+x-y;
    
    return month_after_bal*z;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    int currBal=after_z_month(w,x,y,z);
	    cout<<currBal<<endl;
	}
	return 0;
}
