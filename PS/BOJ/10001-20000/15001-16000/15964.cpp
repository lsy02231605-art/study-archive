#include <iostream>

using namespace std;

long long kk(long long x, long long y) {
    return (x+y) * (x-y);
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << kk(a,b);

    return 0;

}