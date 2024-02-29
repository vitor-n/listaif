#include <iostream>

using std::cout;
using std::endl;

int main()
{

    int iYear;

    iYear = 2024;

    if ((iYear % 4 == 0) && (iYear % 100 != 0 || iYear % 400 == 0)) {
        cout << "Ano bissexto" << endl;
    } else {
        cout << "Ano não bissexto" << endl;
    }

    return 0;
}