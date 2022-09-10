  /*
  
  You are given an array AA of length NN.

A pair (i, j)(i,j) (1\le i\lt j \le N)(1≤i<j≤N) is said to be good if gcd(A_i, A_j) = lcm(A_i, A_j)gcd(A 
i
​
 ,A 
j
​
 )=lcm(A 
i
​
 ,A 
j
​
 ). Here gcdgcd denotes the greatest common divisor and lcmlcm denotes least common multiple.

Find the total number of good pairs present in the given array.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first line of each test case contains an integer NN - the length of the array AA.
The second line of each test case contains NN space-separated integers A_1,A_2,\ldots,A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
 */

#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	   long long a[n];
	   
	   map<long long,long long>mp;
	   for(int i=0;i<n;i++){
	       cin>>a[i];
	       mp[a[i]]++;
	   }
	   long long ans=0;
	   for(auto x:mp){
	       ans +=(x.second*(x.second-1))/2;
	   }
	   
	   cout<<ans<<endl;
	}
	   
	    
	
	return 0;
}
/*
Input :
  5
2
5 9
5
1 5 5 5 9
8
2 5 5 2 9 9 9 12
4
12 12 18 18
5
12 15 10 5 9

Output :
0
3
5
2
0
*/
