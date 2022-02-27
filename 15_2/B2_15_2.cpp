#include<iostream.h>
class PS
{
	protected:
	float ts,ms;
	public:
	void nhap()
	{
		cout<<"nhap ts,ms: ";
		cin>>ts>>ms;
	}	
	PS tong(PS s)
	{
		PS ps;
		ps.ts=this->ts*s.ms+this->ms*s.ts;
		ps.ms=this->ms*s.ms;
		return ps;
	}
	PS tich(PS s)
	{
		PS ps;
		ps.ts=this->ts*s.ts;
		ps.ms=this->ms*s.ms;
		return ps;
	}
	void xuat()
	{
		cout<<"phan so co dang: "<<ts<<"/"<<ms;
	}
	float UCLN(float a, float b)
	{
	while (a != b)
		{
		if (a > b)
		{	a = a-b;	}
		else
		{	b = b-a;	}
	}
	return a;
	}
	friend PS ttong(PS a[],int n)
	{
		PS t;
		t.ts=a[0].ts;
		t.ms=a[0].ms;
		for(int i=0;i<n;i++)
		{
			t.ts=a[0].tong(a[i]).ts;
			t.ms=a[0].tong(a[i]).ms;
		}
		return t;
	}
	friend PS ttich(PS a[],int n)
	{
		PS t;
		t.ts=a[0].ts;
		t.ms=a[0].ms;
		for(int i=0;i<n;i++)
		{
			t.ts=a[0].tich(a[i]).ts;
			t.ms=a[0].tich(a[i]).ms;
		}
		return t;
	}
};

int main()
{
	PS *s;
	int n;
	cout<<"nhap so luong cac phan so: ";
	cin>>n;
	s =new PS[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin tu so ma mau so thu "<<i<<" :";
		s[i].nhap();
	}
	cout<<"\nthong tin cac phan so vua duoc nhap la: ";
	for(int i=0;i<n;i++)
	{
		s[i].xuat();
		cout<<"\t";
	}
	cout<<"\ntong cac phan so vvua nhap la: ";
	ttong(s,n).xuat();
	cout<<"tich cac phan so vua nhap la : ";
	ttich(s,n).xuat();
}
