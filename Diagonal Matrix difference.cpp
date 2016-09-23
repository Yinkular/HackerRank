#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, sum_diagonal1=0, sum_diagonal2=0;
    cin >> n;
    int limit =n,count;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
        count=0;
       for(int a_j = 0;a_j < n;a_j++){
           count++;
          cin >> a[a_i][a_j];
           
		   //check if  row and column are same 
		   //gets primary diagonal
           if(a_i==a_j)
               {
               sum_diagonal1+= a[a_i][a_j];
           }
          
		  //gets secondary diagonal
           if(count == limit)
               {
               sum_diagonal2+=a[a_i][a_j];
           }
           
       }
        limit--;
    }
    int absolute_answer;
    absolute_answer = abs(sum_diagonal1 - sum_diagonal2);
    cout << absolute_answer;
    return 0;
}
