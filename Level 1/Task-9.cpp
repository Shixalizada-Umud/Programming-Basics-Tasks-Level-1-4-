#include <iostream>
using namespace std; 

int main() {
int saniyə;
int saat;
cin >> saniyə;
saat=saniyə/3600;
cout <<saniyə/3600<<"saat" <<""<<(saniyə-saat*3600)/60<<"dəqiqə=";
return 0;
}