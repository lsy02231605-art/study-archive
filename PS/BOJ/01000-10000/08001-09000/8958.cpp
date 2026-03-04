#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; 
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        int score = 0;
        int streak = 0;

        for (char c : s) {
            if (c == 'O') {
                streak++;
                score += streak;
            } else {
                streak = 0;
            }
        }

        cout << score << endl;
    }

    return 0;
}
