#include<stdio.h>
#include<stdlib.h>

void sort_merge(int [], int [], int, int);
void display(int [],int);


int main()
{
//int x[] = {1, 5, 9, 13, 17};
//int y[] = {2, 6, 10};
//int m = sizeof(x)/sizeof(x[0]);
//int n = sizeof(y)/sizeof(y[0]);

int m,n,i;

printf("Enter no. of elements you want in X[]:\n");
scanf("%d", &m);
printf("\n\nEnter no. of elements you want in Y[]:\n");
scanf("%d", &n);
int x[m];
int y[n];

printf("\nEnter elements of X[] in sorted manner\n");
for(i=0;i<m;i++)
{
scanf("%d", &x[i]);
}

printf("\nEnter elements of Y[] in sorted manner\n");
for(i=0;i<n;i++)
{
scanf("%d", &y[i]);
}




printf("Arrays before sorting in-place are:\n");
printf("X[]: {");
display(x,m);
printf("}");

printf("\n");

printf("Y[]: {");
display(y,n);
printf("}");

printf("\n");

sort_merge(x,y,m,n);

printf("\nIn-Place sorted arrays are:\n");
printf("X[]: {");
display(x,m);
printf("}");

printf("\n");

printf("Y[]: {");
display(y,n);
printf("}");

printf("\n");

return 0;
}


void sort_merge(int a[], int b[], int c, int d)
{
    int i,k,first,temp;

    for(i=0;i<c;i++)
    {
        if(a[i]>b[0])
        {
            temp = a[i];
            a[i]=b[0];
            b[0] = temp;
            
            first = b[0];

            for(k=1; k< d && b[k]<first; k++)
            {
            b[k-1] = b[k];
            }
            b[k-1] = first;
        }

    }

}


void display(int a[],int b)
{
    int i;
    for(i=0;i<b;i++)
    {
    printf("%d ",a[i]);
    }
}