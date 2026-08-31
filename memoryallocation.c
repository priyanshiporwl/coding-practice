/*#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	p= (int *)malloc(sizeof(int));
	printf("enter a number\n");
	scanf("%d", p);
	printf("number is %d", *p);
	free(p);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*p,i=0;
	printf("enter number n\n");
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int ));
	printf("enter all  numbers");
	for(i=0; i<n; i++){
	scanf("%d",(p+i));
	printf("%d", *(p+i));
}
free(p);
return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, *p, i=0,sum=0;
	printf("enter numbers\n");
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int));
	printf("enter numbers\n");
	for(i=0; i<n; i++){
	scanf("%d", (p+i));
	printf("%d",*(p+i));
	sum=sum+*(p+i);	
	}
 printf("sum is %d", sum);
 free(p);
 return 0;
	
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	p=(int *)malloc(sizeof(int));
	printf("enter the number\n");
	scanf("%d", p);
	printf("number is %d", *p);
	free(p);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int i=0;
	int *p;
	printf("enter the numbers\n");
	scanf("%d", &n);
	
	p=(int *)malloc(n*sizeof(int));
	printf("enter the numbers\n");
	for(i=0; i<n; i++){
	scanf("%d", (p+i));
	printf("%d", *(p+i));
}
	free(p);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int largest;
	int i=0;
	int *p;
	printf("enter numbers\n");
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int));
	printf("entr numbers\n");
	for(i=0; i<n; i++){
		scanf("%d", (p+i));
	}
	largest=*(p+0);
	for(i=0; i<n; i++){
		if(*(p+i)>largest){
			largest=*(p+i);
		}
	}
	printf("largest is %d", largest);
	free(p);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0;
	int n;
	int smallest;
	int *p;
	printf("enter numbers\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("enter numbers\n");
	for(i=0; i<n; i++){
		scanf("%d",(p+i));
	}
	smallest=*(p+0);
	for(i=0; i<n; i++){
		if(*(p+i)<smallest){
			smallest = *(p+i);
		}
	}
	printf("smallest is %d", smallest);
	free(p);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int i=0;
	int *p;
	int sum=0;
	float average;
	printf("enter numbers\n");
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int));
	printf("enter numbers\n");
	for(i=0; i<n; i++){
		scanf("%d", (p+i));
		sum=sum+*(p+i);
		average=(float)sum/n;
	}
	printf("average is %.2f",average);
	free(p);
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int i=0;
	int key;
	int *p;
	int found=0;
	printf("enter numbers\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0; i<n; i++){
		scanf("%d", (p+i));
	}
	printf("enter key\n");
	scanf("%d", &key);
	for(i=0; i<n; i++){
		if(*(p+i)==key){
			found=1;
			break;
		}
	}
	if(found==1){
		printf("element found");
	}
	else{
		printf("element not found");
	}
	free(p);
	return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=0;
	int n;
	int *p;
	printf("enter number of elements\n");
	scanf("%d", &n);
	p=(int *)calloc(n, sizeof(int));
	for(i=0; i<n; i++){
	printf("%d\n",*(p+i));
}
printf("enter elements\n");
for(i=0; i<n; i++){
	scanf("%d", (p+i));
	printf("%d", *(p+i));
}
free(p);
return 0;
}
