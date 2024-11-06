#include<iostream>
using namespace std;

/*
    Problem Statement:
    - The task is to maintain a merit list of students based on their CGPA.
    - The merit list is sorted in descending order of CGPA. If two students have the same CGPA,
      the one with a smaller ID comes first.
    - The merit list has a fixed capacity, meaning the last student on the list is replaced
      if a new student has a higher CGPA.
*/

// Global variable to track the current number of students on the merit list
int currentSize = 0;

// Structure to store student information
struct Student {
    string name;    // Student's name
    int id;         // Student's ID number
    float cgpa;     // Student's CGPA
};

/*
    Function: updateMeritList
    Description:
    - Sorts the merit list based on CGPA in descending order.
    - If two students have the same CGPA, the student with the smaller ID is placed higher.

    Parameters:
    - Student meritList[]: Array representing the merit list.
    - int size: The current number of students on the merit list.
*/
void updateMeritList(Student meritList[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            // Sort primarily by CGPA (descending)
            if (meritList[i].cgpa < meritList[j].cgpa) {
                swap(meritList[i], meritList[j]);
            }
            // If CGPA is the same, sort by ID (ascending)
            else if (meritList[i].cgpa == meritList[j].cgpa && meritList[i].id > meritList[j].id) {
                swap(meritList[i], meritList[j]);
            }
        }
    }
}

/*
    Function: addStudent
    Description:
    - Adds a student to the merit list. If the list is full, the student with the lowest CGPA is replaced.
    - The merit list is updated and sorted after each insertion.

    Parameters:
    - Student meritList[]: The array representing the merit list.
    - string studentName: The name of the student to be added.
    - int studentId: The ID of the student to be added.
    - float studentCgpa: The CGPA of the student to be added.
    - int maxMeritSize: The maximum number of students that can be on the merit list.
*/
void addStudent(Student meritList[], string studentName, int studentId, float studentCgpa, int maxMeritSize) {
    // If there's space in the merit list, add the student
    if (currentSize < maxMeritSize) {
        meritList[currentSize].name = studentName;
        meritList[currentSize].id = studentId;
        meritList[currentSize].cgpa = studentCgpa;
        currentSize++; // Increment the number of students
    } 
    else {
        // Replace the student with the lowest CGPA if the new student has a higher CGPA
        if (meritList[currentSize - 1].cgpa <= studentCgpa) {
            // Additional check if CGPA is the same but the ID is smaller
            if (meritList[currentSize - 1].cgpa == studentCgpa && meritList[currentSize - 1].id > studentId) {
                meritList[currentSize - 1].name = studentName;
                meritList[currentSize - 1].id = studentId;
                meritList[currentSize - 1].cgpa = studentCgpa;
            }
            else {
                meritList[currentSize - 1].name = studentName;
                meritList[currentSize - 1].id = studentId;
                meritList[currentSize - 1].cgpa = studentCgpa;
            }
        }
    }
    // Sort the merit list after insertion
    updateMeritList(meritList, currentSize);
}

/*
    Function: printMeritList
    Description:
    - Prints the current merit list.

    Parameters:
    - Student meritList[]: The array representing the merit list.
    - int size: The current number of students on the merit list.
    - int maxMeritSize: The maximum number of students allowed on the merit list.
*/
void printMeritList(Student meritList[], int size, int maxMeritSize) {
    int numToPrint = min(size, maxMeritSize); // Print up to the merit list size
    for (int i = 0; i < numToPrint; i++) {
        cout << i + 1 << " th student name : " << meritList[i].name << endl;
        cout << i + 1 << " th student id : " << meritList[i].id << endl;
        cout << i + 1 << " th student cgpa : " << meritList[i].cgpa << endl;
        cout << endl;
    }
}

int main() {
    int numStudents, numMerit, studentId;
    string studentName;
    float studentCgpa;

    // Input the number of students and the size of the merit list
    cout << "Enter the number of students in the class: ";
    cin >> numStudents;
    cout << "Enter the maximum number of students for the merit list: ";
    cin >> numMerit;

    // Array to store the merit list
    Student meritList[numMerit];

    // Input each student's data and update the merit list
    for (int i = 1; i <= numStudents; i++) {
        cout << "Enter " << i << " th student name: ";
        cin >> studentName;
        cout << "Enter " << i << " th student id: ";
        cin >> studentId;
        cout << "Enter " << i << " th student cgpa: ";
        cin >> studentCgpa;
        cout << endl;

        // Add the student to the merit list and update
        addStudent(meritList, studentName, studentId, studentCgpa, numMerit);
        printMeritList(meritList, currentSize, numMerit); // Display the current merit list
    }

    return 0;
}
