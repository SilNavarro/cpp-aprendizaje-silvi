#include <iostream>   // Librería para entrada y salida (cin y cout)
#include <string>     // Librería para usar texto (string)
using namespace std;  // Evita escribir std:: antes de cada comando

int main() {
    string nombre; // Variable que guarda texto, en este caso el nombre

    cout << "Hola, ¿Cómo te llamas?" << endl; // Mostramos una pregunta
    cin >> nombre; // Esperamos que el usuario escriba su nombre

    cout << "Hola " << nombre << ", mucho gusto." << endl;

    return 0; // Fin del programa (0 = sin errores)
}
