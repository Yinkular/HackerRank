#include <iostream>
#include <vector>

using namespace std;

// Add your code here

template <class temp>

void printArray(vector<temp> vec)
    {
    int size = vec.size();
    
    for(int i=0;i<size;i++)
        {
        cout << vec[i]<< endl;
    }
}

int main() {
  
    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};
    
    printArray<int>(vInt);
    printArray<string>(vString);
    
    return 0;
}