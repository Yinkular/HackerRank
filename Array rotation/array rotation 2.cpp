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
    
    int array[n], output_array[n];
    for(int i=0;i<n;i++)
        {
        cin >> array[i];
    }
    
    int new_location, last_index = n-1;
    for(int i=0;i<n;i++)
        {
        new_location = i+k;
        
        if(new_location > last_index)
            {
            new_location = new_location-n;
        }
        
        output_array[new_location]= array[i];
        
    }
    
    int index;
    for(int i=0;i<q;i++)
        {
        cin >> index;
        cout << output_array[index] <<endl;
    }
    
  
    
    return 0;
}
