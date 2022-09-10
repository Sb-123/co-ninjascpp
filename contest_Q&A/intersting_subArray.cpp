
#include<bits/stdc++.h>
using namespace std;
#define ll long long


	    
	    
	    




int main(){
    int t;
    cin>>t;
    while(t--){
       ll n;
    cin>>n;

    vector<ll> a(n);
    ll mn = LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i]>=0 && mn>a[i])
         mn=a[i];
    }
    ll mnn= *min_element(a.begin(),a.end());
    ll mxx= *max_element(a.begin(),a.end());

    if(mn==LLONG_MAX){
        cout<<mxx*mxx<<" "<<mnn*mnn<<endl;
    }else{
        if(mnn<0){
            cout<<mnn*mxx<<" "<<max(mxx*mxx,mnn*mnn)<<endl;
        }else{
            cout<<mnn*mnn<<" "<<mxx*mxx<<endl;
        }
    }



    }
    return 0;
}
