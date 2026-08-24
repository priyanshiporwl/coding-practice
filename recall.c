/*#include<stdio.h>
int main(){
	int n, rem,rev=0;
	printf("enter num");
	scanf("%d",&n);
	do{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	
	}
	while(n!=0);
	printf("reverse of digits is %d",rev);
	return 0;
}
#include<stdio.h>
int main(){
int n,m=n,rem,rev=0;
printf("enter number");
scanf("%d",&n);
do{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
while(n!=0);
if(rev==m){
	printf("number is palindrome");
}
else{
	printf("not palindrome");
}
return 0;
}
#include<stdio.h>
int main(){
	int a,b,sum,pro,diff,quo,rem;
	printf("enter two numbers ");
	scanf("%d %d",&a,&b);
	sum = a+b;
	diff=a-b;
	pro=a*b;
	quo=a/b;
	rem=a%b;
	printf("sum is",sum);
	printf(diff);
	printf(pro);
	printf(quo);
	printf(rem);
	return 0;
}
#include<stdio.h>
int main(){
	int year;
	printf("enter the year");
	scanf("%d", &year);
	if(year%400==0 || (year%4==0 && year%100!=0)){
		printf("it is leap year");
	}
	else{
		printf("not a leap year");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int a,b;
	int choice;
	printf("enter two numbers");
	scanf("%d  %d", &a,&b);
	printf("enter your choice");
	scanf("%d", &choice);
	switch(choice){
		
		case 1:
			printf("addition %d",a+b);
			break;
			case 2:
			printf("subtraction %d",a-b);
			break;
			case 3:
				if(b!=0){
				
			printf("division %d",a/b);
		}
			break;
			case 4:
			printf("multiplication %d",a*b);
			break;
			case 5:
				if(b!=0){
				
			printf("remainder %d",a%b);}
			
			break;
			default:
				printf("invalid operator");
				break;
	}
	return 0;
}
#include<stdio.h>
int main(){
	int n,i,fact=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=n; i<=1; i--){
	fact=fact*i;	
	}
	printf("factorial is %d", fact);
	
return 0;
}
#include<stdio.h>
int main(){
	int n,i,rev=0,rem;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("reverse is %d", rev);
	return 0;
}
#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2; i<n; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count>0){
		printf("not prime");
	}
	else{
		printf("prime");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i,j,n=5;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i,j,n=5;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int largest(int,int);
int main(){
	int a,b,larger;
	printf("enter the numbers");
	scanf("%d %d",&a, &b);
	larger=largest(a,b);
	printf("%d", larger);
	return 0;	
}
int largest(int x,int y){
	if(x>y){
	return(x);
	}
	else{
	return(y);
}
	
}

#include<stdio.h>
int isprime(int);
int main(){
	int n;
	printf("enter value");
	scanf("%d",&n);
	
    if(isprime(n) == 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
	return 0;
}
int isprime(int x){
	if(x<=1){
		return 0;
	}
	for(int i=2; i<x; i++){
		if(x%i==0){
			return 0;
		}
	}
			return 1;	
}
#include<stdio.h>
int main(){
	int a[5],i,smallest,largest;
	printf("enter elements");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	largest=a[0];
	smallest=a[0];
	for(i=0; i<5; i++){
		if(a[i]>largest){
			largest=a[i];
		}
		if(a[i]<smallest){
			smallest=a[i];
		}
	}
	printf("largest element is %d", largest);
	printf("smallest element is %d",smallest);
	return 0;
	}
#include<stdio.h>
int main(){
	int a[10],i,sum=0,even=0,odd=0;
	float average;
	printf("enter the elements");
	for(i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	for(i=0 ;i<10; i++){
		sum=sum+a[i];
	}
	printf("sum is %d ",sum);
	printf("average is %f ",sum/10);
	for(i=0; i<10; i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("total even num are %d ",even);
	printf("total odd numbers are %d ",odd);
	return 0;
}

#include<stdio.h>
int main(){
	int a[5],i,key,found=0;
	printf("enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	printf("enter key");
	scanf("%d",&key);
	for(i=0; i<5; i++){
		if(a[i]==key){
			printf("found at %d", i);
			found=1;
		}
	
	}
	if(found==0){
		printf("element not found");
	}
	return 0;
}

#include<stdio.h>
int main(){
	int a[3][3],i,j,largest,seclargest;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	largest=a[0][0];
	for(i=0;  i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j]>largest){
				largest=a[i][j];
			}
		}
	}
	seclargest=a[0][0];
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i]j]<largest && a[i][j]>seclargest){
				seclargest=a[i][j];
			}
		}
	}
	printf("second largest element is %d",seclargest);
	return 0;
}
#include<stdio.h>
int main(){
	int a[3],i,j,temp;
	printf("enter the number\n");
	for(i=0; i<3; i++){
		scanf("%d ",&a[i]);
	}
	for(i=0; i<3; i++){
		for(j=i+1; j<3; j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
						}
		}
		printf("%d",a[i]);
	}
	return 0;
}
#include<stdio.h>
int main(){
	int a[5],i,j,found=0;
	printf("enter the numbers\n");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++){
		for(j=i+1; j<5; j++){
		
		if(a[i]==a[j]){
			found++;
			printf("%d ",a[i]);
		}
			
		}
	
	}
	return 0;
}*/

