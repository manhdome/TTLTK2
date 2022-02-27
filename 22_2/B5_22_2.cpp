#include<iostream.h>
#include<math.h>
#include<iomanip.h>
#include<conio.h>
int UCLN(int a,int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;	
	}
	return a;
}
class PS
{
	private:
	float ts;
	float ms;
	public:
	PS(float tuso=0,float mauso=1)
		{
			ts=tuso;
			ms=mauso;	
		}	
	~PS(){}
	friend istream& operator >>(istream &is, PS &p)
	{
		cout<<"\nNhap tu so : "; is>>p.ts;
		do
		{
			cout<<"\nNhap mau so : "; is>>p.ms;
			if(p.ms == 0)
	cout<<"\nnhap mau so khac 0, Moi ban nhap lai ! ";
		}while(p.ms == 0);
			
				return is;
		} 
	friend ostream& operator <<(ostream &os, PS &p)
		{
			os<<p.ts<<"/"<<p.ms;
		} 
	PS toigian()
	{
		PS p ;
		p.ts = ts/UCLN(ts,ms);
		p.ms = ms/UCLN(ts,ms);
		return p;
	}
	PS operator +( PS &p)
	{	
		PS ps;
		ps.ts = this->ts*p.ms + p.ts*this->ms;
		ps.ms = this->ms*p.ms;
 		
		 return ps.toigian();
	}
	PS operator -( PS &p)
	{	
		PS ps;
		ps.ts = (this->ts*p.ms) - (p.ts*this->ms);
		ps.ms = this->ms*p.ms;
 		return ps.toigian();
	}
	PS operator *( PS &p)
	{	
		PS ps;
		ps.ts = this->ts*p.ts;
		ps.ms = this->ms*p.ms;
 		return ps.toigian();
	}
	PS operator /( PS &p)
	{	
		PS ps;
		ps.ts = this->ts*p.ms;
		ps.ms = this->ms*p.ts;
 		return ps.toigian();
	}
};
int main()
{
PS p,p1,p2;
	cout<<"\nNhap thong tin cho phan so 1 : ";
	cin>>p1;
	cout<<"\nNhap thong tin cho phan so 2 : ";
	cin>>p2;
	cout<<"\n\n\n - Cac phan so vua nhap : ";
	cout<<p1;
	cout<<" va ";
	cout<<p2;
		p = p1+p2;
	cout<<"\n Tong = ";
 	cout<<p;
		p = p1-p2;
	cout<<"\n Hieu = ";
	cout<<p;
		p = p1 * p2;
	cout<<"\n tich = ";
	cout<<p;
		p = p1/p2;
	cout<<"\n thuong = ";
 	cout<<p;
 	cout<<endl;
	return 0;
}
