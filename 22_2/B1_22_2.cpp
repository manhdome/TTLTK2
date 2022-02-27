#include<iostream.h>
#include<math.h>
class	SP
{
	float pt,pa;
	public:
	friend istream& operator>>(istream &is,SP &a);
	friend ostream& operator<<(ostream &os,SP a);
};
istream& operator>>(istream &is,SP &a)
{
	cout<<"Nhap phan thuc: ";
	is>>a.pt;
	cout<<"Nhap phan ao: ";
	is>>a.pa;
	return is;
}
ostream& operator<<(ostream &os,SP a)
{
	if (a.pa>=0)
		os<<a.pt<<"+j*"<<a.pa<<endl;
	else
		os<<a.pt<<"-j*"<<fabs(a.pa)<<endl;
	return os;
}
int main()
{
	SP A, B;
	cout<<"Nhap so phuc A: ";
	cin>>A;
	cout<<"Nhap so phuc B: ";
	cin>>B;
	cout<<"\nIn 2 so phuc: "<<endl;
	cout<<"A = " << A;
	cout<<"B = " << B;
	return 0;
}
