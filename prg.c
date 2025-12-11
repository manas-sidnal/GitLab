#include <stdio.h>

int add(int x, int y){
    return x+y;
}
int main() {
    int x = add(1, 2);
    printf("%d", x);
    return 0;
}