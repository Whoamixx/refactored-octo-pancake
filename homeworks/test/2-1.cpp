#include<iostream>
#include<cstring>
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
		static double p;
	public:
		Student(int number_,const char *name_,double score_);
		void StudentShow();
		static void Show();
};
int Student::allnumber=0;
double Student::highscore=0;
double Student::lowscore=101;
double Student::allscore=0;
double Student::p=0;
int main()
{
	Student stu1(1,"jiachengdong",99);
	stu1.StudentShow();
	Student stu2(2,"shaofeichen",100);
	stu2.StudentShow();
	Student stu3(3,"hongyucao",80);
	stu3.StudentShow();
	Student::Show();
	return 0;
}

void Student::StudentShow()
{
	cout<<"number:"<<number<<" name:"<<name<<" score:"<<score<<endl;
}

Student::Student(int number_,const char *name_,double score_)
{
	number=number_;
	strcpy(name,name_);
	score=score_;
	allnumber++;
	allscore+=score_;
	if(score_>highscore){highscore=score_;}
	if(score_<lowscore){lowscore=score_;}
}
void Student::Show()
{
	p=allscore/allnumber;
	cout<<"allnumber:"<<allnumber<<" allscore:"<<allscore<<" highscore:"<<highscore<<" lowscore:"<<lowscore<<" avenge:"<<p<<endl;
}
