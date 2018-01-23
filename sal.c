#include<Stdio.h>
/*salary chart*/
 int main()
{
	int yos,sal,qual;
	char g;
	
	printf ("enter gender,qualifications and years of service");
	scanf ("%c%d%d",&g,&qual,&yos);
	
	if ( g == 'm' && qual == 1 && yos >= 10 )
{

	 printf ("salary of employee = 15000");
}
	else if ( g == 'm' && qual == 0 && yos >= 10 || g == 'm' && qual == 1 && yos < 10 || g == 'f' && qual == 1 && yos < 10 )  
{
	 	 printf ("salary of employee = 10000");
}
	else if  (g == 'm' && qual == 0 && yos < 10 )
{
	 	 printf ("salary of employee = 7000");
}
	else if ( g == 'f' && qual == 21 && yos >= 10 )
{
		 printf ("salary of employee = 12000");
}	
	else if ( g == 'f' && qual == 0 && yos >= 10 )
{
	printf ("salary of employee = 9000");
}	
	else  if ( g == 'f' && qual == 0 && yos < 10 ) 
{
	 printf ("salary of employee = 6000");
}
	printf ("salary of employee = rs%d",sal);
	
return 0;
}

