#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


bool SubsetSum(int x[], int n, int k, int v) {
    if (v== 0 && k == 0) return true;
    if (v != 0 && k == 0) return false;
    if (n == 0) return false;

    int r1 = 0;
    if(v >= x[0]) r1 = SubsetSum(x + 1, n - 1, k - 1, v - x[0]);
    int r2 = SubsetSum(x + 1, n - 1, k, v);
    if(r1 + r2 > 0) {
        return true;
    }
    return false;
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    if(SubsetSum(a, 5, 2, 3)) printf("Yay!\n");
    else printf("No!\n");
    return 0;
}