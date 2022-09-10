#include<iostream>
using namespace std;

int main(){
    char c;
    //cin>>c;
   // c=cin.get();
    int cnt=0;
    while(c!='$'){
        cnt++;
       c=cin.get();
       // cin.get()>>c;
    }

    cout<<cnt<<endl;


}