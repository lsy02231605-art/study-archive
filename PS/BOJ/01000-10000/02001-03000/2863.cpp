#include <iostream>
using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    double values[4];
    // 0회전
    values[0] = A/C + B/D;
    // 1회전
    values[1] = C/D + A/B;
    // 2회전
    values[2] = D/B + C/A;
    // 3회전
    values[3] = B/A + D/C;

    int answer = 0;
    double maxVal = values[0];
    for (int i = 1; i < 4; i++) {
        if (values[i] > maxVal) {
            maxVal = values[i];
            answer = i;
        }
    }

    cout << answer << endl;
    return 0;
}
