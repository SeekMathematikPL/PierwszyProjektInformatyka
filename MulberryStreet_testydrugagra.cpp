//byl pomysl ale sie zmyl niestety
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char t[3][3];
int main ()
{
    int tocousernapisze=0;
    int los=0;
    int los2=0;
    int koniec=0;
 cout << "Autor: Agnieszka Wlodarczyk 1a nr23" << endl;
 cout << "Kolko i krzyzyk" << endl;
 cout << "Jestes x. Aby wybrac pole wpisz dany numer pola." << endl;
 t[0][0] = '1';
 t[0][1] = '2';
 t[0][2]= '3';
 t[1][0] ='4';
 t[1][1] = '5';
 t[1][2]='6';
 t[2][0]='7';
 t[2][1]='8';
 t[2][2]='9';
 cout << t[0][0] << " | " << t[0][1] << " | " << t[0][2] << endl;
 cout << "----------" << endl;
cout << t[1][0] << " | " << t[1][1] << " | " << t[1][2] << endl;
cout << "----------" << endl;
cout << t[2][0] << " | " << t[2][1] << " | " << t[2][2] << endl;
cout << endl;
do{
cin >> tocousernapisze;
if (tocousernapisze==1){
        t[0][0]='X';
 cout << t[0][0] << " | " << t[0][1] << " | " << t[0][2] << endl;
 cout << "----------" << endl;
cout << t[1][0] << " | " << t[1][1] << " | " << t[1][2] << endl;
cout << "----------" << endl;
cout << t[2][0] << " | " << t[2][1] << " | " << t[2][2] << endl;
cout << endl;
srand(time(nullptr));
los = 1 + rand() % 9;
los2 = 1+ rand() %9;
if (los==0 && los2==0){
  srand(time(nullptr));
los = 1 + rand() % 9;
los2 = 1+ rand() %9;
}
for(int w=0;w<3;w++){
        for(int k=0;k<3;k++){
            if (w==los && k==los2 )
                t[w][k]='O';
                else if (k==los && w==los2)
                    t[k][w]='O';
        }

}
 cout << t[0][0] << " | " << t[0][1] << " | " << t[0][2] << endl;
 cout << "----------" << endl;
cout << t[1][0] << " | " << t[1][1] << " | " << t[1][2] << endl;
cout << "----------" << endl;
cout << t[2][0] << " | " << t[2][1] << " | " << t[2][2] << endl;
cout << endl;



}






}
while (koniec==0);

}
