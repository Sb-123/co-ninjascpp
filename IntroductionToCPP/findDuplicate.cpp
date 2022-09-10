#include <iostream>
using namespace std;


// int duplicateNumber(int *arr, int size)
// {
//     //Write your code here
    
//     int ans=0;
//     for(int i=0;i<size-1;i++){

//         ans=ans^arr[i];
//     }
//     for(int i=1;i<size;i++){

//         ans=ans^i;
//     }
//     return ans;
// }

// int duplicateNumber(int *arr,int size){
// 	for(int i=0;i<=size;i++){
// 		for(int j=i+1;i<=size;i++){
// 			if(arr[i]== arr[j]){
// 				return arr[j];
// 			}
// 		}
// 	}
// }

int duplicateNumber(int *arr,int size){
	int ans;
	int nSum=((size-1)*(size-2))/2;
	int sum=0;

	for(int i=0;i<size;i++){
		sum +=arr[i];
	}
	ans=sum-nSum;

	return ans;
}






int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}