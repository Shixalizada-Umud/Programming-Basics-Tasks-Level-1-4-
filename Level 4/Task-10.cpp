#include <iostream>
using namespace std;

int main() {
    double netice, eded;
    char emeliyyat;

    cout << "Birinci ədədi daxil edin: ";
    cin >> netice;

    while (true) {
        cout << "Əməliyyatı daxil edin (+, -, *, /, =): ";
        cin >> emeliyyat;

        if (emeliyyat == '=') {
            cout << "Nəticə: " << netice << endl;
            break;
        }

        cout << "Növbəti ədədi daxil edin: ";
        cin >> eded;

        switch (emeliyyat) {
            case '+': netice = netice + eded; break;
            case '-': netice = netice - eded; break;
            case '*': netice = netice * eded; break;
            case '/': 
                if (eded != 0)
                    netice = netice / eded;
                else
                    cout << "Sıfıra bölmək olmaz!" << endl;
                break;
            default:
                cout << "Səhv əməliyyat daxil etdiniz!" << endl;
        }
    }

    return 0;
}