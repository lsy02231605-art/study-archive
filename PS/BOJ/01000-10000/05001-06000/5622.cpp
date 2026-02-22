#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;

    int total = 0;

    for(int i = 0; i < word.length(); i++) {
        char ch = word[i];

        if(ch >= 'A' && ch <= 'C') total += 3;
        else if(ch >= 'D' && ch <= 'F') total += 4;
        else if(ch >= 'G' && ch <= 'I') total += 5;
        else if(ch >= 'J' && ch <= 'L') total += 6;
        else if(ch >= 'M' && ch <= 'O') total += 7;
        else if(ch >= 'P' && ch <= 'S') total += 8;
        else if(ch >= 'T' && ch <= 'V') total += 9;
        else if(ch >= 'W' && ch <= 'Z') total += 10;
    }

    cout << total;

    return 0;
}