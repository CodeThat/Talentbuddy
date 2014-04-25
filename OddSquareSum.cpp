/*
Odd square sum

Print to the standard output (stdout) the sum of all the odd numbers squared between x and y.

y will always be greater than x.

Example input:
x: 1
y: 5

Example output:
35
*/


#include <iostream>

using namespace std;

void odd_square_sum(int x, int y) {
    int sum = 0;
    int tally = 0;        
    for(int i = x; i <= y; i++)
    {
        if(i % 2 != 0)
        {
            tally+=i;
            sum += i * i;
        }
    }
    cout << sum;
}
