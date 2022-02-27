#include<iostream.h>
#include<math.h>
#include<iomanip.h>
class	GV
{	protected:
	char ht[30];
	int tuoi;
	char bc[10];
	char cn[10];
	float bl;
	float luong;
	public:
	friend istream& operator>>(istream &is,GV &gv);
	friend ostream& operator<<(ostream& os,GV gv);
	
	float getbl()
	{	
		luong=bl*610;
		return luong;
	}
	char *getht()
	{
		return ht;
	}
};
istream& operator>>(istream &is,GV &gv)
{
	fflush(stdin);
	cout<<"\nnhap ho ten: ";
	is.getline(gv.ht,30);
	cout<<"\nNhap tuoi : ";
	is>>gv.tuoi;
	fflush(stdin);
	cout<<"\nbang cap: ";
	is.getline(gv.bc,15);
	fflush(stdin);
	cout<<"\nchuyen nganh ";
	is.getline(gv.cn,20);
	cout<<"\nNhap bac luong: ";
	is>>gv.bl;
	return is;
}
ostream& operator<<(ostream& os,GV gv)
{
	os<<gv.ht<<setw(12)<<gv.tuoi<<setw(12)
	<<gv.bc<<setw(12)<<gv.cn<<setw(12)<<gv.luong<<endl;
	return os;
}
	void yc(GV A[],int n)
	{int kt=0;
		cout<<"\nthong tin gia vien co muc luong >2tr la: \n";
	for(int i = 0;i < n; i++)
	{
		if(A[i].getbl()>2000)
			{cout<<A[i];
			kt++;}
	}
	if(kt==0)
	{
		cout<<"\nkhong co gia vien nao\n";	
	}
	
	}
	void yc1(GV A[],int n)
	{	
		GV gvtk;
	cin>>gvtk;
	bool KT;
	KT = false;
	int cs;
	for(int i = 0; i< n; i++ )
	{
	if(strcmp(gvtk.getht(),A[i].getht())==0)
			{
				KT = true;
				cs = i;
			}
	}
	if(KT) 
		{
			cout<<"\nGiao vien nay co trong danh sach va co luong la: "
			<< A[cs].getbl();
		}
	else
	{		
			cout<<"\nGiao vien nay khong co trong danh sach: ";
			n++;
			A[n-1]=gvtk; 
			cout<<"\nds lai la: \n";
			for(int i=0;i<n;i++)
			{
				cout<<A[i];
			}
			
	}	
	}
main()
{
	GV A[50];
	int n;
	cout<<"Nhap so giao vien: ";
	cin>>n;	
	for(int i=0;i<n;i++)
	{cout<<"\nNhap thong tin giao vien thu "<<i+1<<endl;
	cin>>A[i];}
	yc(A,n);
	yc1(A,n);
	

}
