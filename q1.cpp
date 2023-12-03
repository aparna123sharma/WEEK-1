#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
//Q. 1 Write a program to accept height and base of triangle and calculate area of 
//Triangle.
//int h,b,a;
//printf("Enetr the Height and the Base of the triangle:");
//scanf("%d %d",&h,&b);
//a=(h*b)/2;
//printf("area of the triangle is %d",a);

//Q. 2 Write a program to accept radius of circle and calculate area of circle
//int r,a,pi=3.14;
//printf("Enter the radius of the circule:");
//scanf("%d",&r);
//a=pi*r*r;
//printf("Area of the circle is %d ",a);

//Write a program to find the lowest marks of three students using conditional 
//operator.
//  char marks[3];
//  printf("enter the marks of first student:");
//  scanf("%d",&marks[0]);
//  printf("Enetr the marks of second student:");
//  scanf("%d",&marks[1]);
//  printf("Enter the  marks of third student: ");
//  scanf("%d",&marks[2]);
//  if(marks[0]<marks[1] && marks[0]<marks[2])
//  {
//  	printf("First student marks is lowest ,marks is %d",marks[0]);
//  }
//  else if (marks[1]<marks[2])
//  {
//  	printf("Second student  marks is lowest ,marks is %d",marks[1]);
//  }
//  else 
//  {
//  	printf("Third student marks is lowest ,marks is %d",marks[2]);
//  }

//Q4.Write a program to Calculate Compound Interest.
//int a,p,t,n;
//float r;
//A	=	final amount
//P	=	initial principal balance
//r	=	interest rate
//n	=	number of times interest applied per time period
//t	=	number of time periods elapsed
//printf("Please enter the initial principal:");
//scanf("%d",&p);
//printf("Please enter the  interest rate : ");
//scanf("%f",&r);
//printf("Please enter the time period: ");
//scanf("%d",&t);
//printf("Please enter the number of times interest applied per time period:");
//scanf("%d",&n);
//a=p*pow((1+r/n),n*t);
//printf("the compound rate is %.2f",a);

//Q. 5 Write a program to Calculate Cube of a Number.
int n,c;
printf("Please enter the number:");
scanf("%d",&n);
//c= n*n*n;
c=pow(n,3);
printf("Cube of the number:%d",c);
}