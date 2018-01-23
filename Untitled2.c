#include<stdio.h>
/*salary chart*/
 int main()
{
	int yos,sal,n,i;
	char g, qual;
	
	printf("Enter no. of employees");
	scanf("%d",&n);
	
/*	for(i=1;i<=n;i++)
	{
	fflush(stdin);
	printf ("enter gender");
	scanf ("%c",&g);
	
	printf(" enter years of service");
	scanf ("%d",&yos);
	fflush(stdin);
	printf("enter qualifications:");
	scanf ("%c",&qual);
	
	if ( g == 'm' && qual == 'p' && yos >= 10 )
	 sal=15000;
	else if (( g == 'm' && qual == 'g' && yos >= 10 )|| (g == 'm' && qual == 'p' && yos < 10 )|| (g == 'f' && qual == 'p' && yos < 10 ) ) 
	 sal = 10000;
	else if  (g == 'm' && qual == 'g' && yos < 10 )
	 sal = 7000;
	else if ( g == 'f' && qual == 'p' && yos >= 10 )
	 sal = 12000;
	else if ( g == 'f' && qual == 'g' && yos >= 10 )
	 sal = 9000;
	else  if ( g == 'f' && qual == 'g' && yos < 10 ) 
	 sal= 6000;

	printf ("\n salary of employee = rs%d\n",sal);
	}*/
 i=1;
// do
while(i<=n)
 {
 	fflush(stdin);
	printf ("enter gender");
	scanf ("%c",&g);
	
	printf(" enter years of service");
	scanf ("%d",&yos);
	fflush(stdin);
	printf("enter qualifications:");
	scanf ("%c",&qual);

  if(g=='m')
  {
  	if(yos>=10)
  	{
  		if(qual=='p')
        sal=15000;
        else
        sal = 10000;
    }   
	else
	{
		if(qual=='p')
        sal=10000;
        else
        sal = 7000;
	}
  }
  else
  {
  	if(yos>=10)
  	{
  		if(qual=='p')
        sal=12000;
        else
        sal = 9000;
    }   
	else
	{
		if(qual=='p')
        sal=10000;
        else
        sal = 6000;
	}
  }
  	printf ("\n salary of employee = rs%d\n",sal);
    i++;
} //while(i<=n);
	
	return 0;
}

