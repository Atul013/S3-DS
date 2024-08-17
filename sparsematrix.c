#include <stdio.h>

int main() {
    int i, j, k = 1, r, c, n = 0;
    int a[100][100], T[100][3];


    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &r);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &c);


    printf("\tEnter the matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("\tThe matrix entered is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }


	
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != 0) {
                T[k][0] = i;       // Row index
                T[k][1] = j;       // Column index
                T[k][2] = a[i][j]; // Non-zero value
                k++;
                n++;
            }
        }
    }


    T[0][0] = r;
    T[0][1] = c;
    T[0][2] = n;


    printf("\tThe sparse matrix is:\n");
    for (i = 0; i <= n; i++) { // Iterate up to n (including the header row)
        for (j = 0; j < 3; j++) {
            printf("%d \t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}

