#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
   
    // sort throurh list and find min
    int min=arr[0];
    for(int i=0;i<n;i++)
        {
        int j = i;
        while(arr[j] < arr[j-1] && j>0)
            {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    int loop =0,next_min=0;
    while(loop<n)
        {
		 //get current minimum
        int min = arr[loop];
		//set current no of cuts to zero
        int count =0;
		//start from current minimum
        for(int start =loop;start <n;start++)
            {
			//count number of cuts
            count++;
            arr[start] = arr[start]-min;
            if(arr[start]==0)
                {
                next_min++;
            }
        }
        cout<<count<<endl;
		//set loop to start from next minimum
        loop = next_min;
    }
    
    
    
    
    
    return 0;
}