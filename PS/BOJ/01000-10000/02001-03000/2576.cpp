#include <iostream>
using namespace std;

int main() {
    int num;        
    int sum = 0;    
    int min = 101;  
    bool found = false;  
    for(int i = 0; i < 7; i++) {
        cin >> num;

        if(num % 2 == 1) {   
            sum += num;      
            
            if(num < min) {  
                min = num;
            }

            found = true;    
        }
    }

    if(found == false) {
        cout << -1;
    } else {
        cout << sum << endl;
        cout << min;
    }

    return 0;
}