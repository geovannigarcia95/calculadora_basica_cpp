#include <iostream>

using namespace std;

int main() {
    // Declaraci�n de variables para almacenar el operador y los n�meros ingresados por el usuario.
    char operador;
    double numero1, numero2;

    // Solicitar al usuario que ingrese el primer n�mero.
    cout << "Ingrese el primer n�mero: ";
    cin >> numero1;

    // Solicitar al usuario que ingrese un operador (+, -, *, /).
    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> operador;

    // Solicitar al usuario que ingrese el segundo n�mero.
    cout << "Ingrese el segundo n�mero: ";
    cin >> numero2;

    double resultado;

    // Usar una estructura switch para realizar la operaci�n correspondiente.
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
            // Manejar la divisi�n por cero y mostrar un mensaje de error.
            cout << "Error: No se puede dividir por cero." << endl;
            return 1; // Salir del programa con un c�digo de error.
        }
        break;
    default:
        // Manejar un operador no v�lido y mostrar un mensaje de error.
        cout << "Operador no v�lido." << endl;
        return 1; // Salir del programa con un c�digo de error.
    }

    // Mostrar el resultado de la operaci�n al usuario.
    cout << "Resultado: " << resultado << endl;

    // Informaci�n del autor y la fecha.
    cout << "Realizado por Yoshio Geovanni Garc�a L�pez" << endl;
    cout << "Fecha: 23 de octubre de 2023" << endl;

    return 0;
}
