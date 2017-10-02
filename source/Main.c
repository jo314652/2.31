#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int num=0;
	printf("number\tsquare\tcube\n");
	for (num; num < 11; num++)
	{
		printf("%d\t%d\t%d\n", num, num*num, num*num*num);
	}
	


	system("pause");
	return 0;
}