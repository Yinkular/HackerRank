#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time, time_specification,hour;
    int hour_eqv;
    cin >> time;
    
    time_specification = time.substr(8,2);
    
    if(time_specification.compare("AM")==0)
        {
        hour = time.substr(0,2);
        hour_eqv = stoi(hour);
        
        if(hour_eqv == 12)
            {
            hour = "00";
            time.replace(0,2,hour);
        }
        time = time.substr(0,8);
    }
    
    else if (time_specification.compare("PM")==0)
        {
         
         hour = time.substr(0,2);
         hour_eqv = stoi(hour);
         
         if(hour_eqv!=12)
             {
         hour_eqv = hour_eqv + 12;
         //char *hours = itoa(hour_eqv);
         hour = to_string(hour_eqv);
         time.replace(0,2,hour);
         }
         time = time.substr(0,8);
         
    }
    cout << time;
    return 0;
}
