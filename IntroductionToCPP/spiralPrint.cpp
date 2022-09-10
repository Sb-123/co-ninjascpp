#include <iostream>
using namespace std;

void spiralPrint(int **input, int nr, int mc)
{
    //Write your code here
    int top=0,bottom=nr-1;
    int right=mc-1,left=0;
    int cnt=nr*mc;
    int dir=1;
    
    while(top<=bottom && left<=right){

        if(cnt>0){

            if(dir==1){

                for(int i=left;i<=right;i++){

                cout<<input[top][i]<<" ";
                    cnt--;
                   
                }
                 dir=2;
                top++;
            }
        }
        if(cnt>0){
            if(dir==2){

                for(int i=top;i<=bottom;i++){

                    cout<<input[i][right]<<" ";
                    cnt--;
                }
                dir=3;
                right--;
            }
        }
        if(cnt>0){
            if(dir==3){

                for(int i=right;i>=left;i--){
                    cout<<input[bottom][i]<<" ";
                    cnt--;
                }
                dir=4;
                bottom--;
            }
        }
        if(cnt>0){
            if(dir==4){

                for(int i=bottom;i>=top;i--){

                    cout<<input[i][left]<<" ";
                    cnt--;
                }
                dir=1;
                left++;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}