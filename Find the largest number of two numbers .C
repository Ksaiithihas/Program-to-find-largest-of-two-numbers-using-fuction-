
#include <stdio.h>
int max ();
int main()
{
int a[5],max,b,i;

printf("How many number you want :");
scanf("%d",&b);

printf("Enter the element of array :");
for (int i=0;i<b;i++)
{
scanf("%d",&a[i]);
} 
int Max=0;
for (i=0;i<6;i++)
{
    if(a[i]>Max);
    {
        Max=a[i];
    }
}
printf("Maximum no = %d",Max);
}
