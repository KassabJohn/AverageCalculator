#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <int> chiffres;

    while(1){
        int i;
        char c[10];
        cout << "Entrer un chiffre :" << endl;

        cin.getline(c,10);

        string str(c);

        if (str.size()==0){
            break;
        }

        try {
            i = stoi(c);
            cout << "Je rajoute au tableau" << endl;
            chiffres.push_back(i);
        }  catch (invalid_argument e) {

            cout << "Veuillez saisir un chiffre" << endl;
        }

    }

    cout << "Taille du tableau :" << chiffres.size() << endl;
    int total = 0 ;

    for ( int x : chiffres) {
        total += x;
    }

    float moyenne = float(total) / float(chiffres.size());
    cout << "Moyenne : " << moyenne << endl;
}
