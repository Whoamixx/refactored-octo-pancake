#include<iostream>
#include<math.h>
using namespace std;

class Rectangle
{
	protected:
		double Left;
		double Top;
		double Right;
		double Bottom;
		double Length;
	public:
		void Diagonal();
		void Show();
		Rectangle(double l,double t,double r,double b):Left(l),Top(t),Right(r),Bottom(b){}
};
void Rectangle::Diagonal()
{
	Length=sqrt((Left-Right)*(Left-Right)+(Top-Bottom)*(Top-Bottom));
}
void Rectangle::Show()
{
	cout<<"("<<Left<<","<<Top<<")"<<"("<<Right<<","<<Bottom<<")"<<endl;
	cout<<"Length is "<<Length<<endl;
}
int main()
{
	Rectangle *r1=new Rectangle(10,10,20,20);
	r1->Diagonal();
	r1->Show();
	delete r1;
	return 0;
}
