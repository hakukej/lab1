#include <iostream>
#include <vector>
using namespace std;
int main() {
int n;
cin >> n;
int a[n];
int m;
for(int i = 0; i < n; i++){
    cin >> a[i];
}
for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        if(a[i] > a[j]){
            m = a[i];
            a[i] = a[j];
            a[j] = m;
        }
    }
}
for(int i = 0; i < n; i++){
    cout << a[i] << ' ';
}
cout << endl;
for(int i = n; i >= 0; i--){
    cout << a[i] << ' ';
}

return 0;
}
// 5 2 4 6 8 1 3 9