#include <iostream>
using namespace std;

int main () {

    string nama, nim, kelas;
    float tinggi, berat, indeks;

    cout<<"Masukkan nama anda : ";
    cin>>nama;
    cout<<"Masukkan nim anda : ";
    cin>>nim;
    cout<<"Masukkan kelas anda : ";
    cin>>kelas;
    cout<<"Masukkan (tinggi anda dalam meter) : ";
    cin>>tinggi;
    cout<<"Masukkan berat anda (dalam kg) : ";
    cin>>berat;
    

    indeks = berat/(tinggi*tinggi);

    cout<<"Indeks masa tubuh anda : "<<indeks;

    if (indeks<18)
    {
        cout<<", berat badan anda kurang";
    } else if (indeks >18.1)
    {
        cout<<", berat badan anda normal";
    } else if (indeks <24)
    {
        cout<<", berat badan anda sedikit berlebih";
    } else if (indeks <30)
    {
        cout<<", berat badan anda berlebih";
    } else
    {
        cout<<", berat badan anda terlalu berlebih, sebaiknya anda mengurangi berat anda";
    }
    


}