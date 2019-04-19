#include<iostream>

const double pi=3.14;
using namespace std;

double area(double a){return pi*a*a;}
double area(double a,double b){return a*b;}
double perime(double a){return 2*pi*a;}
double perime(double a,double b){return 2*(a+b);}

int main()
{
	char d;
	cout<<"please input the choose(circle is c rectangle is r:";
	cin>>d;
	if(d=='c')
	{
		cout<<endl;
		cout<<"please input the radius:";
		int r;
		cin>>r;
		cout<<"so,area is "<<area(r)<<endl;
		cout<<"so,perime is "<<perime(r)<<endl;
	}
	else if(d=='r')
	{
		cout<<endl;
		cout<<"please input the wid and len:";
		int e,f;
		cin>>e>>f;
		cout<<"so,area is "<<area(e,f)<<endl;
		cout<<"so,perime is "<<perime(e,f)<<endl;
	}
	else
	{
		cout<<"please input the correct letter"<<endl;
		return -1;
	}
	return 0;
}
