#include <stdio.h>
 
int main(int argc, char **argv) {
	int i, n,intvar;
	n=strlen(argv[1]);
	
//	for (i=0; i<argc; i++){
//		printf("%*d", width, num);
//	}
//	printf("%s\n", argv[1]);
	for (i=0; i<n; i++){
//		scanf("%c", argv[1][i]);
//		sprintf(ch,"%d",intvar);
		char ch=argv[1][i];
		printf("%c+1", ch );
	}
//    int i, n;
//    const char* data = getenv("data");
/*    char *HEXStr = "A4505D0B0F6AEDAA";
    unsigned char tmpByte[9];
    char backHex[17];
 
    for(i = 0; i < 8; i++) {
        sscanf(HEXStr+2*i, "%2X", &n);
        tmpByte[i] = (char)n;
    }
 
    for(i = 0; i < 8; i++)
        sprintf(backHex+2*i, "%02X", tmpByte[i]);
    backHex[16] = '\0';
 
    printf("%s\n", backHex);
    return 0;*/
}