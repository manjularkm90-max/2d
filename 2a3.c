#include <stdio.h>
int main() {
    int r, c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxUnique = 0;
    int deptIndex = 0;
    for (int i = 0; i < r; i++) {
        int uniqueCount = 0;
        for (int j = 0; j < c; j++) {
            int isUnique = 1;
            for (int k = 0; k < j; k++) {
                if (arr[i][j] == arr[i][k]) {
                    isUnique = 0;
                    break;
                }
            }
            if (isUnique) {
                uniqueCount++;
            }
        }
        if (uniqueCount > maxUnique) {
            maxUnique = uniqueCount;
            deptIndex = i;
        }
    }
    printf("%d", deptIndex);
}
