#include<iostream.h>
#include<iomanip.h>
class PET
{
	protected:
	int tuoi;
	float cn;
	public:
	void nhap()
	{
		cout<<"\nnhap tuoi: ";
		cin>>tuoi;
		cout<<"\nnhap can nang: ";
		cin>>cn;
	}
	void xuat()
	{
	cout<<tuoi<<setw(10)<<cn;	
	}
};
class DOG : public PET
{
	protected:
	char mm[10];
	char st[10];
	public:
	void nhap()
	{
		PET::nhap();
		cout<<"\nnhap mau mat: ";
		cin.ignore();
		cin.getline(mm,10);
		cout<<"\nnhap so thich: ";
		cin.getline(st,10);
	}
	void xuat()
	{
		PET::xuat();
		cout<<setw(10)<<mm<<setw(10)<<st<<endl;
	}
	friend DOG operator > (DOG a,DOG b)
	{
		a.cn>b.cn;
	}
	void yc1(DOG a[],int n)
	{	cout<<"\nthong tin nhung con dog co do tuoi tu 3 den 5 la: \n";
		int dem=0;
		for(int i=0;i<n;i++)
		{
			if(a[i].tuoi>3 && a[i].tuoi<5 )
			{
				a[i].xuat();
				dem++;
			}
			
		}
		if(dem==0)
		{
			cout<<"\nkhong co con dog nao co do tuoi 3 den 5\n";
		}
	}
	int yc2(DOG a[],int n)
	{
		float tong=0;
		for(int i=0;i<n;i++)
		{
			tong+=a[i].cn;
		}
		return tong;
	}
};
int main()
{
	DOG a[100];
	int n;
	cout<<"nhap so con dog: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{cout<<"\nnhap thong tin con dog thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\nthong tin cac con dog vua duoc nhap la: \n";
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	a[100].yc1(a,n);
	cout<<"\n tong can nang cac con dog la: "<<a[100].yc2(a,n)<<endl;
}