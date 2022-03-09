#include<stdio.h>
#include<stdlib.h>

//Function Declaration
void binary_no_ge(int );
void binary_number(int );


int main()
{
int n;
printf("Enter the No. till you want to print binary numbers : ");
scanf("%d",&n);
printf("\nBinary numbers from 1 to %d : ",n);
printf("\n");
binary_no_ge(n);
}

//Function Definition
void binary_no_ge(int n)
{
for(int i = 0; i<= n; i++)
{
binary_number(i); //call the function to print binary value of paricular number
}

}

//This function prints the binary value of binary no of decimal by calling of binary_no_get function
void binary_number(int n)
{
int bin_num[1000];
int i = 0,j;

while (n > 0)
{
bin_num[i] = n % 2;
n = n / 2;
i++;
}

for(j = i - 1; j >= 0; j--)
{
printf("%d",bin_num[j]);
}
printf("\n");
}