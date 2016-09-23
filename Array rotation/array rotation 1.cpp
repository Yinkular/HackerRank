#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,k,q;
    
    cin >> n >> k >> q;
    
    int array[n];
    for(int i=0;i<n;i++)
        {
        cin >> array[i];
    }
    
    int start =1, last_element= n-1, loop_end = n-2;
    while(start<=k)
        {
        for(int i=0;i<=loop_end;i++)
            {
            swap(array[i], array[last_element]);
        }
        start++;
    }
    
    int index;
    for(int i=0;i<q;i++)
        {
        cin >> index;
        cout << array[index] <<endl;
    }
    
    return 0;
}
