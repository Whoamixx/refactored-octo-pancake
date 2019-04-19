#include<iostream>

using namespace std;
class Complex
{
	private:
		int Real;
		int Image;
	public:
		Complex(int r,int i):Real(r),Image(i){}
		void Display();
};
void Complex::Display()
{
	cout<<Real<<"+"<<Image<<"i"<<endl;
}
int main()
{
	Complex c1(20,40),c2(0,0),c3(20,40);
	c1.Display();
	c2.Display();
	c3.Display();
	return 0;
}
