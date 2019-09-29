#include<stdio.h>
/*int main(void){
printf("%d %d\n",func1(3,8),func2(3,8));
return 0;
}
func1(int a, int b){
if(a>b)
return 0;
return b+func1(a,b-1);
}
func2(int a, int b){
if(a>b)
return 0;
return a+func2(a+1,b);
}*/
/*int main(void){
printf("%d\n",func(3,8));
return 0;
}
int func(int a,int b){
if(a>b)
return 1000;
return a+func(a+1,b);
}*/
/*
int main(void){
func1(10,18);
printf("\n");
func2(10,18);
return 0; }
void func1(int a, int b){
if(a>b) return;
printf("%d ",b);
func1(a, b-1); }
void func2(int a, int b){
if(a>b) return;
func2(a,b-1);
printf("%d ",b); }
*//*int main(void){
printf("%d\n",func(14837));
return 0;
}
int func(int n){
return (n)? n%10+func(n/10):0;
}*/
/*int main(void){
printf("%d\n",count(17243));
return 0;
}
int count(int n){
if(n==0)
return 0;
return 1+count(n/10);
}*/
int main(void){
printf("%d\n",count(123212,2));
return 0;
}
int count(long int n,int d){
if(n==0)
return 0;
else if(n%10==d)
return 1+count(n/10,d);
else
return count(n/10,d);
}
