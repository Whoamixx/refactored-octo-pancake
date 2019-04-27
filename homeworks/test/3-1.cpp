#include<iostream>
#define PI 3.1415
using namespace std;
class Point
{
	protected:
		int x;
		int y;
	public:
		Point(int a,int b):x(a),y(b){cout<<"Point construction"<<endl;}
		~Point(){cout<<"Point Deconstruction"<<endl;}
};
class Circle:public Point
{
	protected:
		int radius;
		double area;
	public:
		Circle(int x,int y,int r):Point(x,y),radius(r){cout<<"Circle construction"<<endl;}
		~Circle(){cout<<"Circle Deconstruction"<<endl;}
		void Area();
};
class Cylinder:public Circle
{
	protected:
		int high;
		double volume;
	public:
		Cylinder(int x,int y,int r,int h):Circle(x,y,r),high(h){cout<<"Cylinder construction"<<endl;}
		~Cylinder(){cout<<"Cylinder Deconstruction"<<endl;}
		void Volume();
};
void Circle::Area()
{
	area=PI*radius*radius;
	cout<<"The area is "<<area<<endl;
}
void Cylinder::Volume()
{
	volume=area*high;
	cout<<"The volume is "<<volume<<endl;
}
int main()
{
	cout<<"Enter main"<<endl;
	Cylinder c(0,0,2,2);
	c.Area();
	c.Volume();
	cout<<"Out main"<<endl;
	return 0;
}

