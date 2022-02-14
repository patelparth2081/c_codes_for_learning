//printAtoZ.c -> parth patel
/*if here we want to print A-Z -> 65-90 
						   a-z -> 97-122
						   0-9 -> 48-57
*/
#include<stdio.h>
int main()
{
	int i;
	for(i=65;i<=90;i++)
	{
		printf("%c ",i);
	}
	return 0;
}