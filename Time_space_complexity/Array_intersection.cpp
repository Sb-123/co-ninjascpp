#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


void merge(int *input,int s,int mid, int e){
    int output[e+1-s];
    int i=0,j=mid+1,k=0;
    
    while(i<=mid && j<=e){
        if(input[i]<input[j]){

            output[k++]=input[i++];
        }else{
            output[k++]=input[j++];
        }
    }
    while(i<=mid){

        output[k++]=input[i++];
    }
    while(j<=e){
        output[k++]=input[j++];
    }
    int n=0;
    for(int i=s;i<=e;i++){
        input[i]=output[n];
            n++;
    }
}


void merge_sort(int *input,int size){
    int s=0;
    int e=size-1;
    
    if(s>=e){

        return;
    }
    int mid=s+(e-s)/2;
    merge_sort(input,mid);
    merge_sort(input,e+1-mid);
    merge(input,s,mid,e);
    for(int i=0;i<size;i++){

        cout<<input[i]<<" ";
    }
    cout<<endl;
    return;
}


void intersection(int *arr1,int *arr2,int n,int m){
    
    
    merge_sort(arr1,n);
    merge_sort(arr2,m);
    
    int ans[100];
    
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             i++;
//         }else if(arr1[i]>arr2[j]){
//             j++;
//         }else{
//             ans[k]=arr1[i];
//                 cout<<ans[k];
//                 i++;
//             j++;
//             k++;
            
//         }
//     }
   // for(int i=0;i<k;i++){
   //     cout<<
   // }
   }
    
    


int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}