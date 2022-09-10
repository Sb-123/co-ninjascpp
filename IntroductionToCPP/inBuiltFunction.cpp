#include<iostream>
using namespace std;

#include<cstring>

 void printAllPrefixe(char input[]){

    // i represents end index of my prefix.
    for(int i=0;input[i] !='\0';i++){

        // j represent start index of my prefix.
        for(int j=0;j<=i;j++){
            cout<<input[j];

        }
        cout<<endl;
    }
}
int main(){
    char input1[100]="abcd";
    printAllPrefixe(input1);


    //char input1[100],input2[100];
    // cin>>input1;
    // cin>>input2;
    // if(strcmp(input1,input2)==0){
    //     cout<<"true"<<endl;

    // }else{
    //     cout<<"false"<<endl;
    // }

    // char input1[100]= "abcd";
    // char input2[100]= "xy";

    // cout<<"Before copying :"<<endl;;
    // cout<<input1<<endl;
    // cout<<input2<<endl;


    // cout<<"After copying :"<<endl;;
    // //strcpy(input1,input2);

    // strncpy(input1,input2,4);
    //  cout<<input1<<endl;
    // cout<<input2<<endl;


}