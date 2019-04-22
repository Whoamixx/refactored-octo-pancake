#include<iostream>
using namespace std;

class Student
{
	private:
		int number;
		char name[10];
		double score;
		static int allnumber;
		static double allscore;
		static double highscore;
		static double lowscore;
	public:
		void output();
		Student(int number_,char *name_,double s);
};
void Student::output()
{
	cout<<"number:"<<number<<" name:"<<name<<" score:"<<score<<endl;
}
Student::Student(int number_,char *name_，double s)
{
	number=number_;
	strcpy(name,name_);
	score=s;
