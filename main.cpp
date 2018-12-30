#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int inpdtk,hari,jam,menit,dtk,dtk1,dtk2;
    cout <<"**********PROGRAM KONVERSI DETIK,HARI,JAM,MENIT*********\n";
    cout<<"=========================================================\n";
    cout<<"\nMasukkan Detik : ";
    cin>>inpdtk;
    hari=inpdtk/86400;
    dtk1=inpdtk/86400;
    jam=dtk1/3600;
    dtk2=dtk%3600;
    menit=dtk2/60;
    dtk=dtk2%60;
    cout<<"Hari     : "<<hari<<"\n";
    cout<<"Jam      : "<<jam<<"\n";
    cout<<"Menit    : "<<menit<<"\n";
    cout<<"Detik    : "<<dtk<<"\n";

    return 0;
}
