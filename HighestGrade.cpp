/*
Highest grade

Given an array with all final grades for a course

Your task is to

    write a function that finds the highest grade and prints this grade to standard output (stdout)

Note that your function will receive the following arguments:

    grades
        which is the list of grades, represented as integer numbers

Data constraints

    the length of the array given as input will not exceed 1000 elements
*/

#include <iostream>
#include <vector>

using namespace std;

void max_grade(const vector<int> &grades) {
    vector<int> temp = grades;
    int i;
    int highest = 0;
    for(i = 0; i < temp.size(); i++){
            if(temp[i] > highest)
                highest = temp[i];                   
     }                         
        cout << highest;                        
}
