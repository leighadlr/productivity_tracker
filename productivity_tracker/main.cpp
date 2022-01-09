//
//  main.cpp
//  productivity_tracker
//
//  Created by Leigh Arino on 1/9/22.
//

#include <iostream>
#include <chrono>
using namespace std;

int main() {
    
// constructor for dayOfCycle object in the weekday class
    
// input date from user (userDate)
// assign userDayOne to that day
// Determine day of the week for userDate, for printing in list below
//
// increment userDayOne within the loop (at the end) to print the MM/DD instead of "day 1"
// once it is set up for one month, change the days in if statements or run loop twice

    for (int i = 1; i < 27; i++) {
        if ((i >= 1 && i <= 5) || (i >= 18 && i <=20) || (i >= 26 && i <= 27)) {
            cout << "Day " << i << " is neutral." << endl;
        }
        
        else if ((i >= 6 && i <= 14) || (i >= 21 && i <= 22)) {
            cout << "Day " << i << " is GREEN." << endl;
        }
        
        else if ((i >= 15 && i <= 17) || (i >= 23 && i <= 25)) {
            cout << "Day " << i << " is a rest day." << endl;
        }
    }

    
   
    return 0;
}
