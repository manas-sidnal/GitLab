#include <stdio.h>

int add(int x, int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}
int main() {
    int x = add(1, 2);
    int y = sub(2, 1);
    printf("%d %d", x, y);
    return 0;
}