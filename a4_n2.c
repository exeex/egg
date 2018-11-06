#include<stdio.h>
#include <stdlib.h>

#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int a[200001];
int n, m;
int cursor=1;


int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return 1;
    if (f < s) return -1;
    return 0;
}



int main()
{

	scanf("%d %d", &n, &m);
	int i,j;

	for(i = 1; i<=n ;i++){
		a[i]=i;
	}



	for(i = 1; i<=m ;i++){
		scanf("%d", &j);
		SWAP(a[cursor], a[j]);
		cursor = j;
	}

	for(i = 1; i<=n ;i++){
		printf("%d\n",a[i]);
	}

}