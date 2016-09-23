#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number_of_rocks;
    cin  >> number_of_rocks;
    
    string rocks[number_of_rocks];
    
    for(int i=0;i<number_of_rocks;i++)
        {
        cin >> rocks[i];
    }
    
    int char_count[26] = {0}, ascii_value, ascii_start=97;
    
    for(int i=0;i<number_of_rocks;i++)
        {
        string current_rock;
        current_rock = rocks[i];
        
        int length;
        length = current_rock.size();
        
        for(int j=0;j<length;j++)
            {
            ascii_value = (int) current_rock[j];
            
            if (char_count[ascii_value- ascii_start] == i)
            char_count[ascii_value- ascii_start]++;
        }
    }
    
    int count=0;
    
    for(int i=0;i<26;i++)
        {
        if(char_count[i]>=number_of_rocks)
            {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
