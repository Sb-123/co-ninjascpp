#include<iostream>
using namespace std;

void arrange(int arr[],int n){
    int cnt=0;
        int val1=1;
    while(cnt<=n/2){
        arr[cnt]=val1;
        val1 =val1+2;
        cnt++;
    }
    int i=n-1;
        int val2=2;
    while(i>n/2){
        arr[i]=val2;
        val2 =val2+2;
        i--;
    }

   
    cout<<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}