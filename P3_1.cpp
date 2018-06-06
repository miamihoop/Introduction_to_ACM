#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int tot = 0; 
    int num = 0;
    char s;
    while ((s = getchar()) != '\n') {
        if (s == 'O') {
            num++;
        }
        else {
            num = 0;
        }
        tot = tot + num;
    }
    printf("%d\n", tot);
    return 0;
}
