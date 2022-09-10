#include <iostream>
#include <string>

using namespace std;

#include <string>
using namespace std;

string get_possible_char(int d){
    if(d==2){
        return "abc";
    }

     if(d==3){
        return "def";
    }

     if(d==4){
        return "ghi";
    }

     if(d==5){
        return "jkl";
    }
     if(d==6){
        return "mno";
    }

     if(d==7){
        return "pqrs";
    }

     if(d==8){
        return "tuv";
    }

     if(d==9){
        return "wxyz";
    }
}

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */

   if(num==0){
       output[0]="";
       return 1;
   }

   int c=num;
   int d=num;
   c=c/10;
   d=d%10;

   int small_size=keypad(c,output);
   string first_char=get_possible_char(d);

   string temp[1000];
   int k=0;

   for(int i=0;i<small_size;i++){
       for(int j=0;j<first_char.length();j++){
           temp[k++]=output[i]+first_char[j];
       }
   }

   for(int i=0;i<k;i++){
       output[i]=temp[i];
   }

   return small_size*first_char.length();
}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
