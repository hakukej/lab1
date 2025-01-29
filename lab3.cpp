#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    int m1[n1];
    for (int i = 0; i < n1; i++){
        cin >> m1[i];
    }
    cin >> n2;
    int m2[n2];
    int res[n1 + n2];
    for (int i = 0; i < n2; i++){
        cin >> m2[i];
    }
    for (int i = 0; i < n1; i++){
        res[i] = m1[i];
    }
    for (int i = n1; i < n2; i++){
        for(int j = 0; j < n2; j++){
            res[i] = m2[j];
    }
    }
return 0;
}