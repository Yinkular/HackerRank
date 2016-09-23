#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int test_cases;
    cin >> test_cases;
    if(test_cases <= 100000 && test_cases >=1)
        {
        for(int i=1;i<=test_cases;i++)
            {
            long long number;
            cin >> number;
            if(number <=1000000000 && number >=1)
                {
            long long sum =0;
            for(long long j=1;j<number;j++)
                {
                if(j%3==0 | j%5==0)
                    {
                    sum+=j;
                }
            }

            cout << sum << endl;
            }
            else
                break;
        }
    }
    return 0;
}
