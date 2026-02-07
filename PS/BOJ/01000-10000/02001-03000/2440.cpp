#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){    // 몇줄을 출력할지
        for(int j=1; j<=i; j++){   // 그 줄에 몇개의 별을 출력할지
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
