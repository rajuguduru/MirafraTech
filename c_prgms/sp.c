#include <stdio.h>
#include <math.h>

int main() {
    int n, x, r, c, s, z, p;
    scanf("%d", &n);

    int a[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &x);

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == x) {
                r = i;
                c = j;
                break;
            }
        }
    }
    s = r + c;
    z = a[r][(c-s+n)%n];
    p = 0;
    while (z > 0) {
        int digit = z % 10;
        p += digit * digit;
        z /= 10;
    }
    printf("%d", p);
    return 0;
}

