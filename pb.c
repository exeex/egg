#include<stdio.h>
#include <stdlib.h>


int r[100],b[100],y[100];


void give_ballom(int n,int x, int* arr){
	int i;

	i=0;
	while(1){
		if(i<n){
			if(arr[i]==1){
				break;
			}else{
			arr[i]=1;
			i+=x;
			}
		}else{
			i = i-n;
		}
	}
}

int main()
{

	int n, x1, x2, x3;
	scanf("%d", &n);

	scanf("%d", &x1);
	give_ballom(n, x1, r);

	scanf("%d", &x2);
	give_ballom(n, x2, b);

	scanf("%d", &x3);
	give_ballom(n, x3, y);

	int i;
	for(i=0;i<n;i++){
		printf("%d ", r[i]);
	}
	printf("\n");

	for(i=0;i<n;i++){
		printf("%d ", b[i]);
	}
	printf("\n");

	for(i=0;i<n;i++){
		printf("%d ", y[i]);
	}
	printf("\n");




}