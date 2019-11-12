#include <stdio.h>

void func1()
{
	printf("I am in %s \n",__func__);
}
void func2()
{
	printf("It is called from %s \n",__func__);
}

int main(void)
{
	printf("Hey!!! This is just for test to commit\n");
	//func1 call
	func1();
	func2();
	return 0;
}

