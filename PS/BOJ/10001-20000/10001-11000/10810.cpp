#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> basket(N+1, 0); // 바구니 상태 저장 (1~N번 사용)

    for (int t = 0; t < M; t++) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int x = i; x <= j; x++) {
            basket[x] = k; // 범위 안의 바구니에 모두 k번 공 넣기
        }
    }

    for (int x = 1; x <= N; x++) {
        cout << basket[x] << " "; // 공백으로 구분해서 출력
    }
    return 0;
}