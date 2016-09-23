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
    
    int test_cases;
    cin >> test_cases;
    
    for(int i=1;i<=test_cases;i++)
        {
        int number;
        cin >> number;
        
        
        // condition states two product of two three digit integers
        int product=0, current_answer=0, last_right=0;
        string number_string;
        bool status = false;
        for(int left=100;left<1000;left++)
            {
            for(int right=100;right<1000;right++)
                {
                
                //product of current two numbers
                product = left * right;
               
               last_right = right;
               if(product > number || right > left)
                    {
                    break;
                }
                
                // check if it is palindrome or not
                number_string = to_string(product);

                if(is_palindrome(number_string))
                {
                    current_answer = max(product, current_answer);
                }
 
            }
            if(last_right+1 * left > number)
                {
                break;
            }
           
        }
        
        cout << current_answer << endl;
       
    }
       
   
    return 0;
}
