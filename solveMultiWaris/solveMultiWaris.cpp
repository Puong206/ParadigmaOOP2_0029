#include <iostream>
using namespace std;

class orang {     //base
public:
    int umur;

    orang(int pUmur) :
        umur(pUmur)
    {
        cout << "orang dibuat dengan umur" << umur << "\n" << endl;
    }
};

class pekerja : public orang {    //pewarisan 1a
public:
    pekerja(int pUmur) :
        orang(pUmur)
    {
        cout << "pekerja dibuat\n" << endl;
    }

};

class pelajar : public orang {   //pewarisan 1b
public:
    pelajar(int pUmur) :
        orang(pUmur)
    {
        cout << "Pelajar dibuat\n" << endl;
    }
};

class budi : public pekerja, public pelajar { //pewarisan 2
public:
    budi(int pUmur) :
        pekerja(pUmur),
        pelajar(pUmur)
    {
        cout << "Budi dibuat" << endl;
    }
};

int main() {
    budi a(12);

    return 0;
}