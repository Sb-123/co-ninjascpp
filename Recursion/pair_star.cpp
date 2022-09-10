#include<iostream>
#include<cstring>

using namespace std;

void pair_star(char input[],int s){
    if(input[s]=='\0'){
        return ;
    }
    pair_star(input,s+1);
    if(input[s]==input[s+1]){
        int len=strlen(input);
       // cout<<len<<endl;
        input[len+1]='\0';
        int i;
        for(i=len-1;i>s;i--){
            input[i+1]=input[i];
        }
        input[s+1]='*';
    }
}

void pairStar(char input[]){
//     int s=0;
//     int len=strlen(input)+3;

//     if(input[s]=='\0'){
//         return ;
//     }
//     pairStar(input+1);

   
   

//    if(input[s]==input[s+1]){
//      input[len+1]='\0';
//      int i;
     
//      for(i=len-1;i>=s;i--){
//          input[i+1]=input[i];
//      }
//      input[s+1]='*';
//    }

// int l=strlen(input);
// cout<<l<<endl;
pair_star(input,0);
}



    
       

int main(){
    char input[100];
    cin.getline(input,100);
    pairStar(input);
    cout<<input<<endl;
}