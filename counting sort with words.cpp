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
    
    for(int i=1;i<=n;i++)
        {
        cin >> number >> word;
        array_numbers[i-1] = number;
        
        if(i>n/2)
            {
            words[i-1] = word;
        }
        
        else
            {
             words[i-1] = "-";
        }
        
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
    int output[n], current_element, eventual_position;
    string output_string[n], current_string;
    for(int i=0;i<n;i++)
        {
        //get the starting position for the current index of the original array
        current_element = array_numbers[i];
        eventual_position = array_start[array_numbers[i]];
        current_string = words[i];
        
        //and insert in appropriate positon
        output[eventual_position]= current_element;
        output_string[eventual_position] = current_string;
        
        //increase the starting index for current number by one
        array_start[current_element]++;
    }
    
     for(int i=0;i<n;i++)
        {
        cout <<output_string[i] << " ";
    }
    return 0;
}
