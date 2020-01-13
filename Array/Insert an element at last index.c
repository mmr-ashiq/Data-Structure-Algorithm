#include<stdio.h>
int main()
{
    int a[10],n,i,new_value;
    printf("How many numbers you wanna add? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the value: ");
    scanf("%d",&new_value);
    a[n]=new_value;
    for(i=0;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
