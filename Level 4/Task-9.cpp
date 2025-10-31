#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 1000; i++) {
        int n = i, ters = 0, q;
        while(n > 0) {
            q = n % 10;
            ters = ters * 10 + q;
            n /= 10;
        }
        if (ters == i)
            cout << i << " ";
    }
    return 0;
}