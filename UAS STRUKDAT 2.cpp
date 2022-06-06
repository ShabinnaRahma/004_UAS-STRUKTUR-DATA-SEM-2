#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char kotaA,kotaB,kotaC,kotaD,kotaE;
    int jumlah,panjang, hasil1,hasil2,hasil3,hasil4,hasil5,hasil6,hasil7;
 
    cout<<"* Jumlah kota yang terdapat di kerajaan Britan : "<< endl;
    cin>>jumlah;
    
    // deklarasi vertex
    // menampilkan masing-masing vertex
    cout<<"Kota Pertama : ";
    cin>>kotaA;
    cout<<"Kota Kedua   : ";
    cin>>kotaB;
    cout<<"Kota Ketiga  : ";
    cin>>kotaC;
    cout<<"Kota Keempat : ";
    cin>>kotaD;
	cout<<"Kota kelima  : ";
	cin>>kotaE;
	
	cout<<endl;
	
	// deklarasi edge
	// menampilkan setiap edge yang terjadi
	cout<<"* Sisi-sisinya adalah : "<<endl<<endl;
    cout<<kotaA<<kotaB<<",";
    cout<<kotaA<<kotaD<<",";
    cout<<kotaA<<kotaE<<",";
    cout<<kotaB<<kotaC<<",";
    cout<<kotaC<<kotaE<<",";
    cout<<kotaC<<kotaD<<",";
    cout<<kotaD<<kotaE<<endl<<endl;
	
	// deklarasi weight
	// menampilkan panjang jalan yang menghubungkan vertex
	cout<<"* Panjang jalan antar kota : "<<endl;
	cout<<"panjang "<<kotaA<<" ke "<<kotaB<< ": "; cin>> hasil1;
	cout<<"panjang "<<kotaA<<" ke "<<kotaD<< ": "; cin>> hasil2;
	cout<<"panjang "<<kotaA<<" ke "<<kotaE<< ": "; cin>> hasil3;
	cout<<"panjang "<<kotaB<<" ke "<<kotaC<< ": "; cin>> hasil4;
	cout<<"panjang "<<kotaC<<" ke "<<kotaE<< ": "; cin>> hasil5;
	cout<<"panjang "<<kotaC<<" ke "<<kotaD<< ": "; cin>> hasil6;
	cout<<"panjang "<<kotaD<<" ke "<<kotaE<< ": "; cin>> hasil7;
	
	cout<<endl;
	
	cout<<"* seluruh jalan yang ada dalam kerajaan britan dan panjang jalannya : "<< endl;
	cout<<"("<<kotaA<<","<<kotaB<<","<<hasil1<<") ";
	cout<<"("<<kotaA<<","<<kotaD<<","<<hasil2<<") ";
	cout<<"("<<kotaA<<","<<kotaE<<","<<hasil3<<") ";
	cout<<"("<<kotaB<<","<<kotaC<<","<<hasil4<<") ";
	cout<<"("<<kotaC<<","<<kotaE<<","<<hasil5<<") ";
	cout<<"("<<kotaC<<","<<kotaD<<","<<hasil6<<") ";
	cout<<"("<<kotaD<<","<<kotaE<<","<<hasil7<<") ";
	
	cout<<endl<<endl;
	
	cout<<"* kota tempat pedagang sekarang berada : "<<endl<<endl;
	cout<<kotaA;
	
	cout<<endl<<endl;
	
	cout<<"* kota yang diserang naga : "<<endl<<endl;
	cout<<kotaC; 
	
	cout<<endl<<endl;
	
	cout<<"* kota yang memiliki kastil : "<<endl<<endl;
	cout<<kotaE;
	
	cout<<endl<<endl;
		
	cout<<"* jalur yang paling cepat ditempuh : "<<endl<<endl;
	cout<<kotaA<<"-"<<kotaD<<"-"<<kotaE<<endl;
	
	cout<<endl<<endl;
	
	cout<< "* dengan jarak : "<<endl<<endl;
	cout<<hasil2+hasil7<<endl<<endl;
	
	
	getch();
	return 0;
}
