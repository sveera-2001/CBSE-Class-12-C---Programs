#include<iostream.h>
#include<conio.h>
#include<math.h>
float calecell(float a,float b,float c,float d,float f,float g)
{	float e;
	e=a-(0.0591/b)*log10(pow(c,f)/pow(d,g));
	return e;
}
float calcconr(float v,float a,float b,float c,float g)
{       float e1,e2,e3,e4,e5,e6,y,z;
	e1=0.0591/b;
	e2=a-v;
	e3=e2/e1;
	e4=pow(10,e3);
	e5=c/e4;
	e6=pow(e5,(1/g));
	return e6;

}
float calcconp(float v,float a,float b,float d,float f)
{       float e1,e2,e3,e4,e5,e6,y,z;
	e1=0.0591/b;
	e2=a-v;
	e3=e2/e1;
	e4=pow(10,e3);
	e5=e4/d;
	e6=pow(e5,(1/f));
	return e6;

}
void main()
{	clrscr();
	cout<<"ENTER 0 FOR UNKNOWN VALUE\n\n";
	float a,b,c,d,e,v,f,g;
	cout<<"\nEnter E cell value:";
	cin>>v;
	cout<<"\nEnter E'cell value:";
	cin>>a;
	cout<<"\nEnter number of electrons transfered:";
	cin>>b;
	cout<<"\nEnter concentration of non solid product:";
	cin>>c;
	cout<<"\nEnter number of atoms of non solid product:";
	cin>>f;
	cout<<"\nEnter concentration of non solid reactant:";
	cin>>d;
	cout<<"\nEnter number of atoms of non solid reactant:";
	cin>>g;
	if(v==0)
	{	e=calecell(a,b,c,d,f,g);
		cout<<"\nResult:"<<e;
	}
	else if(d==0)
	{	e=calcconr(v,a,b,c,g);
		cout<<"\nResult:"<<e;
	}
	else if(c==0)
	{	e=calcconp(v,a,b,d,f);
		cout<<"\nResult:"<<e;
	}
	getch();
}