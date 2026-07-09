#include "student_records.hpp"
#include <iostream>

using namespace std;

bool isValidStudentId(string id) {
    // TODO:
    // A valid ID should have at least 3 characters.
    // A valid ID should start with an uppercase letter.
    // Hint: You may compare characters directly, such as id[0] >= 'A'.
    return false;
}

bool isValidScore(double score) {
    // Return true when score is between 0 and 100, inclusive.
    if(score >= 0 && score <= 100) return true;
    return false;
}

void printStudent(const Student& student) {
    cout << student.id << " "
         << student.name << " "
         << student.score << " "
         << determineLetterGrade(student.score)
         << endl;
}

void printStudents(const Student students[], int size) {
    if (students == nullptr || size <= 0) {
        cout << "No students to print." << endl;
        return;
    }

    for (int i = 0; i < size; i++) {
        printStudent(students[i]);
    }
}

double calculateAverageScore(const Student students[], int size) {
    // If the array is null or size is invalid, return 0.0.
    // Otherwise, return the average score.
    if(students == nullptr || size <= 0) return 0.0;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += students[i].score;
    }
    return sum / (double) size;
}

double findHighestScore(const Student students[], int size) {
    // If the array is null or size is invalid, return 0.0.
    // Otherwise, return the highest score.
    if(students == nullptr || size <= 0) return 0.0;
    int max = students[0].score;
    for(int i = 1; i < size; i++) {
        if(students[i].score > max) {
            max = students[i].score;
        }
    }
    return max;
}

int findStudentById(const Student students[], int size, string targetId) {
    // TODO:
    // Search by comparing students[i].id to targetId.
    // Return the index of the matching student.
    // Return -1 if no student is found.
    return -1;
}

char determineLetterGrade(double score) {
    // Return 'A' for scores 90 or higher.
    // Return 'B' for scores 80 or higher.
    // Return 'C' for scores 70 or higher.
    // Return 'D' for scores 60 or higher.
    // Return 'F' otherwise.
    if(score >= 90) return 'A';
    if(score >= 80) return 'B';
    if(score >= 70) return 'C';
    if(score >= 60) return 'D';
    return 'F';
}
