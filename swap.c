#include<stdio.h>

int main()
{
	int a,b;

	printf("SWAPPING PROGRAM!");
	printf("BEFORE SWAPPING!!!");
	printf("\nENTER THE VALUE OF A: ");
	scanf("%d",&a);
    printf("\nENTER THE VALUE OF B: ");
	scanf("%d",&b);

    printf("\nVALUE OF A: %d",a);
    printf("\nVALUE OF B: %d",b);

         a=a+b;
		 b=a-b;
		 a=a-b;

    printf("AFTER  SWAPPING!!!");
    printf("\nVALUE OF A: %d",a);
    printf("\nVALUE OF B: %d",b);

    return 0;

}

