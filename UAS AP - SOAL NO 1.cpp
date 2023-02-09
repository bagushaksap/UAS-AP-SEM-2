#include <iostream>
#include <string>
using namespace std;

struct siswa{
    int NIM;
    string NAMA;
    float nilai ;
};

int main(){
    siswa yuni, dadang;

    yuni.NIM = 1;
    yuni.NAMA = "Yuni";
    yuni.nilai = 84.5;

    dadang.NIM = 2;
    dadang.NAMA = "Dadang";
    dadang.nilai = 74.5;

    cout<<yuni.NAMA<<" mendapatkan nilai "<<yuni.nilai<<endl;
    cout<<dadang.NAMA<<" mendapatkan nilai "<<dadang.nilai<<endl;

    return 0;
}
