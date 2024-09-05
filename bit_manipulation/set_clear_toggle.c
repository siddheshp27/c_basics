#include <stdio.h>

int main()
{
	int num;
	int pos;
	printf("Enter the number and position\n");
	scanf("%d", &num);
	scanf("%d", &pos);
	
	int mask = 1<<(pos-1);
printf("Setting bit at position : %d\n", pos);
printf("%d\n", num | mask);
printf("Clearing bit at position : %d\n", pos);
printf("%d\n", 10 & (~mask));
printf("Toggling bit at position : %d\n", pos);
printf("%d\n", num ^ mask);
return 0;
}
	
