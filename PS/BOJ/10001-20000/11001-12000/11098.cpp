#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; // 테스트 케이스 개수
    cin >> n;

    while (n--) {
        int p; // 선수 수
        cin >> p;

        int maxPrice = 0;
        string bestPlayer;

        for (int i = 0; i < p; i++) {
            int price;
            string name;
            cin >> price >> name;

            if (price > maxPrice) {
                maxPrice = price;
                bestPlayer = name;
            }
        }

        cout << bestPlayer << endl;
    }

    return 0;
}