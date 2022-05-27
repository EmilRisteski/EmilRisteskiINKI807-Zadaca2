#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>VectorASCII;
    string adresa;
    string sodrzina2;

    int denNaRagjanje = 20;
    int mesecNaRagjanje = 8;
    int godinaNaRagjanje = 2002;


    const string sodrzina = "INKI807.Emil.Risteski"; 

    cout << "Vnesete validna adresa na studentot: " << endl;
    cin >> adresa; 
    cout << "\n" << sodrzina << " " << adresa << endl; 

    sodrzina2 = sodrzina + adresa;


    
    for (int i = 0; i < sodrzina2.length(); i++) {
        VectorASCII.push_back((int)sodrzina2[i]);
    }
    
    cout << "Vektorot: " << endl;
    for (int i = 0; i < VectorASCII.size(); i++) {
        cout << VectorASCII[i] << " ";
    }

    cout << endl;
}