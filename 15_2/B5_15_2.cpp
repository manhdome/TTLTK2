 #include<iostream.h>
#include<iomanip.h>
#include<string.h>
#include<stdio.h>
class NGUOI{
	protected:
	char ht[20];
	int t;
	char nn[20];
	char qt[20];
	public:
	NGUOI()
	{
		strcpy(ht," ");
		this->t=t;
		strcpy(nn," ");
		strcpy(qt," ");
	}
	NGUOI(char *hta,char *nnq,char *qta,int ta)
	{	
		strcpy(ht,hta);
		strcpy(nn,nnq);
		strcpy(qt,qta);
		t=ta;
	}
	~NGUOI()
	{
		
	}
	char *getht()
	{
		return ht;	
	}
	char *getnn()
	{
		return nn;
	}
	char *getqt()
	{
		return qt;
	}
	void nhap()
	{
		cout<<"\n nhap ten: ";
		cin.ignore();
		cin.getline(ht,20);
		cout<<"nhap nghe nghiep: ";
		cin.getline(nn,20);
		cout<<"nhap quoc tich: ";
		cin.getline(qt,20);
		cout<<"nhap tuoi: ";
		cin>>t;
	}
	void xuat()
	{
		cout<<ht<<setw(15)<<t<<setw(10)<<nn<<setw(15)<<qt<<endl;
	}
	void yc2(NGUOI a[],int n)
	{ cout<<"\n thong tin nguoi co so tuoi nho nhat la: \n";
		float min=a[0].t;
		int g=0;	 
		for(int i=1;i<n;i++)
		{
			if(min>a[i].t)
			{min=a[i].t;
			g=i;}
		}
		a[g].xuat();
	}
	void yc3(NGUOI a[],int n)
	{cout<<"\n thong tin nguoi co so tuoi lon nhat la: \n";
		float max=a[0].t;
		int g=0;
		for(int i=1;i<n;i++)
		{
			if(max<a[i].t)
			max=a[i].t;
			g=i;
		}
		a[g].xuat();
	}

};
	void doicho(NGUOI &X,NGUOI &Y)
	{
	NGUOI TG;
	TG=X;
	X=Y;
	Y=TG;
	}
	void yc(NGUOI a[],int n)
	{
	bool KT1=false;
	for(int i=0;i<n;i++)
		if(strcmp("campuchia",a[i].getqt())==0)
		{
			cout<<"\nThong tin nguoi co quoc tich campuchia can tim la: \n";
			a[i].xuat();
			KT1=true;
		}
		if(!KT1)
		cout<<"\n!!!!Khong co nguoi co quoc tinh campuchia trong danh sach!!!!";
			for(int i=0;i<n;i++)
				if(strcmp("campuchia",a[i].getqt())==0)
				{
				n--;
				for(int k=i;k<n;k++)
				a[k]=a[k+1];	
				}
		cout<<"\nDanh sach thi sinh sau khi xoa la:"<<endl;
			for(int i=0;i<n;i++)
			a[i].xuat();
	}
	void yc1(NGUOI a[],int n)
	{ int i;
	bool KT1=false;
	for(int i=0;i<n;i++)
		if(strcmp("Le Dai Nghia",a[i].getht())==0)
		{
			KT1=true;
		}
		if(!KT1)
		cout<<"\n!!!!Khong co nguoi co ten:Le Dai Nghia trong danh sach!!!!\n";
		cout<<"nhap thong tin: \n";
		a[n].nhap();
		n=n+1;
		cout<<"\nDanh sach moi la:"<<endl;
			for(int i=0;i<n;i++)
			a[i].xuat();
	}

int main()
{
	NGUOI *a;
	int n;
	a= new NGUOI[n];
	cout<<"nhap so nguoi can nhap: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\nnhap thong tin nguoi thu "<<i+1;
		a[i].nhap();
	}
	cout<<"\nthong tin cua nhap la: \n";
	for(int i=0;i<n;i++)
	{
		a[i].xuat();

	}
	cout<<"\nthong tin sau khi duoc sap xep la: \n";
	{
		for(int i=0;i<n-1;i++)
		{		
			for(int j=i+1;j<n;j++)
			{
			if(strcmp(a[i].getht(),a[j].getht())>0)
				doicho(a[i],a[j]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	cout<<"\nthong tin nhung nguoi co nghe nghiep bac si la: \n";
	{
		for(int i=0;i<n;i++)
		{		
			if(strcmp(a[i].getnn(),"bacsi")==0)
				a[i].xuat();
			}
		}
	cout<<endl;
	yc(a,n);
	yc1(a,n);
	a[100].yc2(a,n);
	a[100].yc3(a,n);
}