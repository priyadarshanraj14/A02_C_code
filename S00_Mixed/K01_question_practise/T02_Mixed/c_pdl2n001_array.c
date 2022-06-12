// to find the largest number given by user ? 
#include<stdio.h>
int main ()
{
    while(1){
    int x,n=1,y;
    printf("\nhow many number you want to give=");
    scanf("%d",&x);
    printf("which largest number you wnat to find out (eg enter 2 for second largest number and so on)=");
    scanf("%d",&y);
    printf("enter your number=");
    int a[x];
    for(int i=0; i<x; i++)
    {
        scanf("%d",&a[i]);

    }
    for (int i=0; i<x; i++)
    {
        for(int j=i+1; j<x; j++)
        {
            if( a[i]< a[j] )
            {
                int k = a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        int m = i+1;
        if(a[i]>a[m]&& m<x)
        {
            n=n+1;
            if(n==y)
            {
                printf(" result = %d\n",a[m]);
             break;
            }
        }
        if(m==x&&y!=1)
        {
            printf(" result not found\n");
        }
    }
     if(y==1)
        {
            printf("result = %d\n",a[0]);
        }
    printf("descending order=");
    for (int i=0;i<x;i++)
    {
        printf(" %d",a[i]);
    }
    }

    return 0;

}
