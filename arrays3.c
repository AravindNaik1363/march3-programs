#include <stdio.h>
int sort(int arr[],int n);//function declaration
int main()
{
    int arr[10],i,n;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("elements of array are:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,n);//function calling
    printf("array elements in descending order:");
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    return 0;
}
int sort(int arr[],int n)//function definition
{
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
