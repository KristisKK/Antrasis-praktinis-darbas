#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
//1.Balses
    bool Balsiu_palyginimas(){

        string balses [] = {"a", "ą", "e", "ę", "ė", "i", "į", "y", "o", "ū", "ų", "u" };

        string pravedimas;

        cout << "Iveskite raide"<< endl;

        cin >> pravedimas;

        for (int i = 0; i < sizeof(balses) / sizeof(balses[0]); i++) {
            if (pravedimas == balses[i]) {
                cout <<"balses : "<< balses[i] << endl;
                return true;
            }    }return false;
    }
//2. DBD
int rastiDBD(int skaicius1, int skaicius2) {
    while (skaicius2 != 0) {
        int likutis = skaicius1 % skaicius2;
        skaicius1 = skaicius2;
        skaicius2 = likutis;
    }
    return skaicius1;
}

// 3. Zaidimas nuo 1 iki 100 atspet
void zaidimas() {
    srand(time(0));
    int skaicius = rand() % 100 + 1;
    int spejimas;

    cout << "Atspekite skaiciu nuo 1 iki 100: ";
    while (true) {
        cin >> spejimas;

        if (spejimas < skaicius) {
            cout << "Skaicius yra didesnis. Bandykite dar karta: ";
        } else if (spejimas > skaicius) {
            cout << "Skaicius yra mazesnis. Bandykite dar karta: ";
        } else {
            cout << "Teisingai! Skaicius buvo " << skaicius << endl;
            break;
        }
    }
}

// 4. FizzBuzz funkcija
void fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main() {
    int pasirinkimas;
         {
            cout << "Pasirinkite veiksma:" << endl;
            cout << "1. Patikrinti ar ivesta raide yra balse" << endl;
            cout << "2. Rasti didziausia bendra dalikla tarp dvieju skaiciu" << endl;
            cout << "3. Mini zaidimas (atspekite atsitiktini skaiciu nuo 1 iki 100)" << endl;
            cout << "4. FizzBuzz nuo 1 iki n" << endl;
            cin >> pasirinkimas;
        }
    if (pasirinkimas == 1) {
        // Tikriname, ar raidė yra balsė
        bool rezultatas = Balsiu_palyginimas();
        if (rezultatas) {
            cout << "ivesta raide yra balse." << endl;
        } else {
            cout << "ivesta raide nėra balse." << endl;
        }
    } else if (pasirinkimas == 2) {
        // Randame didžiausią bendrą daliklį
        int sk1, sk2;
        cout << "iveskite pirmaji skaiciu: ";
        cin >> sk1;
        cout << "iveskite antraji skaiciu: ";
        cin >> sk2;
        int dbd = rastiDBD(sk1, sk2);
        cout << "Didziausias bendras daliklis: " << dbd << endl;
    } else if (pasirinkimas == 3) {
        // Žaidimas - atspėk atsitiktinį skaičių
        zaidimas();
    } else if (pasirinkimas == 4) {
        // FizzBuzz funkcija
        int n;
        cout << "Iveskite skaiciu n: ";
        cin >> n;
        fizzbuzz(n);
    } else {
        cout << "Neteisingas pasirinkimas!" << endl;
    }

    return 0;
}


