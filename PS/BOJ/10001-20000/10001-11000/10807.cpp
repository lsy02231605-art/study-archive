#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int num;

    cin >> num;

    cout << count(arr, arr +n, num);

    return 0;

}