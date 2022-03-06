#include<stdio.h>
void func(int a, int b, int c, float *total, float *per);
void main()
{
    int a, b, c;
    float total, per;

    printf("Enter the marks of subject 1: ");
    scanf("%d", &a);
    printf("Enter the marks of subject 2: ");
    scanf("%d", &b);
    printf("Enter the marks of subject 3: ");
    scanf("%d", &c);

    func(a, b, c, &total, &per);

    printf("\n The Total: %.2f", total);
    printf("\n The Percentage: %.2f%%\n", per);
}

void func(int a, int b, int c, float *total, float *per)
{
    *total = a+b+c;
    *per = ((a+b+c)/300.0)*100;
}