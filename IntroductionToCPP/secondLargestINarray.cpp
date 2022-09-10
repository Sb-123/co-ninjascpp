#include <iostream>
#include<climits>
using namespace std;

int findSecondLargest(int *arr, int n)
{
   int max=INT_MIN;
   int secM=INT_MIN;

   for(int i=0;i<n;i++){
       if(arr[i]>max){
           secM=max;
           max=arr[i];
       }else if(arr[i]>secM && arr[i] !=max){
           secM=arr[i];

       }
   }
   return secM;
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

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}