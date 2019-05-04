#include<iostream>
using namespace std;
class Employee
{
	protected:
		int number;
		char *name;
		double salay;
	public:
		void Show();
		Employee(int number_,const char *name_){number=number_;*name=*name_;}
};
void Employee::Show()
{
	cout<<"The people is a Employee"<<endl;
}
class Manager:public Employee
{
	public:
		void MShow();
		Manager(int number_,const char *name_,int test_):Employee(number_,*name_){}
};
void Manager::MShow()
{
	cout<<"The people is a Manager"<<endl;
}
class Timer:public Employee
{
	protected:
		double time;
		double timesalay;
	public:
		void TShow();
		void TSalay();
};
void Timer::TShow()
{
	cout<<"The people is a Timer"<<endl;
}
void Timer::TSalay()
{
	salay=time*timesalay;
}
class Workpiece:public Employee
{
	protected:
		double workpiece;
		double workpiecesalay;
	public:
		void WShow();
		void WSalay();
};
void Workpiece::WShow()
{
	cout<<"This is a Workpiece"<<endl;
}
void Workpiece::WSalay()
{
	salay=workpiece*workpiecesalay;
}
int main()
{

