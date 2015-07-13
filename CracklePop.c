#include <stdio.h>

int main()
{
	int i = 0;
	char numBuf[4] = { 0,0,0,0};
	for(i = 1; i<=100;i++) {
		sprintf(numBuf,"%d",i);
		printf("%s%s%s\n", ((i%3) ? "":"Crackle"), ((i%5) ? "":"Pop"), (!((i%3) && (i%5)) ? "":numBuf));
	}
	return 0;
}
