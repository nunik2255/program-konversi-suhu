#include <iostream>
using namespace std;
int main ()
{
    float C,R,F;
    cout<<"Program Konversi Suhu"<<endl;
    cout<<"konversi suhu celcius ke farenheit"<<endl;
    cout<<"masukan nilai celcius : " ;
    cin>>C;
    F=(C*9/5)+32;
    cout<<"Nilai dalam farenheit adalah = "<<F<<endl;
    cout<<"konversi suhu dadi celcius ke reamur"<<endl;
    cout<<"masukan nilai celcius = " ;
    cin>>C;
    R=(C*4/5);
    cout<<"nilai dalam reamur adalah = "<<R<<endl;
    return 0;
}
