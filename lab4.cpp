#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool c = false;
    int matr[n];
    vector<int> ev;
    for(int i = 0; i < n; i++){
        cin >> matr[i];
    }
    for(int i = 0; i < n; i++){
        if(matr[i] % 2 == 0){
            ev.push_back(matr[i]);
            c = True
        }
    }
    
} 