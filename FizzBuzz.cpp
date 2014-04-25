/*
FizzBuzz

Given an integer number N

Your task is to

    write a function that prints to the standard output (stdout) the numbers from 1 to N (one per line) with the following restrictions
        for multiples of three print “Fizz” instead of the number
        for the multiples of five print “Buzz” instead of the number
        for numbers which are multiples of both three and five print “FizzBuzz”

Note that your function will receive the following arguments:

    n
        which is the integer number described above

Data constraints

    the maximum value of N will not exceed 1000

Efficiency constraints

    your function is expected to print the result in less than 2 seconds
*/


#include <iostream>

using namespace std;

void fizzbuzz(int n) {
       for (int i = 1; i <= n; i++) {
               if ((i % 15) == 0)
                       cout << "FizzBuzz" << endl;
               else if ((i % 3) == 0)
                       cout << "Fizz" << endl;
               else if ((i % 5) == 0)
                       cout << "Buzz" << endl;
               else
                       cout << i << endl;
       }
}
