// Problem Link:https://www.hackerrank.com/challenges/students-marks-sum/problem?isFullScreen=true

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    int number_of_students;
    char gender = 'b';
    cout<<"enter number of students: ";
    cin >> number_of_students;
    int marks[number_of_students];
    int index = 0;
    for (index; index< number_of_students;index++){
        cout<<"Enter mark: ";
        cin >> marks[index];
    }

    int total_marks = 0;
    if (gender=='b'){
        index = 0;
        while (index<number_of_students){
            total_marks += marks[index];
            index +=2 ;
        }
    } else if (gender == 'g'){
        index = 1;
        while (index<number_of_students){
            total_marks += marks[index];
            index +=2 ;
        }
    }

    cout << total_marks << endl;

    return 0;
}