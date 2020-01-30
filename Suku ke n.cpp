#include<iostream>
// suku ke n
using namespace std;

int main (){
	int aw,bd,n,h;
	cout<<"masukan suku awal = ";
	cin>>aw; // menginput suku awal
	cout<<"masukan beda antar suku = ";
	cin>>bd; // menginput beda antar suku
	cout<<"suku yang di cari = U";
	cin>>n; // menginput suku yang dicari
	h=aw+(n-1)*bd; // rumus mencari suku
	cout<<"U"<<n<<" = "<<h;
}
