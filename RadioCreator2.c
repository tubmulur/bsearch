#include <stdio.h>
 
int main(int argc, char **argv) {
	int i, n,intvar;
	n=strlen(argv[1]);
	
	for (i=0; i<n; i++){
		char ch=argv[1][i];
		printf("%c+1", ch );
	}
}
