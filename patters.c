/*#include<stdio.h>
int main(){
	int i ,j;
for(i=0; i<4 ;i++){
	printf("\n");
	for(j=0; j<4; j++){
		printf("*");
	}
}
return 0;
}
#include<stdio.h>
int main(){
	
	int i,j,n;
	printf("enter num %d",n);
	scanf("%d",&n);
	for(i=1; i<n; i++){
		for(j=1; j<i ;j++){
			printf("%d", j);
			}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i ,j ,n=4;
	for(i=n; i>=1 ; i--){
	
		for(j=1; j<=i ; j++){
			printf("*");
		}
			printf("\n");
		
	}
	return 0;
	
}
#include<stdio.h>
int main(){
	int n , num ,i;
	int smallest, largest;
	printf("how many num you will enter %d", n);
	scanf("%d", &n);
	for(i=1; i<n ; i++ ){
		printf("enter numbers %d\n ",num);
		scanf("d",&num);
		if (i==1){
			smallest=num;
			largest=num;
		}
		
	}
}
#include<stdio.h>
int main(){
	int i, j, n;
	printf("enter n : %d", n);
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n ; j++){
			if(i+j>=n-1){
			printf("*");	
			}
			else{
				printf(" ");
			}
			
		}
		
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i , j ,n;
	printf("enter numbwer %d", n);
	scanf("%d",&n);
	for(i=0; i<n; i++){
		for(j=0; j<2*n; j++){
			if(j<= n-1+i && j>=n-1-i){
				printf("*");
				
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i, j , n=5;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i<=j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i, j , n=5;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i<=j){
				printf("%d",i);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i, j, n=5;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i==0 || j==0 || i==n-1 || j==n-1){
				
				printf("*");
			}
		
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter number %d", n);
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=2*n-1; j++)
{
	if(j>=i && j<=(2*n-i)){
		printf("*");
	}
	else{
		printf(" ");	
	}
	
	}
	printf("\n");	}
	return 0;
}*/


