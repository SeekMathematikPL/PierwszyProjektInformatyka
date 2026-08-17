#include <iostream>
#include <random>
using namespace std;
int wylosowana=0;
int stop=0;
int yep;
char s[3][3] = {'1','2','3','4','5','6','7','8','9'};
char ty = 'X';

void los()
 {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 9);

    wylosowana = dis(gen);
 }
void ua(){
 if (wylosowana==1){
    if (s[0][0]!=1){

        los();

    }
 }
 else if (wylosowana==2){
    if (s[0][1]!=2){
        los();

    }
 }
  else if (wylosowana==3){
    if (s[0][2]!=3){
        los();

    }
 }
  else if (wylosowana==4){
    if (s[1][0]!=4){
        los();

    }
 }
  else if (wylosowana==5){
    if (s[1][1]!=5){
       los();

    }
 }
  else if (wylosowana==6){
    if (s[1][2]!=6){
       los();

    }
 }
  else if (wylosowana==7){
    if (s[2][0]!=7){
        los();

    }
 }
  else if (wylosowana==8){
    if (s[2][1]!=8){
       los();

    }
 }
  else if (wylosowana==9){
    if (s[2][2]!=2){
        los();

    }
 }




}

void jeden()
{
 for (int i=0;i<3;i++)
 {
     for(int j=0;j<3;j++)
     {
         cout << s[i][j] << " " ;
     }
     cout << endl;
 }
}
void dwa()
{
    if (yep==1){
        s[0][0]= ty;
    }
    else if (yep==2){
        s[0][1]= ty;
    }
        else if (yep==3){
        s[0][2]= ty;
    }
        else if (yep==4){
        s[1][0]= ty;
    }
        else if (yep==5){
        s[1][1]= ty;
    }
            else if (yep==6){
        s[1][2]= ty;
    }
            else if (yep==7){
        s[2][0]= ty;
    }
            else if (yep==8){
        s[2][1]= ty;
    }
            else if (yep==9){
        s[2][2]= ty;
    }
}
void trzy()
{
ua();
los();
    if (wylosowana==1){
        s[0][0]= ty;
    }
    else if (wylosowana==2){
        s[0][1]= ty;
    }
        else if (wylosowana==3){
        s[0][2]= ty;
    }
        else if (wylosowana==4){
        s[1][0]= ty;
    }
        else if (wylosowana==5){
        s[1][1]= ty;
    }
            else if (wylosowana==6){
        s[1][2]= ty;
    }
            else if (wylosowana==7){
        s[2][0]= ty;
    }
            else if (wylosowana==8){
        s[2][1]= ty;
    }
            else if (wylosowana==9){
        s[2][2]= ty;
    }
}
void krzyz()
{
 //pierwszy zad
    int licz=0;
 for (int i=0;i<3;i++){
    if (s[0][i]=='X'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You won!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//drugi zad
 for (int i=0;i<3;i++){
    if (s[1][i]=='X'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You won!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//trzeci zad
 for (int i=0;i<3;i++){
    if (s[2][i]=='X'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You won!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//pierwsza kolumna
 for (int i=0;i<3;i++){
    if (s[i][0]=='X'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You won!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
    //druga kolumna
     for (int i=0;i<3;i++){
    if (s[i][1]=='X'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You won!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//trzecia kolumna
     for (int i=0;i<3;i++){
    if (s[i][2]=='X'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You won!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;

}

void kolko()
{
  //pierwszy zad
    int licz=0;
 for (int i=0;i<3;i++){
    if (s[0][i]=='O'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You lost!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//drugi zad
 for (int i=0;i<3;i++){
    if (s[1][i]=='O'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You lost!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//trzeci zad
 for (int i=0;i<3;i++){
    if (s[2][i]=='O'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You lost!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//pierwsza kolumna
 for (int i=0;i<3;i++){
    if (s[i][0]=='O'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You lost!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
    //druga kolumna
     for (int i=0;i<3;i++){
    if (s[i][1]=='O'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You lost!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
//trzecia kolumna
     for (int i=0;i<3;i++){
    if (s[i][2]=='O'){
       licz++;
    }
 }
 if (licz==3){
    cout << "You lost!" << endl;
    stop++;
    return ;
 }
 else
    licz==0;
}
void wybor(){
    cout << "Wybierz pole" << endl;
    cin>> yep;
}
void sprawdzkrzyz(){
 if (yep==1){
    if (s[0][0]!=1){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
 else if (yep==2){
    if (s[0][1]!=2){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
  else if (yep==3){
    if (s[0][2]!=3){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
  else if (yep==4){
    if (s[1][0]!=4){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
  else if (yep==5){
    if (s[1][1]!=5){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
  else if (yep==6){
    if (s[1][2]!=6){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
  else if (yep==7){
    if (s[2][0]!=7){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
  else if (yep==8){
    if (s[2][1]!=8){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }
  else if (yep==9){
    if (s[2][2]!=2){
        cout << "wybierz inne pole" << endl;
        wybor();

    }
 }




}

int main()
{
    cout << "Autor: Agnieszka Wlodarczyk 1a nr23" << endl;
    cout << "Gra: kolko i krzyzk" << endl;
    jeden();
    while(stop==0){
        wybor();
        sprawdzkrzyz();
        dwa();
        jeden();
        trzy();
        krzyz();
        kolko();
    }
}

