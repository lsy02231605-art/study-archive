#include <iostream>
using namespace std;

int main() {
    int sums[5] = {0}; // 참가자별 총합 저장

    // 입력 처리
    for (int i = 0; i < 5; i++) {
        int score;
        for (int j = 0; j < 4; j++) {
            cin >> score;
            sums[i] += score;
        }
    }

    // 최대값 찾기
    int maxScore = sums[0];
    int winner = 1; // 참가자 번호는 1부터 시작

    for (int i = 1; i < 5; i++) {
        if (sums[i] > maxScore) {
            maxScore = sums[i];
            winner = i + 1; // 인덱스는 0부터지만 번호는 1부터
        }
    }

    cout << winner << " " << maxScore << endl;
    return 0;
}