#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//RULES FOR PALINDROME
// 1) left side == right side
// 2) If length is even all elements must have an even frequency
// 3) If length is odd only one element can have a frequency of 1

int main() {
   
    string s;
    cin>>s;
    
    // initialize variables
    // one to store frequency of characters 
    // another to store ascii value of current character
    // abother to store length of word
    int char_frequency[26] = {0}, ascii_value, ascii_start=97, length;
    
    //get the length of the word
    length = s.size();
    
    // for every character in the word increase frequency by 1
    for(int i=0;i<length;i++)
        {
        ascii_value = (int) s[i];
        
        char_frequency[ascii_value - ascii_start]++;
    }
    
    //variable to store number of even occurences and odd occurences
    int  odd_count=0;
    
    for(int i=0;i<26;i++)
        {
        
        //if the occurence of a character is even add to odd 
        if(char_frequency[i] %2 ==1)
            {
            odd_count ++;
        }
       
    }
    
    
    int flag = 0;
   
    if(odd_count <= 1)
    {
    flag =1;
    }
   
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
