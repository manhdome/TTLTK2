#include <iostream.h>
#include <stdio.h>
#include <conio.h>
class mydate
{
private:
	int d,m,y;
public:
    mydate() 
     {
          d=0; m=0; y=0;
     }
	mydate(int dd,int mm,int yy)
     { 
          d=dd;m=mm;y=yy;
     }
    ~mydate(){}
	void display()
     {
		cout<<d<<"-"<<m<<"-"<<y;
	 }
  	int GetNam()
  	{
  		return y;
  	}
};
class person:public mydate
{
private:
	char name[30];
	char address[40];
    long int phone;   
public:
person():mydate()
	{
         strcpy(name,"");
		strcpy(address,"");
		phone=0;
     }
person(char *ten,int dd,int mm,int yy,char *dc,long int dt):mydate(dd,mm,yy)
    {
		strcpy(name,ten);
		strcpy(address,dc);
		phone=dt;
	}
~person(){}
bool operator > (person  x)
	{
		return GetNam()>x.GetNam();
	}
void display()
     {
		cout<<"\nName :"<<name;
		cout<<"\nAddress: "<<address;
		cout<<"\nPhone: "<<phone;
		cout<<"\nBirthday: "; mydate::display();
		cout<<"\n";
	}
};
main()
{
char ten[30],dc[40];   int d,m,y, n;   long int dt;
person p[20];
do
{
	cout<<"\n Nhap so nguoi n = "; cin>>n;
}
while(n<0);
for(int i=0;i<n;i++)
{
	cout<<"\nNhap thong tin nguoi thu "<<i+1<<" : ";
	cout<<"\nName: "; cin.ignore(1);  gets(ten);
	cout<<"Address: ";gets(dc);
	cout<<"Phone: ";cin>>dt;
	cout<<"Birthday( ngay, thang, nam): ";cin>>d>>m>>y;
	   p[i]=person(ten,d,m,y,dc,dt);
 }
 cout<<"\n Hien thi danh sach sau khi nhap :"<<endl;
	for(int i=0;i<n;i++) p[i].display();
	for(int i=0;i<n;i++)
 	for(int j=i+1;j<n;j++)
 	if(p[i]>p[j])
 		{
 			person tg= p[i];
 					p[i]=p[j];
 					p[j]= tg;
 	   }
cout<<"\n Hien thi DS sau sap xep theo nam sinh"<<endl;
for(int i=0;i<n;i++)
       p[i].display();
}



