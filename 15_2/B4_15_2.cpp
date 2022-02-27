#include<iostream.h>
#include<iomanip.h>
class SV{
	protected:
	int sbd;
	char ht[10];
	float t,l,h,td;
	public:
	SV()
	{
		this->sbd=sbd;
		strcpy(ht," ");
		this->t=t;
		this->l=l;
		this->h=h;
		this->td=td;
	}
	SV(int sbda=0,char *hta,float ta=0,float la=0,float ha=0,float tda=0)
	{
		sbd=sbda;
		strcpy(ht,hta);
		t=ta;
		l=la;
		h=ha;
		td=tda;
	}
	~SV()
	{
		
	}
	void nhap()
	{
		cout<<"\nnhap ten: ";
		cin.ignore(1);
		cin.getline(ht,10);
		cout<<"nhap sbd: ";
		cin>>sbd;
		cout<<"nhap diem toan: ";
		cin>>t;
		cout<<"nhap diem ly: ";
		cin>>l;
		cout<<"nhap diem hoa: ";
		cin>>h;	
	}
	void tinh()
	{
		td=t+l+h;

	}
	void xuat(){
		SV::tinh();
		cout<<sbd<<setw(10)<<ht<<setw(10)<<t<<setw(10)<<l<<setw(10)<<h<<setw(10)<<td<<endl;
	}
	void yc(SV a[100],int n)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i].td>=20)
			a[i].xuat();
		}
	}

	void yc1(SV a[100],int n)
	{	float max;
		 max=a[0].td;
		 int t=0;
		for(int i=1;i<n;i++)
		{
			if(max<a[i].td)
				{max=a[i].td;
				t=i;}
		}
		a[t].xuat();
	}
};
int main()
{
	SV *s;
	int n;
	cout<<"nhap so sinh vien: ";
	cin>>n;
	s= new SV[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin sinh vien thu "<<i+1<<"la:";
		s[i].nhap();
		cout<<"\n";
	}
	cout<<"thong tin sinh vien vua nhap la: \n";
	for(int i=0;i<n;i++)
	{
		s[i].xuat();
		cout<<"\n";
	}
	cout<<"\n thong tin sinh vien co diem so >=20 la: \n";
	s[100].yc(s,n);

	cout<<"\nthong tin sinh vien thu khoa la: \n";
	s[100].yc1(s,n);
}

