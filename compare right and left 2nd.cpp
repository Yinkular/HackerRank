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

            int sum_left=0,sum_right=0;

            int array[no_of_elements];
            for(int i=0;i<no_of_elements;i++)
                {
                cin >> array[i];
                //get the sum of all enities entered
                sum_right+=array[i];
            }



            for(int i=0;i<no_of_elements;i++)
                {
                sum_right-= array[i];

                if(sum_right==sum_left)
                    {
                    cout<<"YES"<<endl;
                    break;
                }

                sum_left+= array[i];      
        }
            if(sum_right!=sum_left)
                cout<<"NO"<<endl;
    }
return 0;
}
