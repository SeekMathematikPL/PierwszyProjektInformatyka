//nie gotowe
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int t [20][20];
int jabko3=10;
int jabko2=10;
void jabko(){
    jabko2 = rand() % 18 +1;
    jabko3 = rand() % 18 +1;
}
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
 srand(time(nullptr));

    jabko();
if (jabko2==9 && jabko3==9){
     srand(time(nullptr));
     jabko();
}
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
        else if (w==jabko2 && k==jabko3)
            cout << "@";

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
if (krzysiugdziejestes1==jabko2 && krzysiugdziejestes2==jabko3 || krzysiugdziejestes1==jabko3 && krzysiugdziejestes2==jabko2){
    licznikpunktow++;
    srand(time(nullptr));
    jabko();
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
         else if (w==jabko2 && k==jabko3)
            cout << "@";


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
if (krzysiugdziejestes1==jabko2 && krzysiugdziejestes2==jabko3 || krzysiugdziejestes1==jabko3 && krzysiugdziejestes2==jabko2){
    licznikpunktow++;
    srand(time(nullptr));
    jabko();
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
         else if (w==jabko2 && k==jabko3)
            cout << "@";


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
if (krzysiugdziejestes1==jabko2 && krzysiugdziejestes2==jabko3 || krzysiugdziejestes1==jabko3 && krzysiugdziejestes2==jabko2){
    licznikpunktow++;
    srand(time(nullptr));
    jabko();
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
         else if (w==jabko2 && k==jabko3)
            cout << "@";


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
if (krzysiugdziejestes1==jabko2 && krzysiugdziejestes2==jabko3 || krzysiugdziejestes1==jabko3 && krzysiugdziejestes2==jabko2){
    licznikpunktow++;
    srand(time(nullptr));
    jabko();
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
         else if (w==jabko2 && k==jabko3)
            cout << "@";


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


 //notatka dla mnie:
 //co musi tu jeszcze powstac:
 //1.plansza-zrobione
 //2.jablka-zrobione w polowie
 //3.waz-sama glowa
 //4.cialo weza
 //5.petla dzieki ktorej by gra dzialala-prawie jest, po czêœci
 //6.to ze jak waz wjedzie w sciane lub zzajmie cala plansze to gra sie konczy-zrobione w polowie
 //P.S moze trzeba bylo wybrac cos latwiejszego...?
}

