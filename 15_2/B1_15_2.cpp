#include<iostream.h>
class  HCN
{
	private:
		float	d,r;
	public:
		void  nhap() ;
		void  inthongtin();
		float  tinhchuvi();
		float  tinhdientich();
};
void  HCN :: nhap()
{
	cout<<"nhap chieu dai: ";	cin>>d;
	cout<<"nhap chieu rong: ";	cin>>r;
}
void  HCN :: inthongtin()
{
	cout<<"("<<d<<","<<r<<")"<<"    ";
}
float  HCN :: tinhchuvi()
{
	return  2*(d+r);
}
float  HCN :: tinhdientich()
{
	return  d*r ;
}
int main()
{
	HCN	*H;
	int n,i;
	cout<<"\nNhap so doi tuong n = ";
	cin>>n;
	H = new HCN[n];
	cout<<"\nNhap thong tin hinh chu nhat:"<<endl;
	for(i=0;i<n;i++)
    	H[i].nhap();
		cout<<"\nIn thong tin hinh chu nhat: ";
	for(i=0;i<n;i++)
    H[i].inthongtin();

	float Maxcv;
	int chisocv;
	Maxcv = H[0].tinhchuvi();
	chisocv = 0;
	for(i=1;i<n;i++)
	if(Maxcv < H[i].tinhchuvi())
			{
				Maxcv = H[i].tinhchuvi();
				chisocv = i;
			}
	cout<<"\n\nHinh ch nhat co chu vi lon nhat la: ";
	H[chisocv].inthongtin();
	cout<<" co chu vi la "<<Maxcv<<endl;
	float Mindt;
	int chisodt;
	Mindt = H[0].tinhdientich();
	chisodt = 0;
	for(i=1;i<n;i++)
		if(Mindt > H[i].tinhdientich())
			{
				Mindt = H[i].tinhdientich();
				chisodt = i;
			}
	cout<<"\n\nHinh ch nhat co dien tich nho nhat la: ";
	H[chisodt].inthongtin();
	cout<<" co dien tich la "<<Mindt<<endl;
	cout<<endl;
	return 0;
}

