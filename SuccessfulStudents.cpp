/*
Successful students

Given an array with all final grades for a course and the minimum grade that a student needs to have in order to pass the course

Your task is to

    write a function that counts the number of students that passed and prints this number to standard output (stdout)

Note that your function will receive the following arguments:

    grades
        which is the list of grades, represented as integer numbers
    min_grade
        which is the minimum grade that a student can get, so that he passes the course

Data constraints

    the length of the array given as input will not exceed 1000 elements
*/



#include <iostream>
#include <vector>

using namespace std;

void count_successful_students(const vector<int> &grades, int min_grade){
    vector<int> temp = grades;
    int i; 
    int count = 0;
    for(i = 0; i < temp.size(); i++){
        if(temp[i] >= min_grade){
            count += 1;
        }
    }
    cout << count;
}
