#include <iostream>
using namespace std; 

int main() {
    int a;
    cin >> a; 

    if (a>0) {
        cout << "ədəd müsbətdir";
    }else if(a<0){
        cout << "ədəd mənfidir" ;
    }else {
        cout << "ədəd sıfırdır";
    }
    return 0;
}