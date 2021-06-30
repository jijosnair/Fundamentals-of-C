#include<stdio.h>
void sum();
void sum()
{
int n1,n2,s;
printf("Enter first No:");
scanf("%d",&n1);
printf("Enter Second No:");
scanf("%d",&n2);
s=n1+n2;
printf("Sum of %d and %d is %d", n1,n2,s);
printf("EXIT");

}
int main(int argc, char const *argv[])
{
    sum();
    return 0;
}
