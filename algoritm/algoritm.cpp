#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int OLCU1 = 10;
    int A[OLCU1];

    srand(time(0));
    for (int i = 0; i < OLCU1; i++) {
        A[i] = rand() % 41 - 20;
        if (A[i] < 0) {
            A[i] = -A[i];
        }
    }

    cout << "1. Massiv: ";
    for (int i = 0; i < OLCU1; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    const int OLCU2 = 10;
    char B[OLCU2];

    for (int i = 0; i < OLCU2; i++) {
        B[i] = rand() % 26 + 'a';
    }

    cout << "2. Char Massiv: ";
    for (int i = 0; i < OLCU2; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < OLCU2; i++) {
        if (B[i] >= '0' && B[i] <= '9') {
            B[i] = B[i] - '0' + 'A';
        }
    }

    cout << "2. Rəqəmlər Böyük Hərflərlə: ";
    for (int i = 0; i < OLCU2; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    const int OLCU3 = 10;
    int C[OLCU3];

    for (int i = 0; i < OLCU3; i++) {
        C[i] = rand() % 101;
    }

    cout << "3. Massiv: ";
    for (int i = 0; i < OLCU3; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    float toplam = 0;
    for (int i = 0; i < OLCU3; i++) {
        toplam += C[i];
    }
    float ortalama = toplam / OLCU3;

    int enYaxin = C[0];
    for (int i = 1; i < OLCU3; i++) {
        float mesafeEnYaxin = (enYaxin >= ortalama) ? (enYaxin - ortalama) : (ortalama - enYaxin);
        float mesafeYeni = (C[i] >= ortalama) ? (C[i] - ortalama) : (ortalama - C[i]);

        if (mesafeYeni < mesafeEnYaxin) {
            enYaxin = C[i];
        }
    }

    cout << "3. Ədədi ortasına ən yaxın element: " << enYaxin << endl;

    return 0;
}
