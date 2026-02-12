#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){

    float score1, score2, score3, score4, score5, avgScore, stddev;

    ifstream scores;

    scores.open("/Users/leopoldclark/Lehigh U/Spring 2026/C:C++/HW/HW2/P2/scores.txt");

    scores >> score1;
    scores >> score2;
    scores >> score3;
    scores >> score4;
    scores >> score5;

    avgScore = (score1 + score2 + score3 + score4 + score5) / 5;

    stddev = sqrt((pow(score1 - avgScore, 2) + pow(score2 - avgScore, 2) + pow(score3 - avgScore, 2) + pow(score4 - avgScore, 2) + pow(score5 - avgScore, 2)) / 5);

    cout << setprecision(2) << fixed;
    cout << "Scores: " << score1 << ", " << score2 << ", " << score3 << ", " << score4 << ", " << score5 << endl;
    cout << "Average Score: " << avgScore << endl;
    cout << "Standard Deviation: " << stddev << endl;

    return 0;
}