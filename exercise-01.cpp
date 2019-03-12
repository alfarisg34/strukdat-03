/*	Nama program	: exercise-01
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
    Kelas           : A
	Tanggal buat	: 12 03 2019
	Deskripsi		: mencetak hasil perhitungan
********************************************************************/
#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s)
{ 
    cout<<"Input panjang    : ";cin>>s->panjang;
    cout<<"Input lebar      : ";cin>>s->lebar;
}
float keliling(segiempat s) 
{ 
    return (s.panjang+s.lebar)*2;
}
float luas(segiempat s) 
{ 
    return (s.panjang*s.lebar);
}
// panjang diagonal segiempat
float diagonal(segiempat s) 
{ 
    return sqrt(s.panjang*s.panjang+s.lebar*s.lebar);
}
void print(segiempat s) 
{ 
    cout<<"panjang  : "<< s.panjang<<endl;
    cout<<"lebar    : "<< s.lebar<<endl;
    cout<<"Keliling : "<<keliling(s)<<endl;
    cout<<"Luas     : "<<luas(s)<<endl;
    cout<<"Diagonal`: "<<diagonal(s)<<endl; 
}

int main() 
{
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}
