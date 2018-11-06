#include<stdio.h>


#define SWAP(x,y) {int t; t = x; x = y; y = t;} 

int a[100000];
int n, m;
int cursor;



int partition(int number[], int left, int right) { 
    int i = left - 1; 
    int j;
    for(j = left; j < right; j++) { 
        if(number[j] <= number[right]) { 
            i++; 
            SWAP(number[i], number[j]); 
        } 
    } 

    SWAP(number[i+1], number[right]); 
    return i+1; 
} 

void quickSort(int number[], int left, int right) { 
    if(left < right) { 
        int q = partition(number, left, right); 
        quickSort(number, left, q-1); 
        quickSort(number, q+1, right); 
    } 
} 





int main()
{

	scanf("%d %d", &n, &m);

	int i;
	for(i = 0; i<m ;i++){
		scanf("%d", &a[i]);
	}


	for(i = m-1; i>=0 ;i--){
		printf("%d\n",a[i]);
	}

	quickSort(a, 0, m-1);

	cursor=0;
	for(i = 1; i<n ;i++){

		// printf("%d, %d\n",i,a[cursor]);

		if(i!=a[cursor]) printf("%d\n",i);
		else cursor++;
	}

}