#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

int num = atoi(argv[1]);
if((num & 1) == 0)
	printf("The Number %d is even\n", num);

if((num & 1) == 1)
	printf("The Number %d is odd\n", num);
return 0;
}
