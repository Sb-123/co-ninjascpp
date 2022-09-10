#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
   
    
    int r,c;
    cin>>r>>c;
   // int sum=0;
    
    int arr[100][100];
    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){

            cin>>arr[i][j];
        }
    }
    if(r==0){
        return 0;
    }
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){

            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
  
}


