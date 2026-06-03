#include <iostream>
using namespace std;
int t [20][20];
int main ()
{
    cout << "Autor: Agnieszka Wlodarczyk 1a nr23" << endl;
    cout << "Gra: Snake" << endl;
    cout << "Sposob uzycia: klawisze w,a,s,d aby sie poruszac." << endl;
    int licznikpunktow=0;
    int przegranalubwygrana=0;
    long long krzysiugdziejestes1=9;
    long long krzysiugdziejestes2=9;
    char ruch;
    for(int w=0;w<20;w++){
        for(int k=0;k<20;k++){
                if (w==0 || w==19) {
                        cout << "=";
                }
         else if (k==0 || k==19){
            cout << "|";
         }
         else if (w==krzysiugdziejestes1 && k==krzysiugdziejestes2)
            cout << "+";

        else
            cout << " ";
        }
        cout << endl;
    }
    do{
    cin >> ruch;
    if (ruch=='W' || ruch=='w'){
            krzysiugdziejestes1--;

if (krzysiugdziejestes1 <= 0 || krzysiugdziejestes1 >= 19 ||
    krzysiugdziejestes2 <= 0 || krzysiugdziejestes2 >= 19) {
    przegranalubwygrana = 2;
    break;
}

                for(int w=0;w<20;w++){
        for(int k=0;k<20;k++){
                if (w==0 || w==19) {
                        cout << "=";
                }
         else if (k==0 || k==19){
            cout << "|";
         }

         else if (w==krzysiugdziejestes1 && k==krzysiugdziejestes2){
            cout << "+";
         }

        else
            cout << " ";
        }
        cout << endl;
    }


    }
     else if (ruch=='S' || ruch=='s'){
            krzysiugdziejestes1++;

if (krzysiugdziejestes1 <= 0 || krzysiugdziejestes1 >= 19 ||
    krzysiugdziejestes2 <= 0 || krzysiugdziejestes2 >= 19) {
    przegranalubwygrana = 2;
    break;
}

                for(int w=0;w<20;w++){
        for(int k=0;k<20;k++){
                if (w==0 || w==19) {
                        cout << "=";
                }
         else if (k==0 || k==19){
            cout << "|";
         }
         else if (w==krzysiugdziejestes1 && k==krzysiugdziejestes2){
            cout << "+";

         }

        else
            cout << " ";
        }
        cout << endl;
    }

    }
    else if (ruch=='A'||ruch=='a'){
            krzysiugdziejestes2--;

if (krzysiugdziejestes1 <= 0 || krzysiugdziejestes1 >= 19 ||
    krzysiugdziejestes2 <= 0 || krzysiugdziejestes2 >= 19) {
    przegranalubwygrana = 2;
    break;
}

                     for(int w=0;w<20;w++){
        for(int k=0;k<20;k++){
                if (w==0 || w==19) {
                        cout << "=";
                }
         else if (k==0 || k==19){
            cout << "|";
         }
         else if (w==krzysiugdziejestes1 && k==krzysiugdziejestes2){
            cout << "+";

         }

        else
            cout << " ";
        }
        cout << endl;
    }
    }
        else if (ruch=='D'||ruch=='d'){
            krzysiugdziejestes2++;

if (krzysiugdziejestes1 <= 0 || krzysiugdziejestes1 >= 19 ||
    krzysiugdziejestes2 <= 0 || krzysiugdziejestes2 >= 19) {
    przegranalubwygrana = 2;
    break;
}

                     for(int w=0;w<20;w++){
        for(int k=0;k<20;k++){
                if (w==0 || w==19) {
                        cout << "=";
                }
         else if (k==0 || k==19){
            cout << "|";
         }
         else if (w==krzysiugdziejestes1 && k==krzysiugdziejestes2){
            cout << "+";

         }

        else
            cout << " ";
        }
        cout << endl;
    }
    }
    }

    while (przegranalubwygrana==0);
    if (przegranalubwygrana==2){
        cout << "Game over: You lost" << endl;
    }





    //P.S mamy czas do konca roku szkolnego ale oceny beda we wrzesniu wiec w sumie to mam cale wakacje jeszczee
    //P.S musisz znalezc w jaki sposob losowac liczby od 0 do 19 - potrzbne do jablek

 //notatka dla mnie:
 //co musi tu jeszcze powstac:
 //1.plansza-zrobione
 //2.jablka
 //3.waz-sama glowa
 //4.cialo weza
 //5.petla dzieki ktorej by gra dzialala-prawie jest, po czêœci
 //6.to ze jak waz wjedzie w sciane lub zzajmie cala plansze to gra sie konczy-zrobione
 //P.S moze trzeba bylo wybrac cos latwiejszego...?
}

