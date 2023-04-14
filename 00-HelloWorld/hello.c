#include <stdio.h>

int main() {

    FILE *fp;
    fp = freopen("output.txt", "w", stdout);

    printf("Hello, World!\n");

    fclose(fp);
    return 0;
}
