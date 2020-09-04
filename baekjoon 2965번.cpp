#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int count = abs(b-c) > abs(b-a) ? abs(b-c) : abs(b-a);
	printf("%d",count - 1);
	return 0;
}
