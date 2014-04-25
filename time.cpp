// Time - Given an integer representing a large number of seconds. Your task is to
// write a function that prints it to the standard output (stdout) in the hours:minutes:seconds format
// Note that your function will receive the following argument: seconds which is the number of seconds described above

#include <iostream>
#include <iomanip>

using namespace std;

const int HRS_PER_DAY = 24;
const int MIN_PER_HR = 60;
const int SEC_PER_MIN = 60;

void convert_seconds(int seconds) {
    unsigned int hours, minutes, secs = 0; 
 
    hours = seconds/MIN_PER_HR/SEC_PER_MIN;
    minutes = (seconds/MIN_PER_HR)%SEC_PER_MIN;
    secs = seconds%SEC_PER_MIN;

    cout << setfill('0') << setw(2) << hours << ":" 
        << setfill('0') << setw(2) << minutes << ":" 
        << setfill('0') << setw(2) << secs;
}
