#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, num;
    int sum = 0;
    vector<int> v;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> num;

        v.push_back(num);
    }

    for(int i=0; i< v.size(); i++){
        for(int j= i+1; j<v.size(); j++){
            for(int k=j+1; k<v.size(); k++){
                if(v[i] + v[j] + v[k] > sum &&
                    v[i] + v[j] + v[k] <= m) {
                        sum = v[i] + v[j] + v[k];
                    }
            }
        }
    }


    cout << sum;

    return 0;
}