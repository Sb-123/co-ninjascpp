#include <iostream>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;

void printPermutations(string input,int i){
    if(input[i]=='\0'){
        cout<<input<<endl;
        return ;
    }
    
    for(int j=1;j<input.length();j++){
        swap(input[i],input[j]);
        printPermutations(input,i+1);
        swap(input[i],input[j]);
    }
}


void printPermutations(string input,string output){
    
    if(input==""){
        cout<<output<<endl;
        return ;
    }
    
    for(int i=0;i<input.length();i++){
       
        printPermutations(input.substr(0,i)+input.substr(i+1),output+input[i]);
    }
}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    
    string output="";
   // printPermutations(input,output);
   printPermutations(input,0);
}
#include <iostream>
#include <string>
using namespace std;



int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}