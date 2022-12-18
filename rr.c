#include <stdio.h>
int main()
{
    int a[10],b[10],rt[10],ct=0 , timeQuantum , n , remain,i;
    float tat=0 , wt = 0;
    printf("enter number of process\n");
    scanf("%d",&n);
    remain=n;
    for(int i=0;i<n;i++)
    {
        printf("enter process arrival time & Burst Time : \n");
        scanf("%d%d",&a[i],&b[i]);
        rt[i]=b[i];
    }
    printf("enter time quantam :\n");
    scanf("%d",&timeQuantum);
    printf("\n Process \t TAT \t WT \n");
    for(ct=0,i=0;remain!=0;)
    {
        if(rt[i]<=timeQuantum && rt[i]>0)
        {
            ct = ct + rt[i];
            rt[i]=0;
            remain--;
            printf("\nProcess [%d] \t %d \t  %d \n",i+1 , ct-a[i] , ct-a[i]-b[i]);
            tat = tat + ct-a[i];
            wt = wt + ct-a[i]-b[i];
        }
        else if(rt[i]>0)
        {
            rt[i]=rt[i]- timeQuantum;
            ct = ct + timeQuantum ;
        }
        if(i==n-1)
        {
            i=0;
        }
        else if(a[i+1]<=ct)
        {
            i++;
        }
        else
        {
            i=0;
        }
    }
    printf("Average Turn Around Time is %lf \n",tat/n);
    printf("Average Waiting Time is %lf \n",wt/n);
}