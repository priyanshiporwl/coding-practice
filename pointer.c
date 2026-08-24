/*#include<stdio.h>
int main(){
	int a=10;
	int *p;
	p=&a;
	printf("value of a is %d\n", a);
	printf("adress of a is %p\n",&a);
	printf("value of p is %p\n",p);
	printf("value using pointer =%d\n", *p);
	return 0;
}
#include<stdio.h>
int main(){
	int a;
	int *p;
	printf("enter the value");
	scanf("%d",&a);
	p=&a;
	*p=50;
	printf("after changing value is %d\n",*p);
	return 0;
}
#include<stdio.h>
int main(){
	int a,b,temp;
	int *p,*q;
	printf("enter the values");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	printf("after swapping");
	temp=*p;
	*p=*q;
	*q=temp;
	printf("%d %d",a,b);
	return 0;
}
#include<stdio.h>
int main(){
	int a,b;
	int *p,*q;
	printf("enter numbers");
	scanf("%d %d", &a, &b);
	p=&a;
	q=&b;
	if(*p>*q){
		printf("a is greator %d",*p);
	}
	else{
		printf(" b is greator %d", *q);
	}
	return 0;
}
#include<stdio.h>
int main(){
	int a,b,sum=0;
	int *p,*q;
	printf("enter elements");
	scanf("%d %d", &a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("sum is %d",sum);
	return 0;
	}
	
#include<stdio.h>
int main(){
	int i;
	int a[5]={10,20,30,40,50};
	int *p;
	p=&a[0];
	for(i=0; i<5; i++){
	printf("%d ",*(p+i));
}
return 0;
}
#include<stdio.h>
int main(){
	int i;
	int a[5]={10,20,30,40,50};
	int *p;
	p=&a[4];
	for(i=0; i<5; i++){
		printf("%d ",*(p-i));
	}
	return 0;
}
#include<stdio.h>
int main(){
	int a[5],i,sum=0;
	int *p,*s;
	p=&a[0];
	s=&sum;
	printf("enter elements");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++){
		sum=sum+*(p+i);
	}
	printf("sum of elements is %d ", *s);
	return 0;
}

#include<stdio.h>
int main(){
	int a[5],i,largest;
	int *p;
	p=&a[0];
	printf("enter the elements\n");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	largest=*(p+0);
	for(i=0; i<5; i++){
		if(*(p+i)>largest){
			largest=*(p+i);
		}
	}
	printf("largest element is %d ",largest);
	return 0;
}
#include<stdio.h>
int main(){
	int a[5],i,smallest;
	int *p;
	p=&a[0];
	printf("enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	smallest=*(p+0);
	for(i=0; i<5; i++){
		if(smallest>*(p+i)){
			smallest=*(p+i);
		}
	}
	printf("smallest element is %d", smallest);
	return 0;
}

#include<stdio.h>
int main(){

int a[5],i,temp;
int*p, *q;
p=&a[0];
q=&a[4];
printf("enter elements\n");
for(i=0; i<5; i++){
	scanf("%d", &a[i]);
}
printf("array after swapping\n");
temp=*p;
*p=*q;
*q=temp;
for(i=0; i<5; i++){
printf("%d ",*(p+i));
}
return 0;
}
#include<stdio.h>
int main(){
int	a[5],i,even=0,odd=0;
int *p;
p=&a[0];
printf("enter elements\n");
for(i=0; i<5; i++){
	scanf("%d",&a[i]);
}
for(i=0; i<5; i++){
	if(*(p+i)%2==0){
		even++;
	}
	else{
		odd++;
	}
}
printf("total even and odd numbers are %d and %d  ",even,odd);
return 0;

}
#include<stdio.h>
int main(){
	int a[5],i;
	int *p;
	p=&a[0];
	printf("enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<5; i++){
		*(p+i)=*(p+i)+10;
	}
	printf("array after increament is \n");
for(i=0; i<5; i++){
	printf("%d ",*(p+i));
}
return 0;
}
#include<stdio.h>
void swap(int *p, int*q);
int main(){
	int a=10,b=20;
	swap(&a,&b);
	printf("values after swapping %d %d",a,b);
	return 0;
}
void swap(int *p, int *q ){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;

}
#include<stdio.h>
int add(int *p,int *q);
int main(){
	int a,b,sum=0;
	printf("enter values");
	scanf("%d %d",&a,&b);
	sum=add(&a,&b);
	printf("sum is %d ",sum);
	return 0;
}
int add(int *p,int *q){
	return(*p+*q);
}
#include<stdio.h>
int largest(int *p, int *q);
int main(){
	int a,b,larger;
	printf("enter numbers");
	scanf("%d %d",&a,&b);
	larger=largest(&a,&b);
	printf("largest element is %d",larger);
	return 0;
}
int largest(int *p,int *q){
	if(*p>*q){
		return *p;
	}
	else{
		return *q;
	}
}
#include<stdio.h>
int sumofarray(int *p,int n);
int main(){
	int n,sum=0,i;
	printf("enter number of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter elements\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	sum=sumofarray(a,n);
	printf("%d", sum);
	return 0;
}
int sumofarray(int *p,int n){
	int i,sum=0;
		for(i=0; i<n; i++){
		sum=sum+*(p+i);
	}
	return sum;
}
#include<stdio.h>
int largest(int *p, int n);
int main(){
	int n,i,larger;
	printf("enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter elements\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	larger=largest(a,n);
	printf("largest is %d",larger);
	return 0;
}
int largest(int *p,int n){
	int i,largest;
	largest=*(p+0);
	for(i=0; i<n; i++){
		if(*(p+i)>largest){
			largest=*(p+i);
		}
	}
	return largest;
}

#include<stdio.h>
int smallest(int *p, int n);
int main(){
	int n,i,smaller;
	printf("enter the number of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter elements\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	smaller=smallest(a,n);
	printf("largest is %d",smaller);
	return 0;
}
int smallest(int *p,int n){
	int i,smallest;
	largest=*(p+0);
	for(i=0; i<n; i++){
		if(*(p+i)<smallest){
			smallest=*(p+i);
		}
	}
	return smallest;
}
#include<stdio.h>
int evenn(int *p,int n);
int main(){
	int a[5],i,n=5,even=0;
	int *p;
	printf("enter elements\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	even=evenn(a,n);
	printf("%d",even);
	return 0;
}
int evenn(int *p,int n){
	int i,even=0;
	for(i=0; i<n; i++){
		if(*(p+i)%2==0){
			even++;
		}
		
	}
	return even;
}
#include<stdio.h>
int oddd(int *p,int n);
int main(){
	int a[5],n=5,i,odd=0;
	printf("enter the elements\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	odd=oddd(a,n);
	printf("%d",odd);
	return 0;
}
int oddd(int *p,int n){
	int i,odd=0;
	for(i=0; i<n; i++){
		if(*(p+i)%2!=0){
			odd++;
		}
	}
	return odd;
}
#include<stdio.h>
void reverse(int *p,int n);
int main(){
	int a[5],n=5,i,j,temp;
	printf("enter the elements\n");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	reverse(a,5);

	return 0;
}
void reverse(int *p,int n){
	int temp,i;
	for(i = 0; i < 5/2; i++){
	temp=*(p+i);
	*(p+i)=*(p+5-1-i);
	*(p+5-1-i)=temp;
	}
}

#include<stdio.h>
int search(int *p,int n, int key);
int main(){
	int a[5],n=5,i,key,result;
	printf("enter elements\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	result=search(a,n,key);
	if(result==0){
	printf("element not found");
	}
	else{
	printf("element found");
}

return 0;	
}
int search(int *p,int n, int key){
	int i;
	for(i=0; i<n; i++){
		if(*(p+i)==key){
			return 1;
		}
	}
	return 0;
}
*/
#include<stdio.h>
int search(int *p,int n, int key);
int main(){
	int a[5],n=5,i,key,result;
	printf("enter elements\n");
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	result=search(a,n,key);
	printf("%d",result);

return 0;	
}
int search(int *p,int n, int key){
	int i,count=0;
	for(i=0; i<n; i++){
		if(*(p+i)==key){
			count++;
		}
	}
	return count;
}
