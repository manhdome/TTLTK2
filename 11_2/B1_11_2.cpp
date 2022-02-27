#include<iostream.h>
class HCN
{
	protected:
	float d,r,c,s;
	public:
	void HCN::nhap()
	{
		cout<<"nhap dai va rong: ";
		cin>>d>>r;	
	}
	float cv()
	{
		c=2*(d+r);
		return c;
	}
	float S()
	{
		s=d*r;
		return s;
	}
	void HCN::xuat()
	{   HCN::cv();
		HCN::S();
		cout<<"\ndai va rong la: "<<d<<";"<<r;
		cout<<"\n chu vi la: "<<c;
		cout<<"\n dien tich la: "<<s;
	}
};
main()
{
	HCN a;
	a.nhap();
	a.xuat();
	cout<<endl;
}