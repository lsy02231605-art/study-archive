#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);   // 한 줄 전체 입력

    stringstream ss(line);
    string word;
    int count = 0;

    while (ss >> word) {  // 공백 기준으로 단어 추출
        count++;
    }

    cout << count << "\n";
    return 0;
}