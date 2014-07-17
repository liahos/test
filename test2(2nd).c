#include<stdio.h>
#include<ctype.h>
#include<string.h>


void replace_space(char *str)
{

	int i = 0, flag = 0, j = 0;
	char x;
	int length = strlen(str);
	char arr[length];
	
	
	for(i=0; i<length; i++)
	{
		x = str[i];
		if(isspace(x))
		{
			if(flag == 0)
			{
				arr[j] = '*';
				flag = 1;
				j++; 
			}
		}
		
		else
		{
			arr[j] = x;
			flag = 0;
			j++; 
		}	
	}
	arr[j] = '\0';
	
	strcpy(str, arr);
	
}	


void main()
{
	char str[] = "Hey , r u free              now?";
	
	
	replace_space(str);
	
	puts(str);	
}


