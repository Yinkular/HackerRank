#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int entries;
    cin >> entries;
    
    string name, phone_number,query, answer;
    
    map <string, string> phone_book;
    for(int i=1;i<=entries;i++)
        {
        cin >> name >> phone_number;
        
        phone_book[name] = phone_number;
    }
    
  while(cin>>query)
        {
        if(query.empty())
            {
            break;
        }
          
        if(phone_book.find(query) == phone_book.end())
            {
            cout << "Not found" << endl;
        }
        
        else
            {
            answer = phone_book.find(query)->second;
            
            cout << query << "=" << answer << endl; 
        } 
    }
    
    return 0;
}
