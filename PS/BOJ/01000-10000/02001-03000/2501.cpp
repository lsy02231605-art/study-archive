#include <iostream>

using namespace std;

int arr[10000] = {0, };  // main 함수 밖에 있으면 0으로 초기화됨? 이게 없어도 된?다고함

int main(){
    int n, k;
    int count = 0;

    cin >> n >> k;

    for(int i=n; i>0; i--){
        if(n % i == 0){
            arr[count] = n / i;
            count++;
        }
    }

    // cout << arr[0] << " " << arr[1] << " " <<  arr[2] << " " << arr[3];

    cout << arr[k-1];



    return 0;
}