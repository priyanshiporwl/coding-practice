/*#include<stdio.h>
int main(){
	int a[3][3], i,j;
	printf("enter elements\n");
	for(i=0; i<3; i++){
	
		for(j=0; j<3; j++){
				scanf("%d", &a[i][j]);
		}
		
	}
	printf("the array is :\n");
	for(i=0; i<3; i++){
	
		for(j=0; j<3; j++){
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
#include<stdio.h>
int main(){
	int a[2][2],i,j, sum=0;
	printf("enter elements\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &a[i][j]);
		}	
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			sum = sum+a[i][j];
		}
	}
	printf("sum is %d",sum);
	return 0;
	
}
#include<stdio.h>
int main(){
	int a[2][2],i,j, sum=0 ,avg=0;
	printf("enter elements\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &a[i][j]);
		}	
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
		sum = sum+a[i][j];
		
		}
	}
	avg =sum/4;
	printf("avg is %d",avg);
	return 0;
	
}
#include<stdio.h>
int main(){
	int a[2][2], i,j,largest;
	printf("enter the elements\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &a[i][j]);
		}
	}
	largest=a[0][0];
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(a[i][j]>largest){
			largest=a[i][j];
			}
		}
	}
	printf("largest element is %d", largest);
	return 0;
}
#include<stdio.h>
int main(){
	int a[2][2], i,j,smallest;
	printf("enter elements\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d", &a[i][j]);
		}
	}
	smallest = a[0][0];
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(a[i][j]<smallest){
				smallest=a[i][j];
			}
		}
	}
	printf("smallest element is: %d", smallest);
	return 0;
	
}

#include<stdio.h>
int main(){
	int a[3][3], i ,j, even=0, odd=0;
	printf("enter elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
					}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(a[i][j]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}
	}
	printf("number of even or odd numbers are %d and %d",even,odd);
	return 0;
}
#include<stdio.h>
int main(){
	int a[3][3], i,j,row1=0, row2=0, row3=0;
	printf("enter elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
					}
	}
	
		for(j=0; j<3; j++){
			row1= a[0][j]+row1;
			row2= a[1][j]+row2;
			row3= a[2][j]+row3;
		}	
	
	printf("sum r1 is  %d\n", row1);
	printf("sum is r2  %d\n", row2);
	printf("sum is r3  %d\n", row3);
	return 0;
	}
	#include<stdio.h>
int main(){
	int a[3][3], i,j,sum=0;
	printf("enter elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
					}
	}
	for(j=0; j<3; j++){
		sum =0;
	
	for(i=0; i<3; i++){
		
	
			sum =sum+a[i][j];
		
	}
	printf("sum of column is %d    %d", j+1, sum);
}
	
	return 0;
}
#include<stdio.h>
int main(){
	int a[3][3], i,j,largest;
	printf("enter elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
					}
	}
	for(i=0; i<3; i++){
	
	largest=a[i][0];
	
		for(j=0; j<3; j++){
			if(a[i][j]>largest){
				largest=a[i][j];
			}
			
	
		}	
			printf(" largest in row %d is %d", i+1, largest);
}

	return 0;
	}

#include<stdio.h>
int main(){
	int a[3][3], i, j,smallest;
	printf("enter elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(j=0; j<3; j++){
		smallest=a[0][j];
		for(i=0; i<3; i++){
			if(a[i][j]<smallest){
				smallest=a[i][j];
			}
		}
		printf("smallest in column %d is %d ",j+1,smallest);
	}
	return 0;
}
#include<stdio.h>
int main(){
	int a[3][3], i, j, sum=0,maxsum=0,maxrow;
	printf("enter elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<3; i++){
		sum=0;
		for(j=0; j<3; j++){
			sum = a[i][j]+sum;
		}
		if(sum>maxsum){
			maxsum=sum;
			maxrow=i;
		}
		
		
	}
	printf("max sum row is %d and max sum is %d", maxrow,maxsum);
	return 0;
}
#include<stdio.h>
int main (){
int a[3][3], i,j,sum=0, maxsum=0, maxcol;
printf("enter elements\n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
	}
}
	for(j=0; j<3; j++){
		sum=0;
		for(i=0; i<3; i++){
			sum=sum+a[i][j];
		}
		if(sum>maxsum){
			maxsum=sum;
			maxcol=j;
		}
	}
	printf("max sum col is %d and sum is %d", maxcol,maxsum);
	return 0;

}
#include<stdio.h>
int main (){
int a[3][3],b[3][3] ,i,j,c[3][3];
printf("enter elements for m1 \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
	}
}
	printf("enter the elements for m2 \n");

for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &b[i][j]);
	}
}
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		c[i][j]=a[i][j]+b[i][j];
		printf("sum of m1 and m2 is %d\n", c[i][j]);
	}
	
}

return 0;
}
#include<stdio.h>
int main (){
int a[3][3],b[3][3] ,i,j,c[3][3];
printf("enter elements for m1 \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
	}
}
	printf("enter the elements for m2 \n");

for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &b[i][j]);
	}
}
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		c[i][j]=a[i][j]-b[i][j];
		printf("%d ", c[i][j]);
	}
	printf("\n");
}

return 0;
}

#include<stdio.h>
int main(){
	int a[3][3], i,j,transpose;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("original matrix\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d  ",a[i][j]);
}
printf("\n");
}
printf("transpose is\n ");
for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			transpose=a[j][i];
			printf("%d  ", transpose);
}
printf("\n");
}
return 0;
}

#include<stdio.h>
int main (){
int a[3][3],b[3][3] ,i,j,equal=1;
printf("enter elements for m1 \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
	}
}
	printf("enter the elements for m2 \n");

for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &b[i][j]);
	}
}
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(a[i][j]!=b[i][j]){
			equal=0;
			break;
		}
	}
}
if(equal==0){
	printf("a and b are not equal\n");
}
else{
	printf("a and b are equal");
}
return 0;
}
#include<stdio.h>
int main(){
	int a[3][3], i,j, identity=1;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
}

}
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==j){
			if(a[i][j]==1){
				identity =1;
			}
			else{
				identity=0;
			}
		}
		else{
			if(a[i][j]!=0){
				identity=0;	
			
		}
		
		}
	
}
}

if(identity==1){
	printf("identity");
}
else{
	printf("not identity");
}
return 0;
}
#include<stdio.h>
int main(){
	int a[3][3], i,j, sum=0;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
}

}
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==j){
			sum=sum+a[i][j];
			}
	}
}
printf("sum of main diagonal is %d ", sum);
return 0;
}
	#include<stdio.h>
int main(){
	int a[3][3], i,j, sum=0;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
}

}
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i+j==2){
			sum=sum+a[i][j];
			}
	}
}
printf("sum of secondary diagonal is %d ", sum);
return 0;
}

	#include<stdio.h>
int main(){
	int a[3][3], i,j, sum1=0,sum2=0;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
}

}
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==j){
			sum1=sum1+a[i][j];
		}
	 if(i+j==2){
			sum2=sum2+a[i][j];
			}
	}
}
printf("sum of main diagonal is %d\n ", sum1);

printf("sum of secondary diagonal is %d ", sum2);
return 0;
}
#include<stdio.h>
int main(){
	int a[3][3], i,j, largest;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
}
}
largest=a[0][0];

	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	if(a[i][j]>largest){
		largest=a[i][j];
	}
}
}
printf("largest element is %d", largest);
return 0;
}
#include<stdio.h>
int main(){
	int a[3][3], i,j, smallest;
	printf("enter the elements\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &a[i][j]);
}
}
smallest=a[0][0];

	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	if(a[i][j]<smallest){
		smallest=a[i][j];
	}
}
}
printf("smallest element is %d", smallest);
return 0;
}
#include<stdio.h>
int main(){
	int a[3][3],i,j,even=0,odd=0;
	printf("enter the elements");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
		if(a[i][j]%2==0){
			even++;
		}
		else{
			odd++;
		}
		}
	}
	
printf("total even numbers are %d\n", even);
printf("total odd numbers are %d", odd)	;
return 0;
	}
#include<stdio.h>
int main(){
	int a[3][3], i,j,minsum=0,minrow,sum=0;
	printf("enter the elements");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<3; i++){
		sum=0;
		for(j=0; j<3; j++){
			sum=a[i][j]+sum;
			if(minsum>sum){
		minsum=sum;
		minrow=i;
		}
	}
	
	printf("mix sum row is %d and sum is %d", minrow+1,minsum);
	
	
		return 0;	
}

#include<stdio.h>
int main(){
	int a[3][3],i,j,mincol,minsum,sum=0;
	printf("enter the elements");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
		scanf("%d", &a[i][j]);
	}
minsum = a[0][0] + a[1][0] + a[2][0];
mincol = 0;
	for(j=0; j<3; j++){
		sum=0;
		for(i=0; i<3; i++){
		sum=sum+a[i][j];
		}
		if(minsum>sum){
			minsum=sum;
			mincol=j;
		}
	}
	printf("min sum column is %d and min sum is %d",mincol,minsum);
	return 0;
	
}

#include<stdio.h>
int main(){
	int a[3][3],i,j,sum=0;
	printf("enter the elements");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
	     if(i==0 || j==0 || i==2 || j==2){
	     	sum=a[i][j]+sum;
		 }
		}
	}
	printf("sum of border elements is %d",sum);
	return 0;
}	
*/


#include<stdio.h>
int main(){
	int a[3][3],i,j,sum=0;
	printf("enter the elements");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
	     if(i!=0 && j!=0 && i!=2 && j!=2){
	     	sum=a[i][j]+sum;
		 }
		}
	}
	printf("sum of non border elements is %d",sum);
	return 0;
}
#include<stdio.h>
int main(){
	int a[3],i,largest,seclargest;
	printf("enter the elements");
	for(i=0; i<3; i++){
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=0; i<3; i++){
		if(largest<a[i]){
			largest=a[i];
		}
	}
	seclargest=a[0];
	for(i=0; i<3; i++){
		if(largest<a[i]&& a[i]>seclargest){
			seclargest=a[i];
		}
	}
	printf("second largest element is %d",seclargest);
	return 0;

}
		

										
