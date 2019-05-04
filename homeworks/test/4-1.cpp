#include<iostream>
#include<cstring>
#include<assert.h>
using namespace std;
class Employee
{
	protected:
		int number;
		char *name;
		double salay;
	public:
		void Show();
		Employee(const int,const char *);
};
Employee::Employee(const int number_,const char *name_)
{
	number=number_;
	name=new char[strlen(name_)+1];
	assert(name!=0);
	strcpy(name,name_);
}
void Employee::Show()
{
	cout<<"The people is a Employee"<<endl;
}
class Manager:public Employee
{
	protected:
		int test;
	public:
		void MShow();
		Manager(int number_,const char *name_,int=0);
};
Manager::Manager(const int number_,const char *name_,int test_):Employee(number_,name_){test=test_;}
void Manager::MShow()
{
	cout<<"The people is a Manager"<<endl;
	cout<<"The people salay is no"<<endl;
}
class Timer:public Employee
{
	protected:
		double time;
		double timesalay;
	public:
		void TShow();
		void TSalay();
		Timer(const int number_,const char *name_,double time_,double timesalay_):Employee(number_,name_),time(time_),timesalay(timesalay_){}
};
void Timer::TShow()
{
	cout<<"The people is a Timer"<<endl;
}
void Timer::TSalay()
{
	salay=time*timesalay;
	cout<<"The people salat is "<<salay<<endl;
}
class Workpiece:public Employee
{
	protected:
		double workpiece;
		double workpiecesalay;
	public:
		void WShow();
		void WSalay();
		Workpiece(const int number_,const char *name_,double workpiece_,double workpiecesalay_):Employee(number_,name_),workpiece(workpiece_),workpiecesalay(workpiecesalay_){}
};
void Workpiece::WShow()
{
	cout<<"This is a Workpiece"<<endl;
}
void Workpiece::WSalay()
{
	salay=workpiece*workpiecesalay;
	cout<<"The people salay is "<<salay<<endl;
}
int main()
{
	Manager A(1,"chen",0);
	A.Show();
	Timer B(2,"cao",2,100);
	B.TShow();
	B.TSalay();
	Workpiece C(3,"dong",100,10000);
	C.WShow();
	C.WSalay();
	return 0;
}
