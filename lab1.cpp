#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    char s[n.size()];
    if (n[0] >= 'a' && n[0] <= 'z') { 
        s[0] = n[0] - ('a' - 'A');    
    } else {
        s[0] = n[0]; 
    }

    for (int i = 1; i < n.size(); i++) {
        if (n[i] >= 'A' && n[i] <= 'Z') { 
            s[i] = n[i] + ('a' - 'A');    
        } else {
            s[i] = n[i]; 
        }
    }

    for (int i = 0; i < n.size(); i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
