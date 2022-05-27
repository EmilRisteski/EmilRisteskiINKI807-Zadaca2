#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    vector<int>VectorASCII;
    string adresa;
    string sodrzina2;

    int denNaRagjanje = 20;
    int mesecNaRagjanje = 8;
    int godinaNaRagjanje = 2002;


    const string sodrzina = "INKI807.Emil.Risteski"; // 1

    cout << "Vnesete validna adresa na studentot: " << endl;
    cin >> adresa; // 2
    cout << "\n" << sodrzina << " " << adresa << endl; // 3

    sodrzina2 = sodrzina + adresa;


    // 4
    for (int i = 0; i < sodrzina2.length(); i++) {
        VectorASCII.push_back((int)sodrzina2[i]);
    }
    // pecatenje na konzola
    cout << "Vektorot: " << endl;
    for (int i = 0; i < VectorASCII.size(); i++) {
        cout << VectorASCII[i] << " ";
    }

    cout << endl;

    // 5
     // deklariranje iterator za vektorot
    vector<int>::iterator ptr;

    // sortiranje vektor (najmal do najgolem)
    sort(VectorASCII.begin(), VectorASCII.end());

    // pecatenje sortiran vektor (go koristime iteratorot)
    cout << "Sortiran vektor: ";
    for (ptr = VectorASCII.begin(); ptr < VectorASCII.end(); ptr++) {
        cout << *ptr << " ";
    }

    // 6 dodavanje na cifrite na datum na ragjanje  
    VectorASCII.push_back(denNaRagjanje);
    VectorASCII.push_back(mesecNaRagjanje);
    VectorASCII.push_back(godinaNaRagjanje);

    cout << "\nSortiran vektor i dodaden datumot na ragjanje : " << endl;
    for (int i = 0; i < VectorASCII.size(); i++) {
        cout << VectorASCII[i] << " ";
        
        ofstream File;                     
        File.open("INKI807.Proekt3.txt", fstream::app);
        File << VectorASCII[i] << "\t";            // kreiranje na dadoteka kade sto se smestuva vektorot
    }

    

    return 0;
}