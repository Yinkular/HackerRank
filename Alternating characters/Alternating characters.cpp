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
        string input;
        cin >> input;
        
        int delete_count=0, start_char =0, current_char =1, iterator=0;
        char start_c, current_c;
        
        while(iterator < input.size())
            {
            start_c = input[start_char];
            current_c = input[current_char];
            
            if(start_c == current_c)
                {
                delete_count++;
                current_char++;
            }
            
            else 
                {
                start_char = current_char;
                current_char++;
            }
            iterator++;
        }
        
       cout << delete_count << endl;
    }
