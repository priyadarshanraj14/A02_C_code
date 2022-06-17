#include<stdio.h>//hhh
void main()
{
    //pin encryption and decryption
    while(1)
    {
    printf (" \n\nencrypt or decrypt a pin \n your pin must contain lees than 9 digit\n enter the number of digit in your pin ");
    int pin, digit,m,c,alpha,num;
    scanf("%d",&digit);
    int array[digit];
    printf("enter your pin \n");
    scanf("%d",&pin);
    printf("enter any random number for m = ");
    scanf("%d",&m);
    printf("enter any random number for c = ");
    scanf("%d",&c);
    for(int i=digit-1;i>=0;i--)
    {
        array[i]= pin%10;
        pin=pin/10;
    }
    for(int j=0;j<=digit-1; j++)
    {

        num=(m*array[j]+c)/26;
        alpha=(m*array[j]+c)%26;
        m=m+1;
        c=c+1;
      //  printf("%d ",alpha );
      //  printf("%d\n",num);

    switch (alpha)
    {
        case 0 : printf("@ ");
                 printf("%d",num);
                 break;
        case 1 : printf("A");
                 printf ("%d",num);
                 break;
        case 2 : printf("B");
                 printf ("%d",num);
                 break;
        case 3 : printf("C");
                 printf ("%d",num);
                 break;
        case 4 : printf("D");
                 printf ("%d",num);
                 break;
        case 5 : printf("E");
                 printf ("%d",num);
                 break;
        case 6 : printf("F");
                 printf ("%d",num);
                 break;
        case 7 : printf("G");
                 printf ("%d",num);
                 break;
        case 8 : printf("H");
                 printf ("%d",num);
                 break;
        case 9 : printf("I");
                 printf ("%d",num);
                 break;
        case 10 : printf("J");
                 printf ("%d",num);
                 break;
        case 11 : printf("K");
                 printf ("%d",num);
                 break;
        case 12 : printf("L");
                 printf ("%d",num);
                 break;
        case 13 : printf("M");
                 printf ("%d",num);
                 break;
        case 14 : printf("N");
                 printf ("%d",num);
                 break;
        case 15 : printf("O");
                 printf ("%d",num);
                 break;
        case 16 : printf("P");
                 printf ("%d",num);
                 break;
        case 17 : printf("Q");
                 printf ("%d",num);
                 break;
        case 18 : printf("R");
                 printf ("%d",num);
                 break;
        case 19 : printf("S");
                 printf ("%d",num);
                 break;
        case 20 : printf("T");
                 printf ("%d",num);
                 break;
        case 21 : printf("U");
                 printf ("%d",num);
                 break;
        case 22 : printf("V");
                 printf ("%d",num);
                 break;
        case 23 : printf("W");
                 printf ("%d",num);
                 break;
        case 24 : printf("X");
                 printf ("%d",num);
                 break;
        case 25 : printf("Y");
                 printf ("%d",num);
                 break;
        case 26 : printf("Z");
                 printf ("%d",num);
                 break;
    }
    }


}

}

