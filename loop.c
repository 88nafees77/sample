#include<stdio.h>
#include<limits.h>
int main(){
//	int a=625,b=2394,c=12345;
//printf("%5d,%5d,%5d\n",a,b,c);
//printf("%5d,%4d,%3d\n",a,b,c);
//	float b=123.1265;
//printf("%f",b);
//printf("%12.2f",b);
//printf("%23.2f",b);
//int a=4000000000;
/*unsigned int b=4000000000;
printf("a=%d, b=%u\n",a,b);
printf("a=%d,b=%u\n",INT_MAX,UINT_MAX);*/
/*a1=2;
b1=6.8;
a2=4.2;
b2=3.57;
a3=9.82;
b3=85.673;
printf("%3.1f,%4.2f\n”,a1,b1);
printf(“%5.1f,%6.2f\n”,a2,b2);
printf(“%7.1f,%8.2f\n”,a3,b3);*/
/*
		float a1,b1,a2,b2,a3,b3;
a1=2;
b1=6.8;
a2=4.2;
b2=3.57;
a3=9.82;
b3=85.673;
//printf("%3.1f,%4.2f\n",a1,b1);
printf("%5.1f,%6.2f\n",a2,b2);
//printf(“%7.1f,%8.2f\n”,a3,b3);
*/
/*	int a=-3;
a=-a-a+!a;
printf("%d\n",a);*/
/*	int a=2,b=1,c,d;
c=a<b;
d=(a>b)&&(c<d);
printf("c=%d, d=%d\n",c,d);*/

/*	int a=9,b=15,c=16,d=12,e,f;
e=!(a<b||b<c);
f=(a>b?a-b:b-a);
printf("e=%d,f=%d\n",e,f);*/
/*	int a=5;
a=6;
a=a+5*a;
printf("a=%d\n",a);*/
/*	int a=5;
a=6;
a=a+5*a;
printf("a=%d\n",a);*/
/*	int x=8,y,z;
x++;
y=++x++;
z=(x+y)--;
printf("x=%d,y=%d,z=%d\n",x,y,z);*/
	int a=4,b=8,c=3,d=9,z;
z=a++ + ++b * c-- - --d;
printf("%d,%d,%d,%d,%d\n",a,b,c,d,z);
	return 0;
}
