//
//  main.cpp
//  productivity_tracker
//

#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;

time_t dateToTimeT(int month, int day, int year) {
    // January 5, 2000 is passed as (1, 5, 2000)
    tm tmp = tm();
    tmp.tm_mday = day;
    tmp.tm_mon = month - 1;
    tmp.tm_year = year - 1900;
    return mktime(&tmp);
}

time_t badTime() {
    return time_t(-1);
}

time_t now() {
    return time(0);
}


void parse(string dateToParse) {
    size_t rhs = dateToParse.find("/");
    int parsedMonth = stoi(dateToParse.substr(0, rhs));
    cout << "Parsed month is: " << parsedMonth << endl;
    
    size_t lhs = rhs + 1;
    rhs = dateToParse.find("/", lhs);
    int parsedDay = stoi(dateToParse.substr(lhs, rhs - lhs));
    cout << "Parsed day is: " << parsedDay << endl;
    
    lhs = rhs + 1;
    rhs = dateToParse.find("/", lhs);
    int parsedYear = stoi(dateToParse.substr(lhs, rhs - lhs));
    cout << "Parsed year is: " << parsedYear << endl;
    
}

int main() {
    
    time_t date1 = dateToTimeT(1,1,2021);
    time_t date2 = dateToTimeT(2,1,2021);
    
    string userDate;
    cout << "Enter the date of Day 1 in the format MM/DD/YYYY: " << endl;
    getline(cin, userDate);
    
    cout << "You entered the date: " << userDate << endl;
    
    parse(userDate);
    
    
    
    if ((date1 == badTime()) || (date2 == badTime())) {
        cerr << "unable to create a time_t struct" << endl;
        return EXIT_FAILURE;
    }
    
// constructor for dayOfCycle object in the weekday class
    
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

    double sec = difftime(date2, date1);
    long days = static_cast<long>(sec / (60 * 60 * 24));
    cout << "the number of days between Jan 1 2021 and Feb 1 2021 is ";
    cout << days << endl;
    return EXIT_SUCCESS;
}
