#include <iostream>
using namespace std;

int main() {
    double liczba1, liczba2;
    char operacja;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj operator (+, -, *, /): ";
    cin >> operacja;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    switch (operacja) {
    case '+':
        cout << "Wynik: " << (liczba1 + liczba2) << endl;
        break;
    case '-':
        cout << "Wynik: " << (liczba1 - liczba2) << endl;
        break;
    case '*':
        cout << "Wynik: " << (liczba1 * liczba2) << endl;
        break;
    case '/':
        if (liczba2 == 0) {
            cout << "Blad: dzielenie przez zero!" << endl;
        }
        else {
            cout << "Wynik: " << (liczba1 / liczba2) << endl;
        }
        break;
    default:
        cout << "Niepoprawny operator." << endl;
        break;
    }

    return 0;
}
