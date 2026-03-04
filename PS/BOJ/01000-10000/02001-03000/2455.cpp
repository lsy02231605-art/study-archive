#include <iostream>
using namespace std;

int main() {
    int current = 0;   // 현재 기차 안 사람 수
    int maxPeople = 0; // 최대 인원

    for (int i = 0; i < 4; i++) {
        int out, in;
        cin >> out >> in;
        current -= out; // 내린 사람
        current += in;  // 탄 사람
        if (current > maxPeople) {
            maxPeople = current;
        }
    }

    cout << maxPeople << endl;
    return 0;
}