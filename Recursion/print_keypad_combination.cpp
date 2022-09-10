#include <iostream>
using namespace std;
#include <string>

// void printKeypad(int nbr,string output,string option[]){
//     if(nbr==0){
//         output="";
//         return ;
//     }
//     int n1=nbr%10;
//     string s1=option[n1];

//     for(int i=0;i<s1.length();i++){
//         printKeypad(nbr/10,s1[i]+output,option);
//     }
// }

// void printKeypad(int nbr){
//     string output="";
//     string option[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//     printKeypad(nbr,output,option);
// }



void printKeypad(int nbr){
    string output="";

    if(nbr==0){
        cout<<output<<endl;
        return ;
    }

    int c,d;
    c=nbr;
    d=nbr;
    c=c/10;
    d=d%10;
    string option[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   

    printKeypad(c);
    string last_char=option[d];
    cout<<output+last_char<<endl;
}


using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
