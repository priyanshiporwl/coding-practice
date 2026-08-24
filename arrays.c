/*#include<stdio.h>
int main(){
	int i, a[4]={11,12,13,14};
	for(i=0; i<4; i++){
		printf("numbers in array are %d\n", a[i]);
		
	}
	return 0;
}
#include<stdio.h>
int main(){
	int a[5];
	int i;
	printf("enter five elements\n");
	for(i=0; i<5; i++){
		scanf("%d\n",&a[i] );
	}
	printf("elements of array are:\n");
	for(i=0; i<5; i++){
		printf("%d", a[i]);
	}
	return 0;
}
#include<stdio.h>
int main(){
	int i , a[5], sum=0;
	printf("enter six elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<5; i++){
		sum = sum+a[i];
		
	}
	printf("sum of elements in array is %d ", sum);
	return 0;
}
#include<stdio.h>
int main(){
	int a[5], i, n;
	printf("enter the elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	n =a[0];
	for(i=0; i<5; i++){
	
	if(a[i]>n){
		n= a[i];
	}	
}
	printf("largest element is:%d", n);
	return 0;
		
}
#include<stdio.h>
int main(){
	int i, s ,a[5];
	printf("enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
		
	}
	s=a[0];
	for(i=0; i<5; i++)
{
	if(a[i]<s){
		s=a[i];
	}
}
printf("smallest element is %d", s);
return 0;
}
#include<stdio.h>
int main(){
	int i , even =0 , odd=0,a[5];
	printf("enter elements \n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}

	for(i=0; i<5; i++){
		if(a[i]%2==0){
			even=even+1;
		}
		else{
			odd=odd+1;
		}
	}
	printf("even numberws are %d\n", even);
	printf("odd numbers are %d", odd);
	return 0;
}
#include<stdio.h>
int main(){
	int a[5], i, positive=0, negative=0;
	printf("enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<5; i++){
		if(a[i]>0){
			positive+=1;
			
		}
		else{
			negative+=1;
		}
	}
	printf("total positive numbers are %d",positive);
	printf("total negative numbers are %d", negative);
	return 0;
	
	
}
#include<stdio.h>
int main(){
	int a[5],i,key,found=0;
	printf("enter the elements:");
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	printf("enter element to search:");
	scanf("%d", &key);
	for(i=0; i<5; i++){
		if(a[i]==key){
			found=1;
			break;
		}
	}
	if(found==1){
		printf("element found at %d", i);
		
	}
	else{
		printf("element not found");
		
	}
	return 0;
}

#include<stdio.h>
int main(){
	int i,largest, secondlargest,a[5];
	printf("enter the elements:\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	largest=a[0];
	for(i=0; i<5; i++){
	if(a[i]>largest){
		largest=a[i];
	}
	}
	secondlargest=a[0];
	for(i=0; i<5; i++){
		if(a[i]<largest){
			secondlargest=a[i];
		}
	}
	printf("largest is %d\n", largest);
	printf("second largest is %d", secondlargest);
	return 0;
}
#include<stdio.h>
int main(){
	int a[5], i, smallest, secondsmallest;
	printf("enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	smallest=a[0];
	for(i=0; i<5; i++){
		if(a[i]<smallest){
			smallest=a[i];
		}
	}
	secondsmallest=9999;
	for(i=0; i<5; i++){
		if(a[i]>smallest && a[i]<secondsmallest){
			secondsmallest=a[i];
		}
	}
	
	printf("second smallest is %d", secondsmallest);
	return 0;
}
#include<stdio.h>
int main(){
	int a[5], i ,j, count=0, currentelement;
	printf("enter elements\n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<5; i++){
		
		for (j=0; j<5; j++){
			if(a[i]==a[j]){
				break;
			}	
			
		}
		if(i==j){
			count=0;
			for(j=0; j<5; j++){
				if(a[i]==a[j]){
					count++;
				}
			}
			printf("%d occurs %d times\n", a[i], count);
		}
	
			
	}	
	return 0;		
 }
 #include<stdio.h>
 int main(){
 	int i,j,count=0,a[5];
 	printf("enter elements\n");
 	for(i=0; i<5; i++){
 		scanf("%d", &a[i]);
	 }
	 for(i=0; i<5; i++){
	 	for(j=0; j<5; j++){
	 		if(a[i]==a[j]){
	 			break;
			 }
		 }
		 if(i==j){
		 	count=0;
		 
		 for(j=0; j<5; j++){
		 	if(a[i]==a[j]){
		 		count++;
			 }
		 }
		 if(count>1){
		 	printf("duplicate number is %d\n", a[i]);
		 }
	 }
}
	 return 0;
 }
 #include<stdio.h>
 int main(){
 	int i,j,count, n=5,a[n],k;
 	printf("enter elements\n");
 	for(i=0; i<n; i++){
 		scanf("%d", &a[i]);
	 }
	 for(i=0; i<n; i++){
	 	for(j=i+1; j<n; j++){
	 		if(a[i]==a[j]){
	 			for(k=j; k<n-1; k++){
	 				a[k]=a[k+1];
	 				
				 }
				 n--;
	 				j--;
				 	
			 }
		 
		 }
		  
	 }
	 for(i=0; i<n; i++){
	 
	printf("elements of array %d\n", a[i]);
}
	 return 0;
	 
 }
 #include<stdio.h>
 int main(){
 	int i ,n1=5, n2=5 ,a[5], b[5], c[10];
 	printf("enter elements for array 1\n");
 	for(i=0; i<5; i++){
 		scanf("%d", &a[i]);
 	
	 }
 	printf("enter elements for array 2\n");
 	for(i=0; i<5; i++){
 		
 		scanf("%d", &b[i]);
	 }
	 for(i=0; i<n1; i++){
	 	c[i]=a[i];
	 }
 	for(i=0; i<n2; i++){
 		c[n1+i]=b[i];
	 }
	 for(i=0; i<10; i++){
	 
	 printf("%d\n", c[i]);
}
 	return 0;
 }
 #include<stdio.h>
 int main(){
 	int j, temp,i,a[5];
 	printf("enter elements:\n");
 	for(i=0; i<5; i++){
 		scanf("%d", &a[i]);
	 }
	 for(i=0; i<5; i++){
	 
	 for(j=i+1; j<5; j++){
	 	if(a[i]>a[j]){
	 		temp = a[i];
	 		a[i]=a[j];
	 		a[j]=temp;
		 }
		
	 }

}
for(i=0; i<5; i++){

	  printf("array in ascending order %d\n", a[i]);
}
	 return 0;
 }
 #include<stdio.h>
 int main(){
 	int i,j,temp,a[5];
 	printf("enter elements:\n");
 	for(i=0; i<5; i++){
 		scanf("%d", &a[i]);
	 }
	 	for(i=0; i<5; i++){
	 		for(j=i+1; j<5; j++){
	 			if(a[i]<a[j]){
	 				temp=a[i];
	 				a[i]=a[j];
	 				a[j]=temp;
				 }
			 }
		 }
		 printf("array in descending order:\");
		 for(i=0; i<5; i++){
		 	printf("%d\n", a[i]);
		 }
		 return 0;
 }
 #include<stdio.h>
 int main(){
 	int i,j,n=5,a[n],pos, item;
 	printf("enter elements\n");
 	for(i=0; i<5; i++){
 		scanf("%d", &a[i]);
	 }
	 printf("enter position\n");
	 scanf("%d", &pos);
	 printf("enter itme\n");
	 scanf("%d", &item);
	 for(i=n-1; i>= pos-1; i--){
	 	a[i+1]=a[i]; 	
}
a[pos-1]=item;
n++;
	for(i=0; i<n; i++){
		printf("new array is: %d\n", a[i]);
	}
	 
	 return 0;
 }*/
 #include<stdio.h>
 int main(){
 	int i,n=5,a[n],pos;
 	printf("enter elements\n");
 	for(i=0; i<5; i++){
 		scanf("%d", &a[i]);
	 }
	 printf("enter position\n");
	 scanf("%d", &pos);
	 for(i=pos-1; i<n-1; i++){
	 
	 a[i]= a[i+1];
}
n--;
for(i = 0; i < n; i++)
{
    printf("%d ", a[i]);
}
return 0;
}

