#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class food
{	int foodno;
	char fn[30];    //Program to assign cost for specified food
	char ft[20];
	int cost;

	public:
		int calculate()
		{	if(strcmpi(fn,"idly")==0)
				return 10;
			else if(strcmpi(fn,"chappati")==0)
				return 20;
			else if(strcmpi(fn,"noodles")==0)
				return 25;
			else if(strcmpi(fn,"sambhar sadham")==0)
				return 30;
			else if(strcmpi(fn,"curd rice")==0)
				return 30;
			else
				return 0;
		}

		void input()
		{
			cout<<"Enter food no,name,type:\n";
			cin>>foodno;
			gets(fn);
			gets(ft);
			cost=calculate();
		}

		void output()
		{       if(cost>0)
			{	cout<<"\nRESULT:";
				cout<<foodno<<" ";
				puts(fn);
				puts(ft);
				cout<<cost;
			}
			else
			{	cout<<"NO ITEM FOUND";
			}
		}
};

void main()
{	clrscr();
	food f;
	f.input();
	f.output();
	getch();
}