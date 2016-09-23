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
    
    for(int i=1;i<=test_case;i++)
        {
        string word;
        
        cin >> word;
        
        int length = word.length();
        
        if(length %2 != 0)
            {
            cout << "-1" << endl;
        }
        
        else
            {
            int count =0, mid = length/2;
            string substring1, substring2;
            substring1 = word.substr(0,mid);
            substring2 = word.substr(mid,mid);
            
            int char_freq1[26]= {0}, char_freq2[26] ={0}, ascii_value;
            
            for(int i=0;i<substring1.length();i++)
                {
                ascii_value = (int) substring1[i];
                char_freq1[ascii_value -97]++;
            }
            
            for(int i=0;i<substring2.length();i++)
                {
                ascii_value = (int) substring2[i];
                char_freq2[ascii_value -97]++;
            }
            
            for(int i=0;i<26;i++)
                {
          
                if(char_freq2[i]!=char_freq1[i])
                    {
                    if(char_freq2[i] - char_freq1[i] >0)
                    count += (char_freq2[i] - char_freq1[i]);
                }

            }
            
            cout << count << endl;
        }
    }
    return 0;
}
