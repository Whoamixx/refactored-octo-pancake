#include<iostream>
const double pi=3.14;

class Circle
{
	public:
		double area(){return x*x*pi;}
		Circle(double a):x(a){}
	private:
		double x;
};
class Rectangle
{
	public:
		double area(){return x*y;}
		Rectangle(double a,double b):x(a),y(b){}
	private:
		double x,y;
};
int main()
{
	std::cout<<"input shape"<<std::endl;
	std::cout<<"if circle,input c,if Rectangle,input r"<<std::endl;
	char n;
	double r,c,d;
	std::cin>>n;
	if(n=='c')
	{
		std::cout<<"please input radius"<<std::endl;
		std::cin>>r;
		Circle r1(r);
		std::cout<<"so,Circle area="<<r1.area()<<std::endl;
	}
	else
	{
		std::cout<<"input length and width"<<std::endl;
		std::cin>>c>>d;
		Rectangle s1(c,d);
		std::cout<<"so,area is "<<s1.area()<<std::endl;
	}
	return 0;
}
