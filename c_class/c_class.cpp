// c_class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#ifndef c_class
#define c_class struct
#endif

c_class A{
	c_class A* a_this;//
	int (*setB)(c_class A*a_this,int b);
	int m_a;
	int m_b;
}; 

typedef  A classA;


int fun1(c_class A*a_this,int b){
	return a_this->m_b=b;
}

int main(int argc, char* argv[])
{
	printf("Hello World!\n");
	classA * p=NULL;
	classA a;
	a.a_this=&a;
	a.m_a=1;
	a.m_b=2;
	a.setB=fun1;

	p=&a;

	p->setB(p,3);
	printf("m_b =%d\n",p->m_b);

	(*p->setB)(p,4);

	printf("m_b =%d\n",p->m_b);

	getchar();
	return 0;
}

