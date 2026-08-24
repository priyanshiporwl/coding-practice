/*#include<stdio.h>
void greet(void){
    printf("hello");
}
int main(){
    greet();
    return 0;
}
#include<stdio.h>
int add(int a , int b){
	int sum = a+b;
	printf("addition of %d and %d is %d", a, b , sum);
}
int main(){
	int x=5;
	int y=5;
	add(x,y);
	return 0;	
}
#include<stdio.h>
int multiply(int a , int b){
	return a*b;
}
int main(){
	int result = multiply(5,5);
	printf("%d", result);
	return 0;
}
#include<stdio.h>
int even(int a);
int main(){
	int x=9;
	if (even(x)){
		printf("number is even %d", x);
		
	}
	else{
		printf("number is odd %d", x);
	}
	return 0;
}
int even(int a){
	if (a%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
#include<stdio.h>
int increment(int a){
	printf("value %d\n", a);

	a=a+1;
	printf(" increament %d",a);
}
int main(){
	int x=8;
	printf("before %d", x);
	increment(x);
	printf("after %d", x);
	return 0;
}
#include<stdio.h>
void swap(int a, int b , int temp){
	printf("numbers before swapping %d and % d", a,b);
	temp = a;
	a=b;
	b=temp;
	printf("numbers after swapping %d and  %d", a, b);
}
int main(){

	swap(int x, int y, int z);
	return 0;
}
#include<stdio.h>
void evenodd(int n){
	if(n%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
	
}
int main(){
	int n;
	printf("enter number %d", n);
	scanf("%d", &n);
	evenodd( n);
	return 0;
}
#include<stdio.h>
void maximum(int a , int b){
	if(a>b){
		printf("a is greator");
	}
	else{
		printf("b is greator");
	}
}
int main(){
	int a , b;
	printf("enter the numbers %d and %d ", a , b);
	scanf("%d %d", &a , &b);
	maximum(a,b);
}
#include<stdio.h>
void swap(int *a,int  *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
	
}
int main(){
	int x, y;
	printf("enter numbers:"  );
	scanf("%d %d", &x, &y);
	printf("before swapping numbers are %d and %d", x , y);
	swap(&x, &y);
	printf("after swapping numbers are %d and %d", x , y);
	return 0;
}
#include<stdio.h>
int fact(int n){
	int i , facto=1;
	
	for(i=n; i>1; i--){
		facto=facto*i;
	}
	return facto;
}
int main(){
	int x;
	printf("enter value of x ", x);
	scanf("%d", &x);
	printf("factorial is %d ", fact(x));
	return 0;
}*/


