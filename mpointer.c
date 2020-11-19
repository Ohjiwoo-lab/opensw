#include <stdio.h>

//the original form of function
void func1(int* p);
void func2(int** p);
void func3(int*** p);
void func4(int**** p);

//function main
int main() {
	int i=100;

	int *p, **dp, ***tp;

	p=&i;
	dp=&p;
	tp=&dp;

	func1(&i);  //func1 execution
	printf("i=%d\n",i);  //i print

	func2(&p);  //func2 execution
	printf("*p=%d\n",*p);  //print *p

	func3(&dp);  //func3 execution
	printf("**dp=%d\n",**dp);  //print **dp 

	func4(&tp);  //func4 execution
	printf("***tp=%d\n",***tp);  //print ***tp

	printf("i=%d\n",i);  //print modificated i

	return 0;
}

//function func1
void func1(int* p)
{
	*p=*p+100;
}

//function func2
void func2(int** p)
{
	**p=**p+100;
}

//function func3
void func3(int*** p)
{
	***p=***p+100;
}

//function func4
void func4(int**** p)
{
	****p=****p+100;
}
