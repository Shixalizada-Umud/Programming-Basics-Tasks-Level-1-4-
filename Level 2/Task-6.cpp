#include <iostream>
using namespace std; 

int main() {
    int ay;
    cout << "ayın nömrəsini daxil et (1-12 arası)" <<endl;
    cin >> ay;
    switch(ay){
        case 1:
        case 2:
        case 12:
            cout << "qış fəslidir" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "yaz fəslidir" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "yay fəslidir" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "payız fəslidir" << endl;
            break;
        default :
            cout << "bele nömrəyə aid ay yoxdur" << endl;    
}
    return 0;
}