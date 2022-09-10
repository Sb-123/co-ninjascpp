#include<iostream>
#include<bits/c++io.h>

using namespace std;

int subseq(string input,string output[]){

    if(input.empty()){
        output[0]= "";
        return 1;
    }

    string small=input.substr(1);
    int small_size=subseq(small,output);

    for(int i=0;i<small_size;i++){
        output[i+small_size]=input[0]+output[i];
    }

    return 2*small_size;

}

int main(){
    string input;
    cin>>input;

    string* output= new string[1000];

    int cnt=subseq(input,output);

    for(int i=0;i<cnt;i++){
        cout<<output[i]<<endl;
    }
}