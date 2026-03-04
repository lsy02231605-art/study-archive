#include <iostream>
using namespace std;

int main() {
    int n; // 멀티탭 개수
    cin >> n;

    int total = 0;
    for (int i = 0; i < n; i++) {
        int plug;
        cin >> plug;
        total += plug;
    }

    // 멀티탭 연결 때문에 (n - 1)개 구멍은 사용 불가
    cout << total - (n - 1) << endl;
    return 0;
}