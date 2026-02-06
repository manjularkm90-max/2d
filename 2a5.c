#include<stdio.h>
#include<limits.h>
int main(){
int r,c;
scanf("%d%d",&r,&c);
int i,j;
int arr[r][c];
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("enter the element:");
        scanf("%d",&arr[i][j]);
    }
}
int min=INT_MAX;
int avg;
int val=0;
for(i=1;i<r;i++){
    int sum=0;
    for(j=i;j<c;j++){
        sum=sum+arr[i][j];

    }
    avg=sum/c;
    if(avg<min){
        min=avg;
        val=i;

   }
   printf("%d\n",val);
}
}



    