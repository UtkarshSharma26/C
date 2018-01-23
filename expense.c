
#include<stdio.h>>
/*calculation of total expenses*/
main()
{
    int qty,dis=0;
    float rate,tot;
    
    printf ("enter quantity and rate");
    scanf ("%d %f",&qty,&rate);
    
    
    if(rate>=1000,rate<=5000)
    dis=15;
    
    tot=(qty*rate) - (qty*rate*dis/100);
    
    printf ("total expenses= %f",tot);
}

