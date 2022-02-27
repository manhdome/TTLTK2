#include<iostream>
#include<iomanip.h>
#include<conio.h>
class GV
{
	protected:
	char ht[10];
	int tuoi;
	char bc[10];
	float bl;
	float tl;
	public:
	void nhap()
	{
		cout<<"nhap ho ten: ";
		fflush (stdin);
		cin.getline(ht,10);
		cout<<"nhap bang cap: ";
		cin.getline(bc,10);
		cout<<"nhap so tuoi: ";
		cin>>tuoi;
		cout<<"nhap bac luong: ";
		cin>>bl;
	}
	float tinh()
	{
		
		tl=bl*1490;
	}
	void xuat()
	{	GV::tinh();
		cout<<"hoten"<<setw(10)<<"tuoi"<<setw(13)<<"bangcap"<<setw(10)<<"bacluong"<<setw(10)<<"tongluong"<<endl;
		cout<<setw(2)<<ht<<setw(10)<<tuoi<<setw(15)<<bc<<setw(10)<<bl<<setw(10)<<tl<<endl;
	}	
};
main()
{
	GV a;
	a.nhap();
	a.xuat();
}