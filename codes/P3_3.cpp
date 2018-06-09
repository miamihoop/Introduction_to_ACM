// UVa1225

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int t, str[10];
    scanf("%d", &t); // number of data sets 
    while (t--) {
        int n;
        memset(str, 0, sizeof(str));
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            if (i / 1000) {
                str[i / 1000]++;
                str[i / 100 % 10]++;
                str[i / 10 % 10]++;
                str[i % 10]++;
            }
            else if (i / 100) {
                str[i / 100]++;
                str[i / 10 % 10]++;
                str[i % 10]++;
            }
            else if(i / 10) {
                str[i / 10]++;
                str[i % 10]++;
            }
            else str[i]++;
        }
        for (int i = 0; i < 10; i++) {
            if (i) {
                printf(" "); // won't print " " when i = 0
            }
            printf("%d", str[i]);
        }
        printf("\n");
    }
    return 0;
}

/*
 input:
 2
 3
 13
 
 output:
 0 1 1 1 0 0 0 0 0 0 
 1 6 2 2 1 1 1 1 1 1
 
 refer: 
 https://blog.csdn.net/jibancanyang/article/details/42420707
*/
