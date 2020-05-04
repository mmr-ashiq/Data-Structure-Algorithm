#include<stdio.h>
int main()
{
    int min,max,mid,i,a[20],n,search;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter %d Element: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=0;
    max=n-1;
    mid=(min+max)/2;
    printf("Enter element for search: ");
    scanf("%d",&search);
    while(min<=max)
    {
        if(a[mid]==search)
        {
            printf("found at index no %d",mid);
            break;
        }
        else if(a[mid]<search)
            min=mid+1;
        else
            max=mid-1;
        mid=(min+max)/2;
    }
    if(min>max)
        printf("Element not found");
}
