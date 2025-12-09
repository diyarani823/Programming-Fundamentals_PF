#include<stdio.h>
typedef struct
{
	float real;
	float img;
}complex;
complex inputcomplex(int);
complex addcomplex(complex,complex);
complex multicomplex(complex,complex);
int main()
{
	printf("Add and mltiply 2 complex num");
	complex c1=inputcomplex(1);
	complex c2=inputcomplex(2);
	complex add=addcomplex(c1,c2);
	printf("the addition of complex is %.2f+%.2f=",add.real,add.img);
}
complex inputcomplex(int n)
{
	complex c;
	printf("enter complex %d real part",n);
	scanf("%f",&c.real);
	printf("enter complex %d img part",n);
	scanf("%f",&c.img);
	return c;
	
}
complex addcomplex(complex c1,complex c2)
{
	complex c;
	c.real=c1.real+c2.real;
	c.img=c1.img+c2.img;
	return c;
}
complex multicomplex(complex c1,complex c2)
{
	complex c;
	c.real=(c1.real*c2.real)-(c1.img*c2.img);
	c.img=(c1.real*c2.img)+(c1.img*c2.real);
	return c;
}
