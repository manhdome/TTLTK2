#include<iostream.h>
class PS
{
	protected:
	float ts,ms;
	public:
	PS(float ts=0,float ms=0)
	{
		this->ts=ts;
		this->ms=ms;
			
	}
	~PS()
	{
		
	}
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
	PS hieu(PS s)
	{
		PS ps;
		ps.ts=this->ts*s.ms-this->ms*s.ts;
		ps.ms=this->ms*s.ms;
		return ps;
	}
	void xuat()
	{
		cout<<"phan so co dang: "<<ts<<"/"<<ms;
	}
};
main()
{
	PS s1,s2,s3,s4;
	cout<<"\nnhap thongg tin ps thu 1\n";
	s1.nhap();
	s1.xuat();
	cout<<"\nnhap thongg tin ps thu 2\n";
	s2.nhap();
	s2.xuat();
	s3=s1.tong(s2);
	cout<<"\ntong cua 2 ps la: \n";
	s3.xuat();
	s4=s1.hieu(s2);
	cout<<"\nhieu cua 2 ps la: \n";
	s4.xuat();
	cout<<endl;
}