//first non repeating
#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("enter the element:");
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int x = i; x < r; x++) {
                for (int y = (x == i ? j + 1 : 0); y < c; y++) {
                    if (arr[i][j]!=arr[x][y]) {
                        printf("%d", arr[i][j]);
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
