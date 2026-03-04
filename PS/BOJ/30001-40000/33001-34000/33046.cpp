#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;

    int ga = (A + B - 1) % 4 + 1;
    int jin = (ga + C + D - 2) % 4 + 1;

    cout << jin;
}