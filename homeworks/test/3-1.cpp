#include<iostream>
using namespace std;
class Point
{
	protected:
		int x;
		int y;
	public:
		Point(int x=0,int y=0);
};
class Circle:public Point
{
	protected:
		int radius;
	public:
		Circle(int x,int y,int r):Point(x,y),radius(r){}
};
class Cylinder:public Circle
{
	protected:
		int high;
	public:
		Cylinder(int x,int y,int r,int h):Circle(x,y,r),high(h){}
};
int main()
{
	Cylinder c(0,0,2,2);
