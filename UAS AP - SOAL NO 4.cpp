#include <iostream>
using namespace std;

int main()
{
    int var = 5;
    int *pVar = &var;

    cout<<"var = "<<var<<endl;
    cout<<"pVar = "<<*pVar<<endl;
    cout<<"====="<<endl<<endl;
    *pVar= 500;
    cout<<"var = "<<var<<endl;
    cout<<"pVar = "<<*pVar<<endl;

    return 0;
}
