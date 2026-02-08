//Department Consistency Check

#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int count = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        int min = arr[i][0];
        int max = arr[i][0];
        for(int j = 1; j < c; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
         int res=max-min;
        if(res <= 1000)
            count++;
    }

    printf("%d", count);
}
 


