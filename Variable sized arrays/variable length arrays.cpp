#include <iostream>
using namespace std;

int main() {
 int n,q;
    cin >> n >>q;

    // create an array of integer pointers;
    // traditional arrays are created by
    // int *array = new int[size];
    int* *array_of_pointers = new int*[n];

    //accept each line as an array individually
    //and store pointers back in the above array
    for(int i=0;i<n;i++)
        {
        //first integer on each line is size of the array
        int size;
        cin >> size;
        
        //create an array of size
        int *number_array = new int[size];
        
        //get other numbers into the array
        for(int j=0;j<size;j++)
            {
            cin >> number_array[j] ;
        }
        
        // assign pointer of the current array back to array of pointers
        array_of_pointers[i] = number_array;
    }

    //the queries
    // first element = array possition , second = element index
    for(int k=0;k<q;k++)
        {
        int element, index;
        cin >> element >> index;
        
        cout << array_of_pointers[element][index] <<endl;
    }
    
	return 0;
}
