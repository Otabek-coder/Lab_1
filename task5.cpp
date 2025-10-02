#include <iostream>
using namespace std;

int sum(int a, int b, int c) {
    return a + b + c;
}

double average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int score1, score2, score3;
    cout << "Enter score for Subject 1: ";
    cin >> score1;
    cout << "Enter score for Subject 2: ";
    cin >> score2;
    cout << "Enter score for Subject 3: ";
    cin >> score3;

    int total = sum(score1, score2, score3);
    double avg = average(score1, score2, score3);

    cout << "Sum: " << total << endl;
    cout << "Average: " << avg << endl;

    return 0;
}

// Enter score for Subject 1: 2.5
// Enter score for Subject 2: Enter score for Subject 3: Sum: -361798494
// Average: -1.20599e+08