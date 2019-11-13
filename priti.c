//============================================================================
// Name        : malloc.cpp
// Author      : Tushar Anil Mulik
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;



int main()// Using malloc
{
	//int no1 = 3;

	//cin>>int *ptr = (int *) malloc(sizeof(int));
	int *ptr = (int *) malloc(sizeof(int));
	cout<<"The value of no1 is : "<<sizeof(*ptr);

	return 0;
}


int main2()//Using new keyword
{
	//int no1 = 3;

	//cin>>int *ptr = (int *) malloc(sizeof(int));
	int* ptr = new int;
	cout<<"The value of no1 is : "<<sizeof(*ptr)<<endl;
	delete ptr;
	cout<<"After deleting *ptr : "<<sizeof(*ptr)<<endl;
	ptr = NULL;
	cout<<"The value of ptr : "<<ptr;


	return 0;
}

