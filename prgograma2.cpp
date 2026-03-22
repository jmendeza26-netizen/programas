#include <iostream>
using namespace std;

int main() {
    int meses, mesMayor = 0, contador500 = 0;
    
    float ahorro, total = 0, promedio, mayor = 0;

    cout << "=== CAJERO DE AHORRO PROGRAMADO ===" << endl;

    cout << "Ingrese la cantidad de meses: ";
    cin >> meses;

    for (int i = 1; i <= meses; i++) {
        cout << "Ingrese el ahorro del mes " << i << ": Q";
        cin >> ahorro;

        total += ahorro;

        // Detectar mayor ahorro
        if (ahorro > mayor) {
            mayor = ahorro;
            mesMayor = i;
        }

        // Contar meses con ahorro >= 500
        if (ahorro >= 500) {
            contador500++;
        }
    }

    promedio = total / meses;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Total ahorrado: Q" << total << endl;
    cout << "Promedio mensual: Q" << promedio << endl;
    cout << "Mayor ahorro realizado en el mes: " << mesMayor << endl;
    cout << "Meses con ahorro de Q500 o mas: " << contador500 << endl;

    return 0;
}