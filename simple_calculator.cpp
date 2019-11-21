#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
main()
{
	float a,b,c,d;double f;char z;
b:
	printf("\t\t\tAuthor: Muhammad Kumail");
	printf("\nWhat you want to choose?\a\n+ for ADD the numbers\n- for minus the numbers\nx for multiply the numbers\n/ for divide the numbers\n^ for Ans of power of number\ns for squa root\n! for fictorial\np for find Percentage\na for find average of numbers\nc for close\n");
a:
	z=getch();
	system("cls");
	switch(z)
	{
		case '+':
			printf("Enter how many numbers you want to enter: \a");
			scanf("%f",&c);f=0;d=0;
			while(d!=c)
			{
				printf("Enter value: \a");
				scanf("%f",&a);
				f+=a;d++;
			}
			printf("\nAns: %0.2f\a ",f);goto a;
		case '-':
			printf("Enter the 1st number:\a ");
			scanf("%f",&a);
			printf("Enter the 2nd number:\a ");
			scanf("%f",&b);
			printf("\nAns: %0.2f\a ",a-b);goto a;
		case 'x':
		case 'X':
			printf("Enter how many numbers you want to enter: \a");
			scanf("%f",&c);f=1;d=0;
			while(d!=c)
			{
				printf("Enter value: \a");
				scanf("%f",&a);
				f*=a;d++;
			}
			printf("\nAns: %0.2f\a ",f);goto a;
		case '/':
			printf("Enter the 1st number:\a ");
			scanf("%f",&a);
			printf("Enter the 2nd number:\a ");
			scanf("%f",&b);
			printf("\nAns: %0.2f\a ",a/b);goto a;
		case '^':
			printf("Enter the number:\a ");
			scanf("%f",&a);
			printf("Give power of number:\a ");
			scanf("%f",&b);
			printf("\nAns: %0.2f\a ",pow(a,b));goto a;
		case 's':
		case 'S':
			printf("Enter the number:\a ");
			scanf("%f",&a);
			printf("\nAns: %0.2f\a ",sqrt(a));goto a;
		case '!':
			printf("Enter the number don't exceed '170':\a ");
			scanf("%f",&b);
			f=1;a=b;
			while(a!=0)
			{
				f*=a;a--;
			}
			if(b<=10)
			{
				printf("\nAns: %0.2f\a ",f);goto a;
			}
			else
			{
				printf("\nAns: %0.2e\a ",f);goto a;
			}
		case 'p':
		case 'P':
			printf("Enter total marks:\a ");
			scanf("%f",&b);
			printf("Enter Obtain marks:\a ");
			scanf("%f",&a);
			printf("\nAns: %0.2f\a ",(a*100)/b);goto a;
		case 'a':
		case 'A':
			printf("Enter how many numbers you want to enter: \a");
			scanf("%f",&c);b=c;f=0;d=0;
			while(d!=c)
			{
				printf("Enter value: \a");
				scanf("%f",&a);
				f+=a;d++;
			}
			printf("\nAns: %0.2f\a ",f/b);goto a;
		case 'c':
		case 'C':
			break;
		default:
			printf("\nIts not a valid choice\a\n");goto b;
	}
	getch();
}
