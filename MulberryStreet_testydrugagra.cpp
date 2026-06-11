#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int t[6][6]; //notatka dla mnie; od zera?
int main ()
{
     cout << "Autor: Agnieszka Wlodarczyk 1a nr23" << endl;
    cout << "Gra: Kolko i krzyzyk" << endl;
    cout << "Jestes kolkiem. Aby wybrac ruch napisz cyferke danego pola." << endl;
    int pole1=0;
    int pole2=0;
    int pole3=0;
    int pole4=0;
    int pole5=0;
    int pole6=0;
    int pole7=0;
    int pole8=0;
    int pole9=0;
    int wygrana=0;
    int przegrana=0;
    int tocousernapisze;
    //skoro ten waz juz byl to go troche przerobie
     for(int w=0;w<6;w++){
        for(int k=0;k<6;k++){
                if (w==0 && k==1 || w==0 && k==3) {
                        cout << "|" ;
                }

         else if (w==2 && k==1 || w==2 && k==3){
            cout << "|";
         }
         else if (w==5 && k==1 || w==5 && k==3){
            cout << "|";}
         else if (w==1 || w==3){
            cout << "-";}
         else
            cout << " ";
    }
}
}
