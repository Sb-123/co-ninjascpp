#include <iostream>
using namespace std;
#include<cstring>
// #include<cstring>

// bool checkAB(char input[]){
//     int s=0;
//     if(input[s]=='\0'){
//         return false;
//     }
//     for(int i=0;i<=strlen(input);i++){
//         if(input[i]=='a'){
//             if(input[i+1]=='b'){
//                 if(input[i+2]=='b'){
//                     return true;
//                 }else{
//                     return false;
//                 }
//             }else{
//                 return false;
//             }
//         }
//     }
// }

bool checkAB(char input[]){

    //b.c
    if(strlen(input)==0){
        return true;
    }
    if(strlen(input)==1){
        if(input[0]=='a'){
            return true;
        }else{
            return false;
        }
    }

    //r.c
    if(input[0]=='a'){
        return checkAB(input+1);
    }else if(input[0]=='b'){
        if(input[1]=='b'){
            return checkAB(input+2);
        }else{
            return false;
        }
    }else{
        return false;
    }



}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
