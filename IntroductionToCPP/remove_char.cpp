#include <iostream>
#include <cstring>
using namespace std;

 void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here

    int n= strlen(input);
    int j=0;
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i] !=c){
            input[j]=input[i];
            j++;
        }else{
            continue;
        }
    }
    input[i]='\0';
    //cout<<input<<endl;

}

//  void removeAllOccurrencesOfChar(char input[], char c) {
//     // Write your code here

//     int n= strlen(input);
//     int j=0;
//     int i=0;
//     for(;input[i]!='\0';i++)
//     {
//         if(input[i] ==c){
//            continue;
//         }else{
//             input[j]=input[i];
//             j++;
//         }
//     input[j]='\0';
//     }
//     //cout<<input<<endl;

// }


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}