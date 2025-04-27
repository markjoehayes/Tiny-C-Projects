#include<stdio.h>

int main(void)
{
	int ow, ol;


	printf("Chance of happeneings: ");
	scanf("%d", &ow);
	printf("Chance of not happening: ");
	scanf("%d", &ol);

	/*two percentage signs to print '%'*/
	printf("Your odds of winning are  %2.1f%%, or %d:%d\n", 
	 (float)ow/(float) (ow + ol) * 100, ow, ol);

	return (0);
}
