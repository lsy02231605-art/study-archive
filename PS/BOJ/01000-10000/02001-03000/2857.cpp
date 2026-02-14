#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    bool found = false;

    for (int i = 1; i <= 5; i++) {
        cin >> name;
        if (name.find("FBI") != string::npos) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "HE GOT AWAY!";
    }

    return 0;
}
