#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, M;
    cin >> N >> M;

    long long total = 0;
    while (N > 0) {
        total += N;
        N /= M;  // 보너스 문제 개수
    }

    cout << total << "\n";
    return 0;
}