#include<iostream.h>
#include<conio.h>

class distance
{	int feet,inches;
	public:
		void getdistance();
		void putdistance();
		distance convert(distance,distance);
};
void distance::getdistance()
{	cout<<"Enter length in both feet and inches:";
	cin>>feet>>inches;
}
void distance::putdistance()
{	cout<<"RESULT:\n\n";
	cout<<"Feet:"<<feet;
	cout<<"\nInches:"<<inches;
}
distance distance::convert(distance d1,distance d2)
{	distance d3;
	d3.feet=(d1.inches+d2.inches)/12;
	d3.inches=(d1.inches+d2.inches)%12;
	d3.feet+=d1.feet+d2.feet;
	return d3;
}

void main()
{	clrscr();
	distance d1,d2,d3,d4;
	d1.getdistance();
	d2.getdistance();
	d4=d3.convert(d1,d2);
	d4.putdistance();
	getch();
}