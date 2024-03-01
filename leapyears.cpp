#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//checks if a given year is a leap year
bool isLeapYear(int iYear) {

    return (iYear % 4 == 0) && (iYear % 100 != 0 || iYear % 400 == 0);
}

int main() {  

    int iYear;

    cout << "Digite o ano: ";
    cin >> iYear;

    if (isLeapYear(iYear)) {
        cout << "Ano bissexto" << endl;
    } else {
        cout << "Ano não bissexto" << endl;
    }

    return 0;
}