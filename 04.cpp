#include <iostream>
using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main() {
    int n;

    cout << "Ingrese cantidad de atletas: ";
    cin >> n;

    Atleta atletas[100];

    for (int i = 0; i < n; i++) {
        cout << "\nAtleta " << i + 1 << endl;

        cout << "Nombre: ";
        cin >> atletas[i].nombre;

        cout << "Pais: ";
        cin >> atletas[i].pais;

        cout << "Disciplina: ";
        cin >> atletas[i].disciplina;

        cout << "Numero de medallas: ";
        cin >> atletas[i].medallas;
    }

    string paisBuscar;
    cout << "\nIngrese el pais a buscar: ";
    cin >> paisBuscar;

    int mayor = -1;

    cout << "\nAtletas de ese pais:\n";

    for (int i = 0; i < n; i++) {
        if (atletas[i].pais == paisBuscar) {
            cout << "Nombre: " << atletas[i].nombre << endl;
            cout << "Disciplina: " << atletas[i].disciplina << endl;
            cout << "Medallas: " << atletas[i].medallas << endl;
            cout << endl;

            if (mayor == -1 || atletas[i].medallas > atletas[mayor].medallas) {
                mayor = i;
            }
        }
    }

    if (mayor != -1) {
        cout << "Atleta con mayor numero de medallas:\n";
        cout << "Nombre: " << atletas[mayor].nombre << endl;
        cout << "Medallas: " << atletas[mayor].medallas << endl;
    } else {
        cout << "No se encontraron atletas de ese pais." << endl;
    }

    return 0;
}