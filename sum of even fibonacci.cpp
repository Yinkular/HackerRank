#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long  test_cases;
    cin >> test_cases;
    
    //run for number of test cases
    for(long i=1;i<=test_cases;i++)
        {
        
        //get nth fibonacci value from user
        long long number;
        cin >> number;
        
        //initialize elements
        long long first = 1;
        long long second =2;
        long long fib;
        long long sum=2;
        
        for(int j=3;j<=number;j++)
            {
            //get current fibonnaci
            fib = first+second;
            first = second;
            second = fib;
            
            if (fib>=number)
                {
                break;
            }
            if(fib %2==0)
                {
                sum+=fib;
            }
        }
       cout << sum << endl;
    }
    return 0;
}
