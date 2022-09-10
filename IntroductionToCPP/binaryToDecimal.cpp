#include<iostream>
using namespace std;

int  main(){
//     int n;
//     cin>>n;
//   int src=2;
//   int ans=0;
//   int multi=1;
//   while(n!=0){
//       int rem=n%10;
//       ans=ans+(rem*multi);
//       multi=multi*src;
//       n=n/10;
//   }
//   cout<<ans<<endl;

int n;
cin>>n;
int ans=0;
int multi=1;

while(n!=0){
    int rem=n%2;
    ans=ans+(multi*rem);
    multi=multi*10;
    n=n/2;
}
cout<<ans<<endl;

}