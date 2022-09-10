#include<iostream>
using namespace std;


void printTable(int s,int e,int st){
    int curr=s;
    while (curr<=e){
        int f=(int)((5.0/9)*(curr-32));
        cout<<curr<<" "<<f<<endl;
        curr +=st;
    }

    
   
    
}

int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);

}


