#include<iostream.h>
#include<string.h>
class VT
{
	int n;
	float *v;
	public:
		VT ()
		{
			int i;
			cout<<"So chieu: ";
			cin>>n;
			v = new float[n];
		}
		VT(VT &b);
		int length()
		{
			return n;
		}
		VT& operator=(VT &b);
		float& operator[](int i)
		{
			return v[i];
		} 
		~VT();
};
VT::VT(VT &b)
{
	int i;
	v = new float[b.n];
	for(i=0;i<n;i++)
		v[i]=b[i];
}
VT::~VT()
{
	delete v;
}
VT& VT:: operator=(VT &b)
{
	if(this!=&b)  //
	{
//xóa vùng nh? ??ng ?ã có ??i t??ng v? trái
		delete v;
//c?p phát vùng nh? m?i có kích th??c nh? trong ??i t??ng b
		v = new float[b.n];
		for(int i =0; i<n;i++)
			v[i]=b.v[i];
	}
	// Khi hai ??i t??ng gi?ng nhau, không làm gì
return *this;	
}
void nhap(VT &s)
{
	for (int i=0; i<s.length();i++)
	{
		cout<<"Toa do thu "<<i+1<<": ";
		cin>>s[i];
	}
}
void in(VT &s)
{
	cout<<" so chieu: "<<s.length()<<endl;
	for(int i=0;i<s.length();i++)
		cout<<s[i]<<"  ";
	cout<<endl;
}
int main()
{
	VT s1,s2;
	cout<<"\nNhap cac toa do cua s1:"<<endl;
	nhap(s1);
	cout<<"\nIn thong tin ve s1: "<<endl;
	in(s1);
	s2 = s1;
	cout<<"\nIn thong tin ve s2: "<<endl;
	in(s2);
	return 0;
}
