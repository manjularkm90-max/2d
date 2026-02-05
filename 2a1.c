// #include<stdio.h>
// int main(){
//     int arr[2][2],i,j;
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("enter the element:");
//             scanf("%d",&arr[i][j]);
            
//         }
        
//     }
    
//      for(i=0;i<2;i++)
//     {
//         for(j=0;j<12;j++)
//         {
//             printf("%d",arr[i][j]);
            
//         }
//         printf("\n");
        
//      }
// }

// #include<stdio.h>
// int main(){
//     int arr1[2][2],arr2[2][2],i,j;
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("enter the element:");
//             scanf("%d",&arr1[i][j]);
            
//         }
        
//     }
//       printf("next array\n:");
//       for(i=0;i<2;i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             printf("enter the element:");
//             scanf("%d",&arr2[i][j]);
            
//         }
        
//     }
    
//      for(i=0;i<2;i++)
//     {
//         for(j=0;j<12;j++)
//         {
//             printf("%d",arr1[i][j]+arr2[i][j]);
            
//         }
//         printf("\n");
//     }
// }

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
           if(arr[i][j] > max1){
            max2=max1;
            max1=arr[i][j];

           }else if(arr[i][j]>max2 && arr[i][j]!=max1){

            max2=arr[i][j];


           }

        }

    }

    printf("highest salary:%d\n",max1);
        printf("second highest distinct salary:%d",max2);

}