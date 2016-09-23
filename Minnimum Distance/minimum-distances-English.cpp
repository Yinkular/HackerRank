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
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    
    int minValue=-1, currentNumber;
    
    for(int i=0;i<n;i++)
        {
        currentNumber = A[i];
        
        for(int j=i+1;j<n;j++)
            {
            if(currentNumber==A[j])
                {
                if(minValue==-1)
                    {
                    minValue = abs(j-i);
                }
                
                else if(minValue!=-1 && abs(j-i)< minValue)
                    {
                    minValue= abs(j-i);
                }
            }
        }
    }
    
    cout<< minValue << endl;
    return 0;
}
