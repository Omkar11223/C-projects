#include<stdio.h>
main()
{
	char str[20];
	int digit,alphabhet,specialchar,space;
	int i;
	digit=alphabhet=specialchar=space=0;
	printf("\n enter a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0'&& str[i]<='9')
		digit++;
		else if ((str[i]>'A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
		alphabhet++;
		else if (str[i]==' ')
		space++;
		else
		specialchar++;
	}
	printf("\n digit:%d \n Alphabet:%d \n space:%d \nspecial charcter:%d",digit,alphabhet,space,specialchar);
	
	
}
