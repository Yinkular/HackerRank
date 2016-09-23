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
        string word, reverse_word;
        cin >> word;
        
        
        int length = word.length();
        bool status = true;
        
        for(int j=1;j<length;j++)
            {
            int word_difference, reverse_difference;
            
            word_difference = abs((int) word[j] - (int) word[j-1]);
            reverse_difference = abs((int) word[length - j] - (int) word[length - j-1]);
            
            if(word_difference != reverse_difference)
                {
                status = false;
                break;
            }
        }
        
        if(status)
            {
            cout << "Funny"<<endl;
        }
        
        else
            {
            cout << "Not Funny" << endl;
        }
    }
    return 0;
}
