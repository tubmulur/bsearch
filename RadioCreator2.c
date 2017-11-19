#include <stdio.h>
 
int main(int argc, char **argv) 
	{
	int i, n;
	char x,ch;
	n=strlen(argv[1]);
	x=argv[1][(n-1)];
	for (i=0; i<(n-1); i++)
		{
		ch=argv[1][i];
		if(x>ch)
			{
			printf("%d", ch );
			exit;
			}
		}
	}
