/**
 * A science competition was organized in a school, with N number of students taking part. Each student scored a certain number of points. Now, the school wishes to send a certain number of students (K) to the science competition at State Level. The students need to be selected in such a way that the sum of their total score is as high as possible.

Write an algorithm to identify the scores of the student who will take part in the science competition at the State Level.
Note
The sequence of the selected scores of the students should be the same as that of the actual scores(input).
 

Example
Input
5
89 14 5 10 50
2
Output
89 50

Explanation

As the count of students to be selected is 2 (k=2). We have to select the 2 scores whose sum will be the greatest. Score 89 & 50 are the two scores that will make the maximum sum (139).
So, the output is (89, 50).

*/

#include<iostream>
using namespace std;

void findSelectedStudents(int numberOfStudents, int studentScores[], int numberOfStudentsToBeSelected)  
{
    for (int iterator = 0; iterator < numberOfStudentsToBeSelected; iterator++)     //-1 14 5 10 -1
    {
        int maximumIndex = 0;
        for (int jterator = 1; jterator < numberOfStudents; jterator++)
        {
            if (studentScores[jterator] > studentScores[maximumIndex])
            {
                maximumIndex = jterator;
            }
        }

        cout << studentScores[maximumIndex] << " ";
        studentScores[maximumIndex] = -1;
    }

}

int main()
{
    int numberOfStudents;
    cin >> numberOfStudents;

    int studentScores[numberOfStudents];
    for(int iterator = 0; iterator < numberOfStudents; iterator++)
    {
        cin >> studentScores[iterator];
    }

    int numberOfStudentsToBeSelected;
    cin >> numberOfStudentsToBeSelected;

    findSelectedStudents(numberOfStudents, studentScores, numberOfStudentsToBeSelected);

    return 0;
}