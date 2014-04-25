/*
Student progress

Students are graded for their activity in each lab session.

It is expected that a student’s performance improves in time, which means that he should always receive a grade equal to or higher than the grade he received in the previous lab.

Given an array with the lab grades of a student

Your task is to

    write a function that checks whether the grades received by each student are in ascending order
    your function must print to standard output (stdout):
        1 if the grades are in ascending order (e.g. 1, 3, 3, 7)
        0 if the grades are not in ascending order (e.g. 1, 3, 7, 3)

Note that your function will receive the following arguments:

    grades
        which is an array containing the grades of the student

Data constraints

    the length of the array given as input will not exceed 1000 elements
*/    


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void is_sorted(const vector<int> &grades) {
    if(!is_sorted(grades.begin(), grades.end())){
        cout << 0;
    }
    else
        cout << 1;         
}
