#include<stdio.h>

int main()
{
int a[10] = {1,5,4,8,9,2,0,6,11,7};
int i,k;
printf("Enter the number you want to check if it is in the array or not\n");
scanf("%d", &k);
for(i=0;i<10;i++)
{
	if(a[i]==k)
	{
		printf("YES!! Number is present\n");
		//break;
        //return 0;
    }
	else
	{
		printf("NO!! number is not present\n");
		break;
	}
}
//printf("NO!! number is not present\n");
printf("This is a number following sequence of elements in an array\n");
for(i=0;i<10;i++)
{
printf("%d",a[i]);
}
printf("\n");
return 0;
}