#include <iostream>
using namespace std;

int main() {
    int A, B;  
    int C, D;  
    
    cin >> A >> B;  
    cin >> C >> D;  
    
    int case1 = B + C;  
    int case2 = A + D;  
    
   
    if(case1 < case2) {
        cout << case1;
    } else {
        cout << case2;
    }
    
    return 0;
}