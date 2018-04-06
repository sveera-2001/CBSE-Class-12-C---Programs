#include<iostream.h>
#include<conio.h>
				    //Program to calculate sum of hours mins and secs
class time
{	int hours,mins,secs;
	public:
		void gettime()
		{	cout<<"Enter time(h-m-s):";
			cin>>hours>>mins>>secs;
		}
		void puttime()
		{	cout<<"\nRESULT:\n\n";
			cout<<"Hours:"<<hours;
			cout<<"\nMins:"<<mins;
			cout<<"\nSecs:"<<secs;
		}
		time convert(time,time);
};
time time::convert(time t1,time t2)
{	time t3;
	t3.mins=(t1.secs+t2.secs)/60;
	t3.secs=(t1.secs+t2.secs)%60;
	t3.hours=(t1.mins+t2.mins)/60;
	t3.mins+=(t1.mins+t2.mins)%60;
	t3.hours+=(t1.hours+t2.hours);
	return (t3);
}
void main()
{       clrscr();
	time t1,t2,t3,t4;
	t1.gettime();
	t2.gettime();
	t4=t3.convert(t1,t2);
	t4.puttime();
	getch();
}