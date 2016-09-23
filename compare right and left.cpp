#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    //no fo test cases
    int test_cases;
    cin >> test_cases;
    
    //run loop for number of test cases
    for(int test_number=1;test_number<=test_cases;test_number++)
        {
        int no_of_elements;
        cin >> no_of_elements;
        
        int array[no_of_elements];
        for(int i=0;i<no_of_elements;i++)
            {
            cin >> array[i];
        }
        
        int sum_left,sum_right;
        for(int i=0;i<no_of_elements;i++)
            {
            sum_left=0,sum_right=0;
            //get sum of all right elements
            if(i< no_of_elements-1)
                {
                for(int j=i+1;j<no_of_elements;j++)
                    {
                    sum_right+=array[j];
                }
            }
            
            if(i!=0)
              {
                for(int k=i-1;k>=0;k--)
                    {
                    sum_left+=array[k];
                }
            }
            
            if(sum_right==sum_left)
                {
                cout << "YES"<<endl;;
                break;
            }
            
            else if(i==no_of_elements-1 && sum_left!=sum_right)
                {
                cout << "NO"<<endl;
            }
        }
        
    }
    return 0;
}
