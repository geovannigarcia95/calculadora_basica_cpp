#include <iostream>

using namespace std;

int main() {
    // Declaración de variables para almacenar el operador y los números ingresados por el usuario.
    char operador;
    double numero1, numero2;

    // Solicitar al usuario que ingrese el primer número.
    cout << "Ingrese el primer número: ";
    cin >> numero1;

    // Solicitar al usuario que ingrese un operador (+, -, *, /).
    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> operador;

    // Solicitar al usuario que ingrese el segundo número.
    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    double resultado;

    // Usar una estructura switch para realizar la operación correspondiente.
    switch (operador) {
    case '+':
        resultado = numero1 + numero2;
        break;
    case '-':
        resultado = numero1 - numero2;
        break;
    case '*':
        resultado = numero1 * numero2;
        break;
    case '/':
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        }
        else {
            // Manejar la división por cero y mostrar un mensaje de error.
            cout << "Error: No se puede dividir por cero." << endl;
            return 1; // Salir del programa con un código de error.
        }
        break;
    default:
        // Manejar un operador no válido y mostrar un mensaje de error.
        cout << "Operador no válido." << endl;
        return 1; // Salir del programa con un código de error.
    }

    // Mostrar el resultado de la operación al usuario.
    cout << "Resultado: " << resultado << endl;

    // Información del autor y la fecha.
    cout << "Realizado por Yoshio Geovanni García López" << endl;
    cout << "Fecha: 23 de octubre de 2023" << endl;

    return 0;
}
