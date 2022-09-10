#include <iostream>
#include <algorithm>
using namespace std;

// void sort012(int *arr,int n){
//     int temp[n];
//     int cnt0=0;
//     int cnt2=n-1;
//     int i=0;
//     while(i<n){
//         if(arr[i]==0){
//             temp[cnt0]=arr[i];
//             i++;
//             cnt0++;
//         }
//         if(arr[i]==1){
//             i++;
//         }
//         if(arr[i]==2){
//             temp[cnt2]=arr[i];
//             i++;
//             cnt2--;
//         }
//     }

//     for(int k=cnt0;k<cnt2;k++){
//         temp[k]= 1;

//     }





void sort012(int *arr, int n)
{
    //Write your code here
    
    int lo=0;
    int m=0,hi=n-1;
    
    while(m<=hi){

        if(arr[m]==0){
            swap(arr[lo],arr[m]);

            lo++;
            m++;
        }
        if(arr[m]==1){

            m++;
        }
        if(arr[m]==2){

            swap(arr[m],arr[hi]);
            hi--;
        }
    }
}

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

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}