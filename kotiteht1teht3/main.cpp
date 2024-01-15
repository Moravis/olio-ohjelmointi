#include <iostream>
#include <ctime>
#include <cstdlib>

int maxnum = 0;
int arvaukset = 0;

using namespace std;
int game(int);

int main()
{
    cout << "Anna maksimi arvottava numero" << endl;
    cin >> maxnum;
    cout << endl << game(maxnum) << "kpl arvauksia" << endl;


    return 0;
}

int game(int maxnum){
    srand(time(NULL));
    int satluku = rand() % maxnum + 1;
    int arvaus = 0;
    int arvaukset = 0;
    do{
        cout << "Arvaa numero 1-"<< maxnum << endl;
        cin >> arvaus;

        if(arvaus > satluku){
            cout << "Luku on pienempi" << endl;
            arvaukset++;

        }else if(arvaus < satluku){
            cout << "Luku on suurempi" << endl;
            arvaukset++;
        } else{
            cout << "Oikea vastaus! Peli loppui!" << endl;
            arvaukset++;
        }
    }
    while(satluku != arvaus);

    return arvaukset;
}
