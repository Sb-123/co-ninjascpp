#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nr, int mc)
{
  int max=INT_MIN;
  int q=0;
  int sum=0;
  string s="";
  //row sum;
  for(int i=0;i<nr;i++){
      sum=0;
      for(int j=0;j<mc;j++){
          sum=sum+input[i][j];
      }
      if(sum>max){
          max=sum;
          q=i;
          s="row";
      }
  }

  //column sum

  for(int j=0;j<mc;j++){
      sum=0;
      for(int i=0;i<nr;i++){
          sum=sum+input[i][j];
      }
      if(max<sum){
          max=sum;
          q=j;
          s="column";
      }
  }

  cout<<s<<" "<<q<<" "<<max<<endl;

  
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}