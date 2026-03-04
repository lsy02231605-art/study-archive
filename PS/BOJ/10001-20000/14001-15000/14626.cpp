#include <iostream>
#include <string>
using namespace std;

int main() {
    string isbn;
    cin >> isbn;

    int sum = 0;
    int starPos = -1;
    bool starEven = false; 

    for (int i = 0; i < 13; i++) {
        if (isbn[i] == '*') {
            starPos = i;
            starEven = (i % 2 == 1); 
        } else {
            int digit = isbn[i] - '0';
            sum += (i % 2 == 1 ? digit * 3 : digit);
        }
    }

    sum %= 10;

    if (starEven) {
        for (int d = 0; d < 10; d++) {
            if ((sum + d * 3) % 10 == 0) {
                cout << d << endl;
                break;
            }
        }
    } else {
        cout << (10 - sum) % 10 << endl;
    }

    return 0;
}