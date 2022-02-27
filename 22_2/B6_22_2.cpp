#include<iostream.h>
#include<math.h>
class	DT
{	protected:
	float a,b,c,d;
	public:
	DT()
	{
		this->a=a;
		this->b=b;
		this->c=c;
		this->d=d;
	}
	~DT()
	{
		
	}
	friend istream& operator>>(istream &is,DT &dt);
	friend ostream& operator<<(ostream &os,DT dt);
	friend  DT operator +( DT A,DT B);
	friend DT operator -( DT A,DT B);
};
istream& operator>>(istream &is,DT &dt)
{
	cout<<"Nhap cac gia tri a,b,c,d :";
	is>>dt.a;
	is>>dt.b;
	is>>dt.c;
	is>>dt.d;
	return is;
}
ostream& operator<<(ostream &os,DT dt)
{
	os<<dt.a<<"x^3 + "<<dt.b<<"x^2 + "<<dt.c<<"x + "<<dt.d<<endl;
	return os;
}
 DT operator +( DT A,DT B)
{
	DT t;
	t.a=A.a+B.a;
	t.b=A.b+B.b;
	t.c=A.c+B.c;
	t.d=A.d+B.d;
	return t;
}
 DT operator -( DT A,DT B)
{
	DT t;
	t.a=A.a-B.a;
	t.b=A.b-B.b;
	t.c=A.c-B.c;
	t.d=A.d-B.d;
	return t;
}
int main()
{
	DT A, B,C,D;
	cout<<"Nhap da thuc a: \n";
	cin>>A;
	cout<<"Nhap da thuc B: \n";
	cin>>B;
	cout<<"\nIn 2 da thuc: "<<endl;
	cout<<"A = " << A;
	cout<<"B = " << B;
	C=A+B;
	cout<<"\ntong 2 da thuc: ";
	cout<<C;
	D=A-B;
	cout<<"\nhieu 2 da thuc: ";
	cout<<D;
	cout<<endl;
	return 0;
}
