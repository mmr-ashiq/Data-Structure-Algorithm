#include<stdio.h>
int main()
{
    int a[10],n,i,new_value,new_index;
    printf("How many numbers you wanna add? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\nEnter the value: ");
    scanf("%d",&new_value);
    printf("which index you wanna add? ");
    scanf("%d",&new_index);
    for(i=n-1;i>=new_index;i--)
        a[i+1]=a[i];
    a[new_index]=new_value;
    for(i=0;i<new_value;i++)
        printf("%d ",a[i]);
        
    return 0;
}
