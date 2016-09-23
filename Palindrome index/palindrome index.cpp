#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_palindrome(string s)
    {
    int length = s.size();
    bool status = true;
    
    for(int i=0;i<length/2;i++)
        {
        if(s[i] != s[(length-1)-i])
            {
            status = false;
            break;
        }
    }
    
    return status;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test_case;
    cin >> test_case;
    
    for(int i=0;i<test_case;i++)
        {
        string word;
        cin >> word;
        
        bool status;
        int current_char_index;
        
        status = is_palindrome(word);
        
        if(status)
            {
            cout << "-1" << endl;
        }
        
        else
            {
            string sub_word;
            for(int i=0;i<word.size();i++)
                {
                sub_word = word;
                sub_word = sub_word.erase(i,1);
                
                status = is_palindrome(sub_word);
                
                if(status)
                    {
                    cout << i << endl;
                    break;
                }
            }
        }
       
    }
    return 0;
}
