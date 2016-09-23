#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        
        int no_of_choc,wrappers,choc_from_wrappers;
        no_of_choc = n/c;
        wrappers = no_of_choc;
        
        while(wrappers >= m)
            {
            choc_from_wrappers = wrappers/m;
            wrappers =  choc_from_wrappers + wrappers % m;
            no_of_choc+=choc_from_wrappers;
        }

        cout << no_of_choc << endl;
    }
    
    return 0;
}