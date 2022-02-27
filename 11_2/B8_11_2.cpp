#include<iostream>
#include<iomanip.h>
#include<conio.h>
class KH
{
	protected:
	char ht[10];
	struct NGAY{
		int ngay,thang,nam;
	};
	char cmt[10];
	char hk[10];
	public:
	NGAY ns;
	KH()
	{
		strcpy(ht," ");
		strcpy(cmt," ");
		strcpy(hk," ");
		this->ns.ngay=0;
		this->ns.thang=0;
		this->ns.nam=0;
	}
	KH(char *hts,char *cmts,char *hks,int ngay,int thang,int nam)
	{
		strcpy(ht,hts);
		strcpy(cmt,cmts);
		strcpy(hk,hks);
		this->ns.ngay=ngay;
		this->ns.thang=thang;
		this->ns.nam=nam;
	}
	~KH()
	{
		
	}
	void nhap()
	{
		cout<<"nhap ho ten: ";
		fflush (stdin);
		cin.getline(ht,10);
		cout<<"nhap cmt: ";
		cin.getline(cmt,10);
		cout<<"nhap so ho khau: ";
		cin.getline(hk,10);
		cout<<"nhap ngay/thang/nam sinh: ";
		cin>>ns.ngay>>ns.thang>>ns.nam;
	}
	void xuat()
	{
		cout<<"hoten"<<setw(17)<<"ngay/thang/nam"<<setw(13)<<"cmt"<<setw(10)<<"hokhau"<<endl;
		cout<<ht<<setw(15)<<ns.ngay<<"/"<<ns.thang<<"/"<<ns.nam<<setw(13)<<cmt<<setw(10)<<hk<<endl;
	}
};
main()
{
	KH a;
	a.nhap();
	a.xuat();
}
	