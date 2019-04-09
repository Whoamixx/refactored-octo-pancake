#include<iostream>
#include<cstdio>
int main()
{
	using namespace std;
	int i,j,temp,N;
	int dong[20];
	cout<<"please input some number:";
	for(i=0;getchar()!='\n';i++)
	{
		cin>>dong[i];
	}
	N=i;
	cout<<"sort after:";
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1;j++)
		{
			if(dong[j]<dong[j+1])
			{
				temp=dong[j];
				dong[j]=dong[j+1];
				dong[j+1]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		cout<<dong[i]<<" ";
	}
	cout<<" "<<endl;
	return 0;
}
