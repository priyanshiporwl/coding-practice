/*#include<stdio.h>
int main(){
	int n ,i = 0;
	printf("enter a number:\n");
	scanf("%d",&n);
	do{
		printf("%d\n" , i+1);
		i=i+1;
	
	}
	while(i<n);
	
	return 0;
	
}
#include<stdio.h>
 int main(){
	int n ,sum=0;
	printf("enter a number:\n", &n);
	scanf("%d", n);
	do{
			printf("enter a number:\n", &n);
	scanf("%d", n);
	sum=sum+n;
	printf("%d\n" , sum);
	
}
while(n==0);
return 0;
}
#include<stdio.h>
int main(){
	int n , sum=0;
	do{
		printf("enter a number:/n",n);
		scanf("%d", &n);
		if(n>0){
			sum=sum+n;
		}
		else if(n<0){
			printf("negative integers not considered:");
			
		}
	}
	while(n!=0);
	printf("sum of positive integers %d", sum);
	return 0;
}
#include<stdio.h>
int main(){
	int i=1;
	int sumeven=0;
	int sumodd=0;
	do{
		
		if (i%2==0){
			sumeven = sumeven+i;
		}
		if (i%2 !=0){
			sumodd = sumodd+i;
		}
		i++;
	}
	
	while(i<=50);
	printf("sum of even numbers is %d", sumeven);
	printf("sum of odd numbers is %d", sumodd);
	return 0;
}
#include<stdio.h>
int main(){
	int n , sum=0;
	do{
		printf("enter a number", n);
		scanf("%d",  &n);
		if(n>=0){
			sum = sum+n;
		}
		else{
			printf("negative numbers not allowed:");
		}
	}
	while(n>=0);
	printf("sum is %d", sum);
	return 0;
}
#include<stdio.h>
int main(){
	int n ;
	printf("enter a number:", n);
	scanf("%d", &n);
	if(n>0){
		printf("number is positive:");
	}
	else if (n<0){
		printf("number is negative:");
	}
	else {
		printf("number is zero:");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i ;
	for(i=1;  i<=10 ;i++){
		printf(" %d\n", i);
	
	}
	return 0;
	
}
#include<stdio.h>
int main(){
	
	int i=1;
	do{
			printf("%d\n", i);
			i=i+2;
			
		}
	
	while(i<=20);
	return 0;
}
#include<stdio.h>
int main(){
	int i;
	for(i=0; i<=10; i++){
		printf("%d\n",i);
	
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i=10;
	while(i>0){
		printf("%d\n",i);
		i=i-1;
		
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i , n,sum = 0;
	printf("enter number %d", n);
	scanf("%d", &n);
	for(i=0; i<n ; i++){
		sum=sum+i;
	}
	printf("sum of n natural numbers is %d", sum);
	return 0;
}
#include<stdio.h>
int main(){
	int i;
	do{
		
		if(i%2!=0){
			printf("%d\n",i);
		}
i++;	}
	
	while(i<20);
	return 0;
}
#include<stdio.h>
int main(){
	int n=2 , i ,p;
	for(i=1; i<=10; i++){
		p=i*n;
			printf("%d * %d = %d\n", n,i,p);
	}
\
	return 0;
}
#include<stdio.h>
int main(){
	int i=5 , fact=1;
	for (i=5; i>0; i--){
		fact=fact*i;
		
	}
	printf("factorial is : %d", fact);
	return 0;
}

#include<stdio.h>
int main(){
	int n = 34577;
	int count=0;
	while (n>0){
		n = n/10;
		count=count+1;
	}
	printf("total digits is %d ", count);
	return 0;
}
#include<stdio.h>
int main(){
	int n=1234;
	int rem;
	int reversed=0;
	printf("original number %d", n);
	while(n!=0){
		rem= n%10;
		reversed = reversed*10+rem;
		n = n/10;
	}
	
	printf("reversed number: %d", reversed);
	return 0;
}
#include<stdio.h>
int main(){
	int n= 121;
	int rev=0;
	int rem;
	printf("original number %d\n", n);
	while(n!=0){
		rem = n%10;
		rev = rev*10+rem;
		n=n/10;
	
	
	}
		if(rev==n){
			printf("number is palindrome", n);
		}
	printf("reversed num is %d\n", rev);
		
		return 0;
}

#include<stdio.h>
int main(){
	int n=8;
	int a=0, b=1, c=0;
	 printf("Fibonacci Series up to %d terms:%d, %d\n, ", n, a, b);

	for(n=3 ; n<=8; n++){
		c=a+b;
		a=b;
		b=c;
	printf("%d\n", c);
	}
	
	return 0;
}*/
