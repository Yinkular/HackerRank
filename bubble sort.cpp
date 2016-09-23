#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    int count_swaps=0, size = a.size(), first_element, last_element;
    
    for(int i=0;i<size-1;i++)
        {
        
        for(int j=0;j<size-1;j++)
            {
            if(a[j]> a[j+1])
                {
                swap(a[j], a[j+1]);
                count_swaps++;
            }
        }
       
    }
    
    
    first_element = a[0];
    last_element = a[a.size()-1];
    cout <<"Array is sorted in " << count_swaps<<" swaps." << endl;
    cout << "First Element: " << first_element << endl;
    cout << "Last Element: " << last_element << endl;
    return 0;
}
