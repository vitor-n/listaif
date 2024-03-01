#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//returns the IMC given the mass and height of a person
float getIMC(float fMass, float fHeight) {

    return fMass / (fHeight * fHeight);
}

int main() {

    float fMass, fHeight, fIMC;

    cout << "Digite a massa (kg): ";
    cin >> fMass;
    cout << "Digite a altura (m): ";
    cin >> fHeight;

    fIMC = getIMC(fMass, fHeight);

    if (fIMC < 17) {
        cout << "Muito abaixo do peso" << endl;
    } else if (fIMC < 18.5) {
        cout << "Abaixo do peso" << endl;
    } else if (fIMC < 25) {
        cout << "Peso normal" << endl;
    } else if (fIMC < 30) {
        cout << "Acima do peso" << endl;
    } else if (fIMC < 35) {
        cout << "Obesidade" << endl;
    } else if (fIMC < 40) {
        cout << "Obesidade severa" << endl;
    } else {
        cout << "Obesidade mórbida" << endl;
    }

    return 0;
}