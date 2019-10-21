#include <stdio.h>

void func1()
{
	printf("It is called from %s \n",__func__);
}

int main(void)
{
	printf("Hey!!! This is just for test to commit\n");
	//func1 call
	func1();
	return 0;
}

