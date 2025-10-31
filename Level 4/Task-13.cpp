#include <iostream>
using namespace std;

int main() {
    int n, eded;
    int tek = 0, cut = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> eded;
        if (i % 2 == 1)
            tek = tek + eded;
        else
            cut = cut + eded;
    }
    cout << tek << endl;
    cout << cut << endl;
    
    return 0;
}