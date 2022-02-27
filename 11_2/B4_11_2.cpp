#include<iostream.h>
class VT
{
	protected:
	float a,b,c;
	public:
	VT(float ca=0,float cb=0,float cc=0)
	{
		a=ca;
		b=cb;
		c=cc;	
	}
	~VT()
	{
		
	}
	void nhap()
	{
		cout<<"nhap a,b,c: ";
		cin>>a>>b>>c;
	}
	VT tong(VT v)
	{
		VT vt;
		vt.a=this->a+v.a;
		vt.b=this->a+v.b;
		vt.c=this->a+v.c;
		return vt;
	}
	void xuat()
	{
		cout<<"vecto co dang: "<<a<<","<<b<<","<<c;
	}
};
main()
{
	VT t1,t2,t3;
	cout<<"\nnhap thongg tin vt thu 1\n";
	t1.nhap();
	t1.xuat();
	cout<<"\nnhap thongg tin vt thu 2\n";
	t2.nhap();
	t2.xuat();
	t3=t1.tong(t2);
	cout<<"\ntong cua 2 vt la: \n";
	t3.xuat();
	cout<<endl;
}