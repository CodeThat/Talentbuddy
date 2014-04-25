/*
Growth - Given two integer numbers d1 and d2 representing the unique visitors on a website on the first and second day since launch.

Your task is to

    write a function that prints to the standard output (stdout) the word:
        "Increase" if the number of unique visitors is higher or at least equal with the ones in the first day
        "Decrease" otherwise

Note that your function will receive the following arguments:

    d1
        which is an integer representing the number of unique visitors for the first day
    d2
        which is an integer representing the number of unique visitors for the second day

Data constraints

    the integer numbers will be in the [0 .. 1,000,000] range
*/

#include <iostream>

using namespace std;

void check_growth(int d1, int d2) {
       if (d2 >= d1) {
           cout << "Increase";
       } else {
           cout << "Decrease";
       }
}
