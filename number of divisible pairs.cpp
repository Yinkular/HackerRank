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
    int k;
    
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    int count=0, current_index, inner_index,sum;
    //for every index add to other indexes
    for(int i=0;i< n;i++)
    {
        current_index = a[i];
        for(int j=i+1;j<n;j++)
            {
            inner_index= a[j];
            sum = current_index + inner_index;
            if(sum%k ==0 )
                {
                count++;
            }
        }
    }
    
     cout << count << endl;
    return 0;
}
