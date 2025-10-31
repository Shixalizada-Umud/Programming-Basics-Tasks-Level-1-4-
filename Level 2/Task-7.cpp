#include <iostream>
using namespace std; 

int main() {
    int a,b;
    char emel;
    cout << "emeli seç (+,-,*,/)" <<endl;
    cin >> emel;
    cout << "reqemleri daxil et" <<endl;
    cin >> a >> b ;
    switch(emel){
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '/':
            if(!b==0)
                cout << a/b << endl;
            else
                cout << "0-a bölmə yoxdur" << endl;  
            break;
        case '*':
            cout << a*b << endl;
            break;
        default :
            cout << "bele bir emel yoxdur" << endl;    
}
    return 0;
}