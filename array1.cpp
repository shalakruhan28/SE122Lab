#include<stdio.h>
int main (){

int a[5],i,sum=0;
printf("Enter five number:");
for(i=0;i<5;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<5;i++){

sum=sum+a[i];
}
printf("The sum is :%d\n",sum);
printf("The avarage is:%.2f", (float)sum/5);
return 0;
}
