#include<stdio.h>
#include<string.h>

int counter;
int len;
int DONE;


void re(char *str, int l , int r){




	if(str[l]=='1'){
		counter++;
	}

	if(r >= len){
		return;
	}


	printf("%d, %d\n", l, r);
	if((r - l + 1) != len){
		re(str,l+1,r+1);
		re(str,0,r+1-l);
	}else{
		return;
	}


	if(l == r){
		return;
	}

}


char str[100];

int main(int argc, char const *argv[])
{
	scanf("%s",str);

	len = strlen(str);
	printf("%d\n", len);

	re(str, 0,1);


}