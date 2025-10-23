#include <iostream>
#include <string>
using namespace std;

int main() {
    int score[10] = {85, 90, 60, 92, 100, 76, 50, 89, 84, 40};
    int gradeCount[5] = {0}; // To count grades A, B, C, D, F

    // Categorizing scores into grades
    for (int i = 0; i < 10; ++i) {
        if (score[i] >= 90) {
            gradeCount[0]++;
        } else if (score[i] >= 80) {
            gradeCount[1]++;
        } else if (score[i] >= 70) {
            gradeCount[2]++;
        } else if (score[i] >= 60) {
            gradeCount[3]++;
        } else {
            gradeCount[4]++;
        }
    }

    // Outputting the count of each grade category
    cout << "A等人數: " << gradeCount[0] << endl;
    cout << "B等人數: " << gradeCount[1] << endl;
    cout << "C等人數: " << gradeCount[2] << endl;
    cout << "D等人數: " << gradeCount[3] << endl;
    cout << "F等人數: " << gradeCount[4] << endl;

    return 0;
}
