#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number;
    cin >> number;
    int array[number];
    
    for(int i =0;i<number;i++)
        {
        cin >> array[i];
    }
    int value,temp,control,count =0;;
    for(int i=1;i<number;i++)
        {
        value = array[i];
        control =i;
        
        while(control>=0 && array[control]<array[control-1])
            {
            swap(array[control], array[control-1]);
            control--;
            count++;
        }
    }
    cout << count;
    return 0;
}