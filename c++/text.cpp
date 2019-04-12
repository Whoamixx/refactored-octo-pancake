#include<iostream>
#include<fstream>

int main()
{
	std::ofstream outfile;
	outfile.open("/github/refactored-octo-pancake/c++/test.txt",std::ios::app);
	outfile<<"This is a test";
	outfile.close();
	return 0;
}
