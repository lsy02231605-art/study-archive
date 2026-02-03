#include <iostream> 

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){  // 공백 출력
            cout << " ";
        }
        for(int k=1; k<=i; k++){ // 별 출력
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}