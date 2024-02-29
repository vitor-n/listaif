#include <iostream>

using std::cout;
using std::endl;

//returns the IMC given the mass and height of a person
float getIMC(float fMass, float fHeight) {

    return fMass / (fHeight * fHeight);
}

int main() {

    float fMass, fHeight, fIMC;

    fMass = 60;
    fHeight = 1.70;

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