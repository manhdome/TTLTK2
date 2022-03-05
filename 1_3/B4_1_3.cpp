#include <iostream.h>
class AnPham {
protected:
	char ten[30];
	double gia;
public:
	void nhap()
	 { cout<<"\n Nhap ten: "; cin.ignore(1); gets(ten);
	   cout<<"\n Nhap gia thanh: ";  cin>>gia;
	}
	void hienthi()
	{
	 cout<<"\nTen     :" <<ten;
	 cout<<"\nGia thanh :"<<gia<<endl;
	}
};
class sach: public AnPham{     
   private: 
       int sotrang;
	public:
	 void nhap()
	   { 
	   AnPham::nhap();
	   cout<<"\n Nhap so trang cua sach nay: ";
	     cin>>sotrang;
	   }
	void hienthi()
	{
		 AnPham::hienthi();
	  cout<<"So trang  :"<<sotrang<<endl;
	  cout<<endl;
	 }
friend void KiemTra(sach s[],int n){
 	for(int i=0;i<n;i++)
 		if(s[i].sotrang>500)
 			s[i].hienthi();
  }
 };
class dia: public AnPham {     
	private: 
 		int sophut;
	public:
	  void nhap()
        { 
	    AnPham::nhap();
		cout<<"\n Nhap so phut cho dia nay: ";
	      cin>>sophut;
	    }
	  void hienthi()
        {
		 AnPham::hienthi(); 
		 cout<<"So phut   :"<<sophut<<endl;
	      cout<<endl;
	    }
	  int TimTen(char x[]){
	  	if(strcmp(ten,x)==0)
	  		return 1;
  		return 0;
	   }
};
main()
{
sach s[50];
int n,i,m; 
cout<<"nhap so sach: ";
cin>>m;
for(int i=0;i<m;i++)
{
	cout<<"\nnhap thong so sach thu "<<i+1<<endl;
	s[i].nhap();
}  
cout<<"\n--------Sach co so trang > 500 ------"<<endl;
	KiemTra(s,m);
   cout<<"\n\nSo dia can xuat ban: "<<endl;
    cin>>n;

    dia d[50];
   for(i=0;i<n;++i)
     {
      cout<<"\ Dia: "<<i<<endl;
      d[i].nhap();
      }
   char t[30];
   cin.ignore(1);
   cout<<"\n-Nhap ten dia CD can tim1: ";
   cin.getline(t,30);
    for(i=0;i<n;i++)
	if (d[i].TimTen(t))  
	      d[i].hienthi();
}
