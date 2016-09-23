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
        
        int answer= -1, length = word.size();
        string sub_word;
        
        for(int i =0;i<length/2;i++)
            {
            
            if(word[i] != word[(length-1)-i])
               {
                   sub_word = word;
                   sub_word = sub_word.erase(i,1);
                    
                   if(is_palindrome(sub_word))
                       {
                       answer =i;
                       break;
                   }
                   else
                       {
                       answer = (length-1)-i;
                       break;
                   }
               }
        }
       
       cout << answer << endl;
    }
    return 0;
}