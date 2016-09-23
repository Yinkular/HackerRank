#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    
    int array[100]={0}, number;
    
    //get the frequency of each number
    for(int i=0;i<n;i++)
        {
        cin >> number;
        array[number]++;
    }
    
    // run throught the frequency array
    for(int i=0;i<100;i++)
        {
        //loop that prints the number of times a number occurs
        for(int j=0;j<array[i];j++)
            {
            cout << i << " ";
        }
    }
    return 0;
}
