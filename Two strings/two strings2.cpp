#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int test_case;
    cin >> test_case;
    
    for(int i=0;i<test_case;i++)
        {
        string word1, word2;
        
        cin >> word1 >> word2;
        
        int length1, length2, iterator=0,ascii_value, ascii_start=97;
        
        length1 = word1.size();
        length2= word2.size();
        
        int char_frequency1[26];
        int char_frequency2[26];
        
        for(int i=0;i<26;i++)
            {
            char_frequency1[i]=0;
            char_frequency2[i]=0;
        }
        
        for(int i=0;i<length1;i++)
            {
            ascii_value = (int) word1[i];
            if(ascii_value >= 97 && ascii_value <= 122)
           {
            char_frequency1[ascii_value - ascii_start]++;
            }
        }
        
        for(int i=0;i<length2;i++)
            {
            ascii_value = (int) word2[i];
            
            if(ascii_value >= 97 && ascii_value <= 122)
           {
            char_frequency2[ascii_value - ascii_start]++;
            }
        }
        
        bool status = false;
        
        for(int i=0;i<26;i++)
            {
            if(char_frequency1[i]>=1 && char_frequency2[i] >=1)
                {
                status = true;
                break;
            }  
        }
        
        if(status)
            {
            cout << "YES" << endl;
        }
        else
            {
            cout << "NO" << endl;
        }
       
    }
    
    return 0;
}
