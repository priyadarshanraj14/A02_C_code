#include<stdio.h>//5
#include<stdlib.h>
#include<conio.h>
 void leap_year (int p, int *q);
 void extra_days (int s, int *c);
void main()
{
    while(1)
    {
    while(1)
  {

    int d,m,y,x,l=0,s,c,count,z=0;
    printf("\n To find the day on given date\n");
    printf("enter the date only ="); scanf("%d",&d);
    printf("enter the month=");scanf("%d",&m);
    printf("enter the year=");scanf("%d",&y);
    if(d>31||d<1)
    {
        printf("the day you input is wrong(day<=31)\n");
        break;
    }
    if(m>12||m<1)
    {
        printf("the month you enter is wrong(month<=12)\n");
        break;
    }
    leap_year (y,&l);
    s=y-1;
    if(d>29&&m==2)
    {
          printf("day is wrong (febuary have maximum 29 days)\n");
          break;
    }
    if(l==0&&m==2)
    {
        if(d>28)
        {
            printf("day is wrong(given year is not a leap year)\n");
            break;
        }
    }
    if((m==4||m==6||m==9||m==11)&&d==31)
    {
        printf("\nsaale 31 ka mahina nhi hai ye,ullu banaqta hai humko \n");break;
    }
    extra_days (s,&c);
    if(m>2)
        {x=(365*(y-1))+c+l;}
    else
       {x=(365*(y-1))+c;}
    int a[12];
    a[0]=0;a[1]=31;a[2]=28;a[3]=31;a[4]=30;a[5]=31;a[6]=30;a[7]=31;a[8]=31;a[9]=30;a[10]=31;a[11]=30;
    for(int i=0;i<m;i++)
    {
        z=z+a[i];
    }
    count=x+z+d;
    count=count%7;
    switch (count)
    {
        case 1 : printf("monday\n");
                 break;
        case 2 : printf("tuesday\n");
                 break;
        case 3 : printf("wednesday\n");
                 break;
        case 4 : printf("thursday\n");
                 break;
        case 5 : printf("friday\n");
                 break;
        case 6 : printf("saturday\n");
                 break;
        case 0 : printf("sunday\n");
                 break;
    }
   }
  }
//getch();
}

   void leap_year (int p, int *q)
   {
       if(p%400==0)
       {
          *q=1;

       }
       else if(p%100==0)
       {

       }
       else if(p%4==0)
       {
           *q=1;
       }
   }

   void extra_days (int s, int *c)
   {
       int count;
       count=s/4;
       count=count-(s/100);
       count=count+(s/400);
       *c=count;
   }
