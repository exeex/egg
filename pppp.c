#include<stdio.h>
#include<string.h>

char strA[100];
char strB[100];
char buff[100];
int counter;

int main()
{

	int len, start, r;
	counter=0;
	
	
	scanf("%s",strA);
	r = strlen(strA);
	
	int max_counter;
	
	int n,n_;
	scanf("%d",&n);
	
	for(n_=0;n_<n;n_++){
		
	counter=0;
		memset(strB,0,sizeof(strB));
		scanf("%s",strB);
		len = strlen(strB);
			
			for(start=0;start<len && start+r<=len; start++){
				memset(buff,0,sizeof(buff));
				strncpy(buff,strB+start,r);
//				printf("%s %s\n",strA, buff );
				
				if(strcmp(strA, buff)==0){
					counter++;
				}
			}
	
	if(counter>max_counter){
		max_counter=counter;
	}
		
	}
	

	
	printf("%d\n", max_counter);
	
	

}
