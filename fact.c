#include <stdio.h>

int fact(int num) {
    if (num == 0) {
        return 1;
    }
    return (num * fact(num-1));
}

int main() {
    int ans = fact(4);
    printf("%d", ans);
}

//what is factorial?
// 4! = 4*3*2*1
// 4! = 4 * (4-1)!
// fact(n) = n * fact(n-1);