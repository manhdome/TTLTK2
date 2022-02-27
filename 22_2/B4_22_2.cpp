#include<iostream.h>
#include<math.h>
#include<iomanip.h>
class	MT
{	protected:
	char ma[10];
	char ten[10];
	float dg;
	int dl;
	float tl;
	float tien;
	public:
	
	MT()
	{
		strcpy(ma," ");
		strcpy(ten," ");
		this->dg=dg;
		this->dl=dl;
		this->tl=tl;
		this->tien=tien;
	}
	~MT()
	{
		
	}
	int getdl()
	{
		return dl;
	}
	char *getten()
	{
		return ten;
	}
   	friend istream& operator>>(istream &is,MT &mt)
	 {
 		fflush(stdin);
	cout<<"\nnhap ma: ";
	is.getline(mt.ma,10);
	fflush(stdin);
	cout<<"\nnhap ten: ";
	is.getline(mt.ten,10);
	cout<<"\nNhap don gia: ";
	is>>mt.dg;
	cout<<"\nNhap dung luong: ";
	is>>mt.dl;
	cout<<"\nNhap trong luong: ";
	is>>mt.tl;
	return is;
 	}
	float gettien()
	{	
		if(tl>2)
		{
			tien=100000;
		}
		else if(tl>1)
		{
			tien=50000;
		}
		else 
		{
			tien=30000;
		}
	}
	friend  ostream& operator<<(ostream& os,MT mt)
	 { 	mt.gettien();
 		os<<mt.ma<<setw(10)<<mt.ten<<setw(10)<<mt.dg<<setw(10)<<mt.dl<<setw(10)<<mt.tl<<setw(10)<<mt.tien<<endl;
 		return os;
 	}
 	
};
void yc1(MT a[],int n)
{		
	bool KT;
	KT = false;
	int cs;
	for(int i = 0; i< n; i++ )
	{
	if(strcmp("SONY",a[i].getten())==0)
			{
				KT = true;
				cs = i;
			}
	}
	if(KT) 
		{
			cout<<"\nmay tinhh nay co trong danh sach \n";
		}
	else
	{		
			cout<<"\nmay tinh hang SONNY khong co trong danh sach: ";
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
	MT a[50];
	int n;
	cout<<"nhap so may tinh: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin may tinh thu "<<i+1<<"la: \n";
		cin>>a[i];
	}
	cout<<"\nthong tin may tinh co RAM =16 la: \n";
	int kt=0;
	for(int i=0;i<n;i++)
	{ 
		if(a[i].getdl()==16)
		 {cout<<a[i];
		 kt++;}
	}
	if(kt==0)
	{
		cout<<"\nkhong co may tinh nao co RAM 16\n";
	}
	yc1(a,n);
	cout<<endl;
}

	
	