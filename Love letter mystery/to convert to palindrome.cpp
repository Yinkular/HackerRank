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
        
        int length, count =0, ascii_start = 97;; 
        length = word.size();
        
        for(int j=0;j<length/2;j++)
            {
            if(word[j] != word[(length-1)-j])
                {
                int min_value, max_value;
                max_value = max((int) word[j], (int)word[(length-1)-j]);
                min_value = min((int) word[j], (int)word[(length-1)-j]);
                
                while(max_value>min_value)
                    {
                    max_value --;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
