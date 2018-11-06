#include<stdio.h>
#include <stdlib.h>


struct gg
{
	int num;
	int counter;
}a[200000];

typedef struct gg Node;

int n, m;
int cursor;

int comp (const void * a, const void * b)
{
  Node *orderA = (Node *)a;
  Node *orderB = (Node *)b;
  return ( orderA->counter - orderB->counter );
}


int main()
{

	scanf("%d %d", &n, &m);




	int i;

	for(i = 0; i<n ;i++){
		a[i].num = i+1;
		a[i].counter = i+1;
	}


	for(i = 0; i<m ;i++){
		int b;
		scanf("%d", &b);
		a[b-1].counter = -i-1;
	}


	qsort(a, n, sizeof(a[0]), comp);

	cursor=0;
	for(i = 0; i<n ;i++){
		printf("%d\n",a[i].num);
		// printf("%d, %d\n",a[i].num, a[i].counter);
	}

}