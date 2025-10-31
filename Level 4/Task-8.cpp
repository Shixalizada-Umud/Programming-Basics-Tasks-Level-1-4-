#include <iostream>
using namespace std;

int main(){
    int a, r = 0;
    cin >> a;
    string c = "";
    while (a > 2){
        r = a % 2;
        c = char('0' + r) + c;
        a = a / 2;
    }
    if (a == 2){
        cout << "10" + c;
    }
    else{
        cout << "1" + c;
    }    
    return 0;
}