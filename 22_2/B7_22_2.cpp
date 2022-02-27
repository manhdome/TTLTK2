#include<iostream.h>
#include<math.h>
#include<iomanip.h>
class	OTO
{	protected:
	char ma[10];
	char ten[10];
	float dg;
	int dt;
	float tl;
	float tien;
	public:
	OTO()
	{
		strcpy(ma," ");
		strcpy(ten," ");
		this->dg=dg;
		this->dt=dt;
		this->tl=tl;
		this->tien=tien;
	}
	~OTO()
	{
		
	}
	int getdt()
	{
		return dt;
	}
	char *getten()
	{
		return ten;
	}
   	friend istream& operator>>(istream &is,OTO &mt)
	 {
 		fflush(stdin);
	cout<<"\nnhap ma: ";
	is.getline(mt.ma,10);
	fflush(stdin);
	cout<<"\nnhap ten: ";
	is.getline(mt.ten,10);
	cout<<"\nNhap don gia: ";
	is>>mt.dg;
	cout<<"\nNhap dung tich: ";
	is>>mt.dt;
	cout<<"\nNhap trong luong: ";
	is>>mt.tl;
	return is;
 	}
	 float tinh()
 	{
	 	if(tl>2)
	 		tien=100000;
 		else if(tl>1)
 			tien=50000;
		else 
			tien=300000;
			return tien;
	 }
	friend  ostream& operator<<(ostream& os,OTO mt)
	 {	mt.tinh();
 		os<<mt.ma<<setw(10)<<mt.ten<<setw(10)<<mt.dg<<setw(10)<<mt.dt<<setw(10)<<mt.tl<<setw(10)<<mt.tien<<endl;
 		return os;
 	}

/*
 	friend OTO operator ==( OTO a,int n)
 	{
	 	if(a.dt==n)
	 	return true;
	 }*/
};
void yc1(OTO a[],int n)
{		
	bool KT;
	KT = false;
	int cs;
	for(int i = 0; i< n; i++ )
	{
	if(strcmp("HUYNDAI",a[i].getten())==0)
			{
				KT = true;
				cs = i;
			}
	}
	if(KT) 
		{
			cout<<"\nOTO hang HYNDAI  co trong danh sach \n";
		}
	else
	{		
			cout<<"\nOTO hang nay khong co trong danh sach: ";
			cout<<"\nnhap thong tin: \n";
			cin>>a[n];
			n++;
			cout<<"\nds lai la: \n";
			for(int i=0;i<n;i++)
			{
				cout<<a[i];
			}
	}
}

int main()
{
	OTO a[50];
	int n;
	cout<<"nhap so OTO: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin OTO thu "<<i+1<<"la: \n";
		cin>>a[i];
	}
	cout<<"\nthong tin OTO co dung tich 2.5 la: \n";
	int kt=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].getdt()==2.5)
		 {cout<<a[i];
		 kt++;}
	}
	if(kt==0)
	{
		cout<<"\n khong co oto co dung tich 2,5 trong danh sach\n";
	}
	yc1(a,n);
	cout<<endl;
}

	
	