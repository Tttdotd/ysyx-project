#include <stdio.h>
#include <string.h>
int main() {
    char str[] = {'a', 'b'};
    int size = strlen(str);
    printf("%d %ld", size, sizeof(str));
    return 0;
}
