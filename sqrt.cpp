/*
Sqrt

Given an integer number N, compute its square root without using any math library functions and print the result to standard output. Please round the result downwards to the nearest integer (e.g both 7.1 and 7.9 are rounded to 7)

Expected complexity: O(logN), O(1)

Example input:
N: 17

Example output:
4
*/


#include <iostream>

using namespace std;

int estimation = 4;
    
void compute_sqrt(int n) {

        estimation = (estimation + (n / estimation)) / 2;
        cout << estimation;
}
