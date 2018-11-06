// 1  2   3  4 5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9

// 2

// 7
// 1 3 5 7 9 2 4

// 4
// 9 4 8 7


#include<stdio.h>
#include<string.h>
#define MAX_X 5
#define MAX_Y 5


int a[MAX_X][MAX_Y];
int s[25];

int main()
{
	int i,j,t,n,_t,_n;

	// for(i =0; i<MAX_X; i++){
	// 	for(j =0; j<MAX_X; j++){
	// 		scanf("%d",&a[i][j]);
	// 	}
	// }


	scanf("%d",&t);	
	for(_t =0; _t<t; _t++){
		scanf("%d",&n);
		memset(s,0,25);
		for(_n =0; _n<n; _n++){
			scanf("%d",&s[_n]);

			//do something
		}

	}



	// for(i =0; i<MAX_X; i++){
	// 	for(j =0; j<MAX_X; j++){
	// 		printf("%d ", a[i][j]);
	// 	}

	// 	printf("\n");
	// }


	// for(_n =0; _n<n; _n++){
	// 	printf("%d ",s[_n]);
	// }

	return 0;
}


// 2
// 5
// 1 2 3 4 5
// 3
// 1 2 3
