/*
Sorting students

After an exam all the students are graded and sorted by their grades.

In some cases, students talk to the professor and conclude that one of the tougher problem statements in the exam was unclear and the teacher decides to remove its contribution towards the final grade.

Since it’s just one of many challenges, the sorted list of students won’t change much - only a few students might change their order.

How do we implement an efficient algorithm that sorts a list of numbers that are almost sorted? Bubble sort is the perfect one for this specific case:

    bubblesort(A):
    repeat
        changed = false
        for i = 1 to length(A) - 1
            if A[i - 1] > A[i]
                swap A[i - 1], A[i]
                changed = true
    until not changed
  

Given an array of integer numbers

Your task is to

    implement the bubblesort algorithm to sort the array in ascending order and print the sorted elements to standard output (stdout), one per line

Note that your function will receive the following arguments:

    numbers
        which is the array of integer numbers that needs to be sorted

Data constraints

    the length of the array given as input will not exceed 1000 elements
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort_students(const vector<int> &numbers) {
    int i, j;
	std::vector<int> output = numbers;
	
    for(i = 0; i < output.size(); i++)
    {
        for(j = i+1; j < output.size(); j++)
        {
            int temp;
            if(output[i] > output[j])
            {
                temp = output[i];
                output[i] = output[j];
                output[j] = temp;
            }
        }
    }

    for(i = 0; i < output.size(); i++)
    {
        cout << output[i] << endl;
    }
}
