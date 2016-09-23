
	
	 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string sentence;
    locale loc;
    
    getline(cin,sentence);
    
    
    int char_count[26], ascii_start =97, sentence_length,ascii_value;
    char c;
    for(int i=0;i<26;i++)
        {
        char_count[i]=0;
    }
    
    sentence_length = sentence.size();
    
  
    for(int i=0;i<sentence_length;i++)
        {
        c = tolower(sentence[i],loc);
        ascii_value = int(c);
        
        if(ascii_value >= 97 && ascii_value <= 122)
           {
            char_count[ascii_value - ascii_start]++;
             }
       }
    
     for(int i=0;i<26;i++)
        {
        
        if(char_count[i]==0)
            {
            cout<< "not pangram"<<endl;
            break;
        }
        
        else if(i==25 && char_count[i] >0)
            {
            cout << "pangram" << endl;
        }
    }
	
    
   
    
    return 0;
}
