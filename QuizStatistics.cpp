#include <iostream>
#include <string>

using namespace std;

const int numStudents = 7;

void setStudentNames(string studentNames[]) {
    studentNames[0] = "Henry";
    studentNames[1] = "Edward";
    studentNames[2] = "Jane";
    studentNames[3] = "Mary";
    studentNames[4] = "Elizabeth";
    studentNames[5] = "James";
    studentNames[6] = "Charles";
}

void inputScores(const string studentNames[], double scores[]) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Please enter the score for " << studentNames[i] << ": ";
        cin >> scores[i];
    }
}

void getAverage(const double scores[], double& average) {
    double sum = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        sum += scores[i];
    }
    average = sum / numStudents;
}

void getHighIndex(const double scores[], int& highIndex) {
    double highestScore = scores[0];
    highIndex = 0;

    for (int i = 1; i < numStudents; ++i) {
        if (scores[i] > highestScore) {
            highestScore = scores[i];
            highIndex = i;
        }
    }
}

int main() {
    const int numStudents = 7;  // Use a local variable for the number of students
    string studentNames[numStudents];
    double scores[numStudents];
    double average;
    int highIndex;

    setStudentNames(studentNames);
    inputScores(studentNames, scores);
    getAverage(scores, average);
    getHighIndex(scores, highIndex);


    cout << "The average score is " << average << endl;


    cout << "The high score was " << studentNames[highIndex] << " with a " << scores[highIndex] << endl;

    // Extra Credit
    int secondHighIndex = 0;
    for (int i = 1; i < numStudents; ++i) {
        if (i != highIndex && scores[i] > scores[secondHighIndex]) {
            secondHighIndex = i;
        }
    }

    cout << "The next highest score was " << studentNames[secondHighIndex] << " with a " << scores[secondHighIndex] << endl;

    return 0;
}

