#include <iostream>
#include <algorithm>

const int maxNumGrades = 20;


int inputGrades(double gradeList[]) {
    int numGrades;

    std::cout << "Please enter the number of grades: ";
    std::cin >> numGrades;

    if (numGrades <= 0 || numGrades >= maxNumGrades) {
        std::cerr << "Error: Number of grades should be greater than 0 and less than " << maxNumGrades << "." << std::endl;
        exit(EXIT_FAILURE);
    }

    std::cout << "Enter the grades:" << std::endl;
    for (int i = 0; i < numGrades; ++i) {
        std::cin >> gradeList[i];
    }

    return numGrades;
}


void sortGrades(double gradeList[], int numGrades) {
    std::sort(gradeList, gradeList + numGrades);
}


double calculateMedian(double gradeList[], int numGrades) {
    if (numGrades % 2 == 0) {
        
        return (gradeList[numGrades / 2 - 1] + gradeList[numGrades / 2]) / 2.0;
    }
    else {
        
        return gradeList[numGrades / 2];
    }
}

int main() {
   
    double grades[maxNumGrades];

    
    int numGrades = inputGrades(grades);

    
    sortGrades(grades, numGrades);

    
    double medianGrade = calculateMedian(grades, numGrades);
    std::cout << "The median grade is " << medianGrade << std::endl;

    return 0;
}




