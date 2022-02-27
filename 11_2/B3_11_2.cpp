#include<iostream.h>
class SP
{
	private:
		int pt;
		int pa;
	public:
		SP();
		SP(int pt,int pa);
		void in();
		SP tong2(SP p);
};
SP::SP()
{
	this->pt=0;
	this->pa=0;
}
SP::SP(int pt,int pa)
{
	this->pt=pt;
	this->pa=pa;
}
void SP::in()
{
	if(this->pa>=0)
		cout<<"  "<<this->pt<<" + "<<this->pa<<"*j";
	else
		cout<<"  "<<this->pt<<" - "<<abs(this->pa)<<" * j ";	
}
SP SP::tong2(SP p)
{
	SP tong;
	tong.pt=this->pt+p.pt;
	tong.pa=this->pa+p.pa;
	return tong;
}
int main()
{
	SP p1(5,-8);
	SP p2(-7,3);
	SP p3(6,-9);
	SP p4,p5;
	p4=p1.tong2(p2);
	p5=p3.tong2(p4);
	cout<<"Tong 3 so phuc vua khoi tao la:";
	p5.in();
	cout<<endl;
	return 0;
}
