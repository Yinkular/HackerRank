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
    
    int remainder;
    string binary_conv="";
    while (n>0)
        {
        remainder = n % 2;
        binary_conv.append(to_string(remainder));
        n = n / 2;
    }
    
    int length =binary_conv.length();
    for(int i=0;i<length/2;i++)
        {
        swap(binary_conv[i],binary_conv[(length-1)-i]);
    }
    
    int max=0,count=0;
    for(int i=0;i<length;i++)
        {
        if(binary_conv[i]=='1')
            {
           count++;
             if(count>max)
                {
                max = count;
             }
        }
        
        else{
                count =0;
        }
    }
    
    
    cout << max;
    return 0;
}
