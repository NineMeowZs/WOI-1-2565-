#include<bits/stdc++.h>  
using namespace std;
main()
{
	int year;
	scanf("%d",&year);
	if (year % 4 == 0 || year % 100 == 0 || year %400 == 0 )
	{printf ("Leap Year");}
		else 
		{printf ("Common Year");}
	
	return 0;
	
}
