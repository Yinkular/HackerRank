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
    
    int number,array_numbers[n], number_frequency[100] = {0};
    string word,words[n];
    
    for(int i=0;i<n;i++)
        {
        cin >> number >> word;
        array_numbers[i] = number;
        words[i] = word;
        
        // get the frequency of each number
        number_frequency[number]++;
    }
    
    // get the starting position of each number in the ouput array
    // starts at zero
    int array_start[100] = {0} ,start=0;
    for(int i=0;i<100;i++)
        {
        array_start[i] = start;
        start +=number_frequency[i];
    }
   
    //place every element in correct position in the output array
   int output[n];
    for(int i=0;i<n;i++)
        {
        //get the starting position for the current index of the original array
        //and insert in appropriate positon
        output[array_start[array_numbers[i]]]= array_numbers[i];
        //increase the starting index for current number by one
        array_start[array_numbers[i]]++;
    }
    
     for(int i=0;i<n;i++)
        {
        cout << output[i] << " ";
    }
    return 0;
}
