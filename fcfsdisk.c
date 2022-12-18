#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,A[100];
    printf("Enter number of tracks: ");
    scanf("%d",&n);
    printf("Enter number of movements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int pos=0;
    printf("Enter the initial position: ");
    scanf("%d",&pos);
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+abs(A[i]-pos);
      pos=A[i];
    }
    printf("Total Movements:%d",sum);
    return 0;
}