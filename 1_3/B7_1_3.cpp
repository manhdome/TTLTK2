#include<iostream.h>
#include<iomanip.h>
class HH
{
	protected:
	char ma[10];
	char ten[10];
	float dg;
	public:
	HH()
	{
	}
	~HH()
	{	
	}
	char *getma()
	{
		return ma;
	}
	char *getten()
	{
		return ten;
	}
	void nhap()
	{	
		cout<<"\nnhap ma:";
		cin.ignore();
		cin.getline(ma,10);
		cout<<"\nnhap ten: ";
		cin.getline(ten,10);
		cout<<"\nnhap don gia: ";
		cin>>dg;
	}
	void xuat()
	{
		cout<<setw(10)<<ma<<setw(10)<<ten<<setw(10)<<dg;
	}
};
class MT : public HH
{
	protected:
	float tt,td,sl;
	public:
	MT(){}
	~MT(){}
	friend istream& operator>>(istream &is,MT &a)
	{	a.nhap();
		cout<<"\nnhap toc do: ";
		is>>a.td;
		cout<<"\nnhao so luong: ";
		is>>a.sl;
		return is;
	}
	float gettd()
	{
		return td;
	}
	float tien()
	{
		tt=sl*dg;
	}
	friend ostream& operator<<(ostream &os,MT a)
	{	a.xuat();
		a.tien();
		os<<setw(10)<<a.td<<setw(10)<<a.sl<<setw(10)<<a.tt;
		return os;
	}
};
class XT : public MT
{
	protected:
	float kl;
	float phi;
	public:
	XT()
	{
	}
	~XT()
	{
	}
	friend istream& operator>>(istream &is,XT &a)
	{	MT *t = &a;
		is>>*t;	
		cout<<"\nnhap khoi luong: ";
		is>>a.kl;
		return is;
	}
	float tinh()
	{
		phi=0.05*dg;
		return phi;	
	}
	friend ostream& operator<<(ostream &os,XT a)
	{	a.tinh();
		MT *t = &a;
		os<<*t;
		os<<setw(10)<<a.kl<<setw(10)<<a.phi<<endl;
		return os;
	}
};
int main()
{		XT a[100];
		int chon;
		int n;			
	do
	{	cout<<"\n\n\n[-------------------------------MENU------------------------------]"<<endl;
	cout<<"| 1.nhap danh sach va hien thi.                                   |"<<endl;
	cout<<"| 2.Tim thong tin may tinh xach tay theo ma .                     |"<<endl;
	cout<<"| 3.liet ke may tinh xach tay theo ten.                           |"<<endl;
	cout<<"| 4.tong phi bao tri cua may tinh.               	   	  |"<<endl;
	cout<<"| 5.may tinh co toc do nho nhat		                          |"<<endl;
	cout<<"| 6.sua thong tin may tinh xach tay		                  |"<<endl;
	cout<<"| 7.xoa 1 may tinh theo ma                                        |"<<endl;
	cout<<"| 8.chen them 1 may tinh.     	                                  |"<<endl;
	cout<<"| 9.sap xep may tinh theo chieu tang dan                          |"<<endl;
	cout<<"[-----------------------------------------------------------------]"<<endl;	
		cout<<" -Moi ban nhap lua chon: ";cin>>chon;	
		switch(chon)
		{
			case 1:
				{cout<<"\n nhap so may tinh: ";
				cin>>n;
				for(int i=0;i<n;i++)
				{
					cout<<"\nhap thong tin may tinh thu "<<i+1<<endl;
					cin>>a[i];
				}
				cout<<"\nthong tin may tinh vua duoc nhap la: \n";
					for(int i=0;i<n;i++)
					{
						cout<<a[i];	
					}
				break;}
			case 2:
				{char t[10];
				cout<<"\nnhap ma may tinh can tim: ";
				cin.ignore();
				cin.getline(t,10);
				int kt=0;
				for(int i=0;i<n;i++)
				{
				if(strcmpi(a[i].getma(),t) == 0)
				{
					cout<<a[i];
					kt++;
				}
				}
				if(kt==0)
				{cout<<"\n khong co thong tin nao phu hop\n";}
				break;}
			case 3:
				{char m[10];
				cout<<"\nnhap ten may tinh can tim: ";
				cin.ignore();
				cin.getline(m,10);
				int kt1=0;
				for(int i=0;i<n;i++)
				{
				if(strcmpi(a[i].getten(),m) == 0)
				{
				cout<<a[i];
				kt1++;
				}
				}
				if(kt1==0)
				{cout<<"\n khong co thong tin nao phu hop\n";}
				break;}
			case 4:
			{	float tong=0;
				for(int i=0;i<n;i++)
				{
					tong+=a[i].tinh();
				}
				cout<<"\ntong phi la: "<<tong<<endl;
				break;
			}
			case 5:
			{	cout<<"\nthong tin may tinh co toc do nho nhat la:\n";
				float s;
				s=a[0].gettd();
				for(int i=1;i<n;i++)
				{
					if(s>a[i].gettd())
					 {
 						cout<<a[i];
 					
 					}
				}
				
				break;
			}
			case 6:
				{char r[10];
				cout<<"\nnhap ma may tinh : ";
				cin.ignore();
				cin.getline(r,10);
				for(int i=0;i<n;i++)
				{
				if(strcmpi(a[i].getma(),r) == 0)
					{
					cin>>a[i];
					}
				}
				cout<<"\nthong tin sau khi duoc sua lai la: \n";
				for(int i=0;i<n;i++)
				{
					cout<<a[i];
				}
				break;}
			case 7:
				{char s[10];
				cout<<"\nnhap ma may tinh : ";
				cin.ignore();
				cin.getline(s,10);
				cout<<"\ndanh sach sau khi xoa la: \n";
				for(int i=0;i<n;i++)
				{
				if(strcmpi(a[i].getma(),s) == 0)
					for (int j = i; j < n; j++) 
						{
                		a[j] = a[j+1];
                		n--;
            				}
				}
				for(int i=0;i<n;i++)
				{
					cout<<a[i];
				}
				break;}
			case 8:
			{	int chen;
				cout<<"\nnhap vi tri can tren: \n";
				cin>>chen;
				cout<<"\nthong tin may can chen : \n";
				XT b;
				cin>>b;
				for(int i=n;i>chen;i--)
				{
					a[i]=a[i-1];
					n++;
				}
				a[chen]=b;
				cout<<"\nthong tin duoc cap nhap lai la: \n";
				for(int i=0;i<n;i++)
				{
					cout<<a[i];
				}
				break;}
			case 9:
			{
				for(int i=0;i<n-1;i++)
				{
					for(int j=i+1;j<n;j++)
					{
						if(strcmp(a[i].getma(),a[j].getma())>0)
						{
							XT tg;
							tg=a[i];
							a[i]=a[j];
							a[j]=tg;
						}
					}
				}
				cout<<"\nthong tin sau khi duoc sap xep la: \n";
				for(int i=0;i<n;i++)
				{
					cout<<a[i];
				}
			}
		}
	}while(chon>0);
}
