#include <iostream>
using namespace std;
int t [10][10];
int main (){
    cout << "Autor: Agnieszka Wlodarczyk 1a nr23" << endl;
    cout << "Gra: Snake" << endl;
    cout << "Sposob uzycia: klawisze w,a,s,d aby sie poruszac." << endl;
    int licznikpunktow=0;
    int zero=0;
    for (int i=0;i<10;i++){
        for (int g=0;g<10;g++){
            if (t[i][g]==t[zero][g])
                cout << "=";
        }
    }
    //P.S mamy czas do konca roku szkolnego ale oceny beda we wrzesniu wiec w sumie to mam cale wakacje jeszczee
    //notka dla mnie: pierwszy kawalek planszy zbyt dlugi: znajdz sposob w domu aby bylo krocej (gora planszy)

 //notatka dla mnie:
 //co musi tu jeszcze powstac:
 //1.plansza-zaczelam prace nad tym
 //2.jablka
 //3.waz
 //4.cialo weza
 //5.petla dzieki ktorej by gra dzialala
 //6.to ze jak waz wjedzie w sciane lub zzajmie cala plansze to gra sie konczy
 //P.S moze trzeba bylo wybrac cos latwiejszego...?
}
