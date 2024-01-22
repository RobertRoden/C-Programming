#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/* This program computes the score for a dive based on the degree of difficulty
 * and five judges scores. The high and low scores are dropped.
 //By Robert Roden

 /* Function prototypes */
void inputScores(double scores[]);
double addAllScores(double scores[]);
double findLowScore(double scores[]);
double findHighScore(double scores[]);

int main()
{
    double difficulty, sum, lowScore, highScore, score;
    double judgeScores[5];

    cout << "Please enter the degree of difficulty: ";
    cin >> difficulty;

    inputScores(judgeScores);

    sum = addAllScores(judgeScores);

    lowScore = findLowScore(judgeScores);

    highScore = findHighScore(judgeScores);

    /* subtract out the low and high scores */
    sum = sum - lowScore - highScore;

    /* multiply by degree of difficulty */
    score = sum * difficulty;

    cout << "The score for the dive is: " << fixed << setprecision(2) << score << endl;

    // Remove this line. It's not needed.
    // system("pause");
    return 0;
}

//****************************************************************
// This function gets the judges' scores
//****************************************************************

void inputScores(double scores[])
{
    for (int i = 0; i < 5; i++) // Change 1 to 0 and 4 to 5 to loop through all judges
    {
        cout << "Please enter the score from Judge #" << i + 1 << ": ";
        cin >> scores[i];
    }
}

//****************************************************************
// This function determines the sum of the scores input.
//****************************************************************

double addAllScores(double scores[])
{
    double total = 0; // Initialize total to 0

    // Add up all of the scores
    for (int count = 0; count < 5; count++)
    {
        total += scores[count];
    }
    return total;
}

//****************************************************************
// This function determines the lowest score input.
//****************************************************************

double findLowScore(double scores[])
{
    double lowest = 99999.0;

    // Determine lowest score
    for (int count = 0; count < 5; count++) // Change <= to < to avoid an out-of-bounds access
    {
        if (lowest > scores[count])
            lowest = scores[count];
    }
    return lowest;
}

//****************************************************************
// This function determines the highest score input.
//****************************************************************

double findHighScore(double scores[])
{
    double highest = -1;

    // Determine highest score.
    for (int count = 0; count < 5; count++)
    {
        if (highest < scores[count])
            highest = scores[count];
    }
    return highest;
}

