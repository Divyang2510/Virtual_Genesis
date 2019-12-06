#include<stdio.h>

int main()
{
  int size =10;
  int arr[size];
  int sum =0;
  
  for(int i =0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  
  for(int i =0;i<size;i++)
  {
    printf("%d",arr[i]);
    printf("\n");
  }
  
  for(int i=0; i<size;i++)
  {
    sum+=arr[i];
  }
  
  printf("%d\n",sum);
  
  return 0;
}
