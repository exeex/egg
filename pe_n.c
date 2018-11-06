#include<stdio.h>
#include<string.h>

int counter;
int DONE;

char strA[100];
char strB[100];

int cmp_rev(char *str){

	int len = strlen(str);

	strncpy(strB,str,len);
	strrev(strB);

	return strcmp(str, strB);

}


int main(int argc, char const *argv[])
{
	scanf("%s",strA);

	printf("%d\n", cmp_rev(strA));

}