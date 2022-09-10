#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int *arr, int size)
{
    //Write your code here

    int c;
    if(size%2==0){
        c=size;
    }else{
        c=size-1;
    }
    for(int i=0;i<c;){
        // int temp=arr[i];
        // arr[i]=arr[i+1];
        // arr[i+1]=temp;
		swap(arr[i],arr[i+1]);
        i +=2;
    }
}
// #include <iostream>
// using namespace std;



int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	for(int i=0;i<=n;i++){

// 		int temp=arr[i];
// 		arr[i]=arr[i+1];
// 		arr[i+1]=arr[i+2];
// 		arr[i+2]=temp;

// 	}


// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// }