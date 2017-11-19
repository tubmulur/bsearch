#include <stdio.h>
 
int main(int argc, char **argv) 
	{
	int i, n;
	char x,ch;
	
	n=strlen(argv[1]);
	for (i=0; i<n; i++)
		{
		ch=argv[1][i];
		if(x>ch)
			{
			printf("%d", ch );
			exit;
			}
		}
	}
