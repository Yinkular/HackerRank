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
    
    int rotate = k %n, index;
    
    for(int i=0;i<q;i++)
    {
	   cin >> index;
	 
	   if(index-rotate>=0)
		  cout << array[index-rotate] << endl;
	   else
	   cout << array[index-rotate+n]<< endl;
    }
    
    return 0;
}
