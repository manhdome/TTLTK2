#include<iostream>
#include<iomanip.h>
#include<conio.h>
class CN
{
	protected:
	char ht[10];
	int tuoi;
	char qq[10];
	float bl;
	float l;
	float tl;
	public:
	CN()
	{
		strcpy(ht," ");
		strcpy(qq," ");
		this->tuoi=tuoi;
		this->bl=bl;
		this->tl=tl;
	}
	void nhap()
	{
		cout<<"nhap ho ten: ";
		fflush (stdin);
		cin.getline(ht,10);
		cout<<"nhap que quan: ";
		cin.getline(qq,10);
		cout<<"nhap so tuoi: ";
		cin>>tuoi;
		cout<<"nhap bac luong: ";
		cin>>bl;
	}
	float tinh()
	{
		
		tl=(bl*2500)+(bl*2500*0.2);
	}
	void xuat()
	{	CN::tinh();
		cout<<"hoten"<<setw(10)<<"tuoi"<<setw(13)<<"quequan"<<setw(10)<<"bacluong"<<setw(10)<<"tongluong"<<endl;
		cout<<setw(2)<<ht<<setw(10)<<tuoi<<setw(15)<<qq<<setw(10)<<bl<<setw(10)<<tl<<endl;
	}	
};
main()
{
	CN a;
	a.nhap();
	a.xuat();
}