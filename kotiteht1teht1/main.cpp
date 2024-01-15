#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    srand(time(NULL));
    int satluku = rand() % 20 + 1;
    int arvaus = 0;

    do{
        cout << "Arvaa numero 1-20" << endl;
        cin >> arvaus;

        if(arvaus > satluku){
            cout << "Luku on pienempi" << endl;

        }else if(arvaus < satluku){
            cout << "Luku on suurempi" << endl;
        } else{
            cout << "Oikea vastaus! Peli loppui!" << endl;
        }
    }
    while(satluku != arvaus);

    return 0;
}

