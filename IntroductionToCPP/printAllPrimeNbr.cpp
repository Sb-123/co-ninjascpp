#include<iostream>
using namespace std;

int main(){
    int hi;
    cin>>hi;
    int lo=2;

    for(int n=lo;n<=hi;n++){
            int cnt=0;

        for(int div=2;div<n;div++){
            if(n%div==0){
                cnt++;
                break;
            }


        }

        if(cnt==0){
        cout<<n<<endl;

        }
    }
}