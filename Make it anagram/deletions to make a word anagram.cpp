#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Anagram rules
// 1) All letters in two strings must have same frequency
// 2) If frequency is greater in one subtract multiple times to get to other freuency

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string word1, word2;
    
    cin  >> word1 >> word2;
    
    int length1, length2, char_frequency1[26] = {0}, char_frequency2[26] = {0}, ascii_value, ascii_start=97;
    
    length1 = word1.size();
    length2 = word2.size();
    
    for(int i=0;i<length1;i++)
        {
        ascii_value = (int) word1[i];
        
        char_frequency1[ascii_value - ascii_start]++;
    }
    
    for(int i=0;i<length2;i++)
        {
        ascii_value = (int) word2[i];
        
        char_frequency2[ascii_value - ascii_start]++;
    }
    
    int deletion_count=0,min_number, max_number;
    
    for(int i=0;i<26;i++)
        {
        if( char_frequency1[i] != char_frequency2[i])
            {
            min_number = min(char_frequency1[i],char_frequency2[i]);
            max_number = max(char_frequency1[i],char_frequency2[i]);
            
            while(max_number>min_number)
                {
                max_number--;
                deletion_count++;
            }
        }
    }
    
    cout << deletion_count << endl;
    return 0;
}
