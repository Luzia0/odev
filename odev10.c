#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	char kelime[100];
	gets(kelime);
	for(i=0;kelime[i]!='\0';i++)
		printf("%c%c",kelime[i],kelime[i]);
	
	
	return 0;
}
