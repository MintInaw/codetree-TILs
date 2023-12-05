#include <stdio.h>
#include <stdlib.h>

void input(int *p, int k) 
{
  int i;
    for (i = 0; i < k; i++)
        scanf("%d", &p[i]);
}

int fun(int *x, int *y, int n, int m) {
    int i, j, start, cnt = 0;
    for (i = 0; i < n; i++) {
        if (x[i] == y[0]) {
            start = i;
            cnt = 1;
            for (j = 1; j < m; j++) {
                if (i + j < n && x[i + j] == y[j]) {
                    cnt++;
                } else {
                    break;
                }
            }
            if (cnt == m) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n, m;
    int *p1, *p2;
    int sw;
    scanf("%d %d", &n, &m);
    p1 = (int *)malloc(sizeof(int) * n);
    p2 = (int *)malloc(sizeof(int) * m);
    input(p1, n);
    input(p2, m);
    sw = fun(p1, p2, n, m);
    if (sw == 1)
        printf("Yes\n");
    else
        printf("No\n");
    free(p1);
    free(p2);

    return 0;
}