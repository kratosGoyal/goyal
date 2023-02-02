#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,choice;
    int check;
	while(1)
	{
	printf("\nWELCOME TO DIMAAG KA BHOSDA");
	printf("\n1. Factorial Of A No.");
	printf("\n2. Prime No.");
	printf("\n3. Odd/Even No.");
	printf("\n4. Exit\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		printf("ENTER YOUR VALUE");
		scanf("%d",&c);
		b=1;
		for(a=1;a<=c;a++)
		{
			b=a*b;
		}
		printf("\n YOUR OUTPUT IS %d",b);
		break;



		case 2:
		printf("ENTER YOUR VALUE");
		scanf("%d",&c);
        check = 1;
		for(a=2;a<c;a++)
		{
			if(c%a==0)
			{
                check = 0;
                printf("%d is a non prime number\n",c);
				break;
			}
		}
        if(check == 1)
        {
		    printf("\n%d is a prime no.",c);
        }
		break;

		case 3:

		printf("ENTER YOUR VALUE");
		scanf("%d",&c);
		if(c%2==0)
		{
			printf("ODD");
		}
		else
		{
			printf("EVEN");
		}

		break;


		case 4:
		exit(0);
		break;

	}
}
}
