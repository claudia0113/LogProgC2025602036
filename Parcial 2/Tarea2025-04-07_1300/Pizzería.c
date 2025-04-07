#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

int main() {
    string tipo;
    string ingrediente;
    string pizza;

    cout << "¿Quieres pizza vegetariana? (si/no):" << endl;
    cin >> tipo;
    if (tipo == "si/no") {
        cout << "Ingredientes: Pimineto o tofu" << endl;
        cin >> Elige;
        cin >> ingrediente;
        pizza = "Pizza vegetariana con mozzarella, tomate y " + ingrediente;
    } else {
        cout << "Ingredientes: Peperoni, jamón o salmón" << endl;
        cin >> Elige;
        cin >> ingrediente;
        pizza = "Pizza no vegetariana con mozarella, tomate y" + ingrediente;
    }
    cout << "Pizza" << endl;
    return 0;
}
