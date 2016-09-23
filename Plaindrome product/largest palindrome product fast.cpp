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
    
    vector<int> palindromes;
        
    int product;
    string  number_string;
    for(int left = 100;left<1000;left++)
    {
        for(int right =100;right< 1000;right++)
        {
            product = left * right;
            number_string = to_string(product);

            if(is_palindrome(number_string))
            {
                palindromes.push_back(product);
            }
        }
    }
    
    sort(palindromes.begin(), palindromes.end());
    
    int num_elements = palindromes.size();
    
    for(int i=1;i<=test_cases;i++)
        {

        int number;
        cin >> number;
        
        int  end = num_elements-1;
        
        for(int j=0;j<end;j++)
            {
            if(palindromes[j]>= number)
                {
                cout << palindromes[j-1] << endl;
                break;
            }
        }
 
    }
       
   
    return 0;
}