#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int max= -64 ,count,upper, lower, mid;;
    for(int i=0;i<4;i++)
        {
        for(int j=0;j<4;j++)
            {
            count =0;
            upper = i;
            lower=i+2;
            for(int k=j;k<=j+2;k++)
                {
                count += arr[upper][k];
                count += arr[lower][k];
            }
            count += arr[i+1][j+1];
            
            if(count> max)
                {
                max=count;
            }
        }
    }
    
    cout << max << endl;
    return 0;
}