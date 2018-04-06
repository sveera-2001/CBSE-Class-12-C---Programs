#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student              //Program  calculate sum of marks of students
{	int sno;
	char sname[20];
	float m1,m2,m3,t;

	float calculate()
	{	return (m1+m2+m3);
	}

	public:
		void input()
		{	cout<<"Enter the details:"<<endl;
			cin>>sno;
			gets(sname);
			cin>>m1>>m2>>m3;
			t=calculate();
		}
		void output()
		{	cout<<"RESULT:\n";
			cout<<sno<<" ";puts(sname);cout<<"!"<<t;

		}
};

void main()
{	clrscr();
	student s[50];
	int n,i;
	cout<<"Enter the number of students:";
	cin>>n;
	for(i=0;i<n;++i)
	{	s[i].input();
	}
	for(i=0;i<n;++i)
	{	s[i].output();
	}

	getch();
}

