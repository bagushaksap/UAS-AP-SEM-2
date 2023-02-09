#include <iostream>
#include <conio.h>
using namespace std;

int luas(int p,int l)
{return (p*l);}

main(){

int pj,lb;

cout<<"INI CONTOH NON VOID\n";
cout<<"\nPanjang = ";cin>>pj;
cout<<"Lebar = ";cin>>lb;

luas(pj,lb);
cout<<"\nLuasnya = "<<luas(pj,lb);

getch();}
