#include<stdio.h>
#include<limits.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enter the element:");
            scanf("%d",&arr[i][j]);
        }
    }
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             if(arr[i][j]>max1){
                max2=max1;
                max1=arr[i][j];
            }
            else if(arr[i][j]>max2 && arr[i][j]!=max1){
                max2=arr[i][j];
            }
        }
    }//printf("%d",max1*max2);
    int min1=INT_MAX;
    int min2=INT_MAX;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min1){
                min2=min1;
                min1=arr[i][j];
            }
            else if(arr[i][j]<min2 && arr[i][j]!=min1){
                min2=arr[i][j];
            }
        }
    } //printf("%d",min1*min2);
    if(min1*min2>max1*max2){
        printf("%d",min1*min2);
    }
    else if(max1*max2>min1*min2){
        printf("\n%d",max1*max2);
    }
}


