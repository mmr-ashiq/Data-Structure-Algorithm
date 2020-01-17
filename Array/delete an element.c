#include <stdio.h>

int main(void) 
{
  int n,i,pos,a[10];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("which index you want to delete: ");
  scanf("%d",&pos);
  for(i=pos;i<n;i++)
    a[i]=a[i+1];
  for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
  return 0;
}
