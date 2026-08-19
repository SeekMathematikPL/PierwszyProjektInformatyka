#include <iostream>
using namespace std;
char s[3][3] = {'1','2','3','4','5','6','7','8','9'};
int main()
{
        cout << "Autor: Agnieszka Wlodarczyk 1a nr23" << endl;
    cout << "Gra: kolko i krzyzk" << endl;
  int ja=0;
  int on=0;
  int wyb=0;
  int zad=0;
  int kol=0;
  int lin=0;
   for(int i=0;i<9 && on==0;i++)
   {
       cout << endl;
       cout <<s[0][0]<<" |"<<s[0][1]<<" |"<<s[0][2] <<endl;
       cout <<"--|--|--" << endl;
       cout <<s[1][0]<<" |"<<s[1][1]<<" |"<<s[1][2] <<endl;
       cout <<"--|--|--" << endl;
       cout <<s[2][0]<<" |"<<s[2][1]<<" |"<<s[2][2] <<endl;
       ja=i%2 +1;
       do
       {
           if(ja==1)
           {
               cout << endl;
               cout << "Kolej osoby:" << endl;
           }
           else if (ja==2)
           {
               cout << endl;
               cout <<"Kolej osoby:" << endl;
           }
           else
           {
               cout <<"cos nie wyszlo" << endl;
           }

           cout << ja << ((ja == 1) ? 'X' : 'O') << endl;
           cin>>wyb;
           zad=--wyb/3;
           kol=wyb%3;
       }
       while(wyb<0 || wyb>9 || s[zad][kol]>'9');
       {
           s[zad][kol]= (ja == 1)? 'X': 'O';
       }
       if((s[0][0]==s[1][1]&&s[0][0]==s[2][2])||
        (s[0][2]==s[1][1]&&s[0][2]==s[2][0])  )
            on = ja;
       else
        for(lin=0;lin<=2;lin++)
        if((s[lin][0]==s[lin][1] && s[lin][0]==s[lin][2])
   ||
   (s[0][lin]==s[1][lin] && s[0][lin]==s[2][lin]))
         on = ja;
   }
   cout << endl;
          cout <<s[0][0]<<" |"<<s[0][1]<<" |"<<s[0][2] <<endl;
       cout <<"--|--|--" << endl;
       cout <<s[1][0]<<" |"<<s[1][1]<<" |"<<s[1][2] <<endl;
       cout <<"--|--|--" << endl;
       cout <<s[2][0]<<" |"<<s[2][1]<<" |"<<s[2][2] <<endl;
   if(on==0)
    cout << "Remis" << endl;
   else
    cout<< "Osoba " << on << " wygrala" << endl;

}
