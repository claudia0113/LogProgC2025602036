#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

int main() {
    double peso;
    double altura;
    double imc;

    cout << "Ingrese su peso en kg" << endl;
    cin >> peso;
    cout << "Ingrese su altura en metros" << endl;
    cin >> altura;
    imc = peso / altura * altura;
    if (imc <= 18.4) {
        cout << "Bajo peso" << endl;
    } else {
        if (imc <= 24.9) {
            cout << "Normal" << endl;
        } else {
            if (imc <= 29.9) {
                cout << "Sobrepeso" << endl;
            } else {
                if (imc <= 34.9) {
                    cout << "Obesidad clase 1" << endl;
                } else {
                    if (imc <= 39.9) {
                        cout << "Obesidad clase 2" << endl;
                    } else {
                        if (imc <= 40.0) {
                            cout << "Obesidad clase 3" << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

