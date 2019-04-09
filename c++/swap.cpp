#include<iostream>

using namespace std;
void swap(int &x,int &y);
int main()
{
	int a,b;
	cout<<"please input some two number:";
	cin>>a>>b;
	swap(a,b);
	cout<<"so,a="<<a<<",b="<<b<<endl;
	return 0;
}
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
