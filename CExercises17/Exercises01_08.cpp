#include <stdio.h>
#include <string.h>
int main()
{
  char c[101];
  int i;
  gets(c);
 
	for(i = 0; c[i] != 0; i++)
	{
   		if(c[i] <= 122 && c[i] >= 97)
   		{
			c[i] = c[i] - 32;   	
 		}
 		else if(c[i] <= 90 && c[i] >= 65)
 		{
			c[i] = c[i] + 32;	 	
 		}
 		else
 		{
		 	c[i] = c[i];
		 }
	}


  
puts(c);
}