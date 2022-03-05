#include<iostream.h>
class person
{
	protected:
		char name[30];
		char address[40];
		long int phone;
	public:
		person(){}
		person(char *ten,char *dc,long int dt)
       	{
			strcpy(name,ten);
			strcpy(address,dc);
			phone=dt;
	   	}
	void nhap()
	{
		cin.ignore();
		cout<<"\ name: ";
		cin.getline(name,30);
		cout<<"\ address: ";
		cin.getline(address,40);
		cout<<"\ phone: ";
		cin>>phone;
	}   
};
class officer: public person
{
	protected:
		float salary;
	public:
		officer()
 		{ 
          }
		officer(char *ten,char *dc,long int dt,float sal):
		person(ten,dc,dt)
         {
		salary=sal;
		}
     bool operator !=(  float a )
		{
			return  salary != a ;		
		} 	
     char * GetAdd()
         {
  		return address;
     }
     void nhap()
     {	person::nhap();
     cout<<"\ salary: ";
     	cin>>salary;
     }
};
class manager: public officer
{
	private:
		float extra;
	public:
	manager ()
	{
	}
	manager(char *ten,char *dc,long int dt,float sal,float pc) :officer(ten,dc,dt,sal)
    {
		extra=pc;
	}
	void nhap()
	{
		officer::nhap();
		cout<<"\ extra: ";
		cin>>extra;
	}
	void outscreen()
    {
		cout<<"\n=============================\n";
		cout<<"\nName: "<<name;
		cout<<"\nAddress: "<<address;
		cout<<"\nPhone: "<<phone;
		cout<<"\nSalary: "<<salary;
		cout<<"\nExtra: "<<extra;
	}
	bool Kt()
	{
		if(strcmpi(GetAdd(), "Ha Noi") == 0)
    	return 1;
	return 0;
	}
};
main()
{	
	manager a[100];
	int n;
	cout<<"nhap so doi tuong: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap thong tin doi tuong thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\n Danh sach doi tuong can tim"<<"\n";
	int kt=0;
	for(int i=0;i<5;i++) 
	{  
   if((a[i].Kt()==1 && a[i]!= 10000000))
	{a[i].outscreen();
		kt++;}
 	}
 	if(kt==0)
 	{
 	cout<<"\nkhong co doi tuong can tim trong danh sach\n";
 	} 
}


