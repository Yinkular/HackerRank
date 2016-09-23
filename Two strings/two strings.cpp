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
        
        int length1, length2, iterator=0;
        
        length1 = word1.size();
        length2= word2.size();
        
        bool status = true;
        
        while(status)
            {
            
            for(int i=0;i<length1;i++)
                {
                if(word1[i]== word2[iterator])
                    {
                    cout << "YES" << endl;
                    status = false;
                    break;
                }
            }
            iterator++;
            if(iterator == length2 && status)
                {
                cout << "NO"<<endl;
                status = false;
            }
        }
    }
    
    return 0;
}
