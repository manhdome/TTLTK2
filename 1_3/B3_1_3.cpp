#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include<iomanip.h>
class MatHang
{
    protected:
		char mahang[30];
		char tenhang[30];
		float dongia;
	public:
	friend istream& operator >>(istream &is, MatHang &p)
	{
			cout<<"nhap vao ma hang :"; 
         	cin.ignore();
			is.getline(p.mahang,30);
			cout<<"Nhap vao ten hang ; ";
			is.getline(p.tenhang,30);
			cout<<"Nhap vao don gia :";
			is>>p.dongia;		
         return is;
	}
};
class BanhKeo: public	 MatHang
{
	private:
     	char noisanxuat[50];
	public:
	BanhKeo(): MatHang()
    {
		strcpy(this->noisanxuat," ");
	}
/*
	BanhKeo(char *mahang,char *tenhang,float dongia,char *noisanxuat) : MatHang(mahang,tenhang,dongia)
	{	
		strcpy(this->noisanxuat,noisanxuat);	
	}*/
	~BanhKeo()
  {		
	}
	float chietkhau()
	{
	return (dongia*10)/100;
	}
	friend ostream& operator <<(ostream &os, BanhKeo &p)
	{
		os<<p.mahang<<setw(12)<<p.tenhang<<setw(12)<<p.dongia<<setw(12)<<p.noisanxuat<<setw(12)<<p.chietkhau()<<endl;
	}
	friend istream& operator >>(istream &is, BanhKeo &p)
	{
	is>>(MatHang&)p;
	cin.ignore();	
	cout<<"Nhap vao noi san xuat :";
	is.getline(p.noisanxuat,50);
 	}
	char *getmahang()
	{
		return mahang;
	}
	char *gettenhang()
	{
		return tenhang;
	}
	float getdongia()
	{
		return dongia;
	}	
};
	void sx(BanhKeo mh[],int n)
	{
	for(int i=0;i<n;i++)
	{	BanhKeo tg;
		for(int j=n+1;j<n;j++)
		{
			if(mh[i].getdongia()>mh[j].getdongia())
			{
				tg=mh[i];
				mh[i]=mh[j];
				mh[j]=tg;
			}
		}
	}	
	}
main()
{
	BanhKeo mh[50];
	int n;
	cout<<"nhap so mhat hang: ";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{cout<<"\n nhap thong tin mat hang thu "<<i+1<<endl;
		cin>>mh[i];
	}
	cout<<"\nthong tin vua duoc nhap la: \n";
	for(int i=0;i<n;i++)
	{
		cout<<mh[i];
		cout<<endl;	
	}
	cout<<"\n Cac loai banh keo co ma khac M01 :"<<endl;
	int dem1=0;
	for(int i=0;i<n;i++)
	{ 
		if(strcmpi(mh[i].getmahang(),"M01")!=0)
	      {cout<<mh[i]<<endl;
		  dem1++;}
	}
	if(dem1==0)
	cout<<"khong co thong tin can tim\n";
	char kt[50];
	int dem=0;
	cout<<"\nnhap ma can tim: ";
	cin.ignore();
	cin.getline(kt,50);
	cout<<"\n thong tin can tim la :"<<endl;
	for(int i=0;i<n;i++)
	{if(strcmpi(mh[i].getmahang(),kt)==0)
	      {cout<<mh[i]<<endl;
		  dem++;}
	}
	if(dem==0)
	cout<<"khong co thong tin can tim\n";
	int dem2=0;
	cout<<"\n Cac loai banh keo ten 'banhngot'  la :\n"<<endl;
	for(int i=0;i<n;i++)
	{ 
		if(strcmpi(mh[i].gettenhang(),"banhngot")==0)
	      {cout<<mh[i]<<endl;
		  dem2++;}
	}
	if(dem2==0)
	
	cout<<"khong co thong tin can tim\n";
	cout<<"\n thong tin sau khi xap xep la: \n";
	for(int i=0;i<n;i++)
	{	sx(mh,n);
		cout<<mh[i];
		cout<<endl;
	}
}

