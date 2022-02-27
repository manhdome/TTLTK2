#include<iostream.h>
#include<iomanip.h>
class TS
{
	private:
		char ht[30];
		double t,v;
	public:	
	char *getht()
		{
			return ht;
		}
	
	void nhap()
		{
			cout<<"Nhap ho ten: ";
			cin.ignore();
			cin.getline(ht,30);
			cout<<"nhap diem toan: ";
			cin>>t;
			cout<<"nhap diem van: ";
			cin>>v;
		}
	void xuat()
	{
		cout<<ht<<setw(10)<<t<<setw(10)<<v<<endl;
	}
};
void doicho(TS &X,TS &Y)
{
	TS TG;
	TG=X;
	X=Y;
	Y=TG;
}
int main()
{
	TS *A;
	int i,j,n;
	cout<<"Nhap so thi sinh: n = ";
	cin>>n;
	A = new TS[n];
	cout<<"\nNhap danh sach thi sinh: ";
	for(i =0; i<n;i++)
	{	cout<<endl;
		cout<<"Nhap nguoi thu "<<i+1<<endl;
		A[i].nhap();
	}
	cout<<"\nNhap thi sinh tim kiem: ";
	char HTTK[30];
	cin.ignore(1);
	cin.getline(HTTK,30);
	bool KT1=false;
	for(i=0;i<n;i++)
		if(strcmp(HTTK,A[i].getht())==0)
		{
			cout<<"\nThong tin Thi sinh can tim la: ";
			A[i].xuat();
			KT1=true;
		}
if(!KT1)
cout<<"!!!!Khong co thi sinh nay trong danh sach!!!!";
	for(i=0;i<n;i++)
		if(strcmp(HTTK,A[i].getht())==0)
		{
			n--;
			for(int k=i;k<n;k++)
			A[k]=A[k+1];	
		}
cout<<"\nDanh sach thi sinh sau khi xoa la:"<<endl;
	for(i=0;i<n;i++)
		A[i].xuat();
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(strcmp(A[i].getht(),A[j].getht())>0)
		doicho(A[i],A[j]);

cout<<"\nDanh sach thi sinh sau khi sap xep la:"<<endl;
	for(i=0;i<n;i++)
		A[i].xuat();	
	return 0;
}
