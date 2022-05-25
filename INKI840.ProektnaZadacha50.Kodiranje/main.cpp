#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int najgolemBrojOdIndeks(int indeks) {
    int najgolemaCifra = 0;
    int x;
    for (int i = 0; i < 3; i++) {
        int x = indeks % 10;
        if (x > najgolemaCifra) {
            najgolemaCifra = x;
        }
        indeks = indeks / 10;
    }
    return najgolemaCifra;
}

struct Pesna {
    string brojNaIndeksIme = "INKI840Magdalena";
    string izveduvac = "Bon Jovi";
    string imeNaPesna = "Bed of Roses";
    string tekstNaPesna = "Sitting here wasted and wounded at this old piano";
};

int main()
{
    Pesna pesna;
    ofstream file;
    vector <char> v;
    int brojNaIndeks = 840;
    int brojZaKodiranje = najgolemBrojOdIndeks(brojNaIndeks);
    string sodrzinaNaStruktura;
    sodrzinaNaStruktura = pesna.brojNaIndeksIme + " " + pesna.izveduvac + " " + pesna.imeNaPesna + " " + pesna.tekstNaPesna;
    cout << "Sodrzinata na strukturata e:\n" << sodrzinaNaStruktura << endl;
    cout << endl;
    cout << "Brojot za kodiranje e: " << brojZaKodiranje << endl;
    cout << endl;
    for (int i = 0; i < sodrzinaNaStruktura.length(); i++) {
        v.push_back(sodrzinaNaStruktura[i] + brojZaKodiranje);
    }
    cout << "Kodiranata sodrzina na vektorot pred sortiranje e: "<<endl;
    for (char i: v) {
        cout<<i;
    }
    cout<<endl;
    sort(v.begin(), v.end());
    cout<<endl;
    cout << "Kodiranata sodrzina na vektorot posle sortiranje e: "<<endl;
    for (char i: v) {
        cout<<i;
    }
    cout<<endl;
    file.open("INKI840.Proekt3.txt");
    for (char i: v) {
        file << i;
    }
    file.close();

    return 0;
}
