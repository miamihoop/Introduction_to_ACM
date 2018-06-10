// UVa455

#include <stdio.h>
#define maxn 100

int main(int argc, const char * argv[]) {
    // insert code here...
    int N, m, flag, i;
    char s[maxn];
    scanf("%d", &N); // number of inputs
    while (N--) {
        scanf("%s", s);
        m = strlen(s);
        for (i = 1; i <= m; i++) { // check 1, 2, ..., m to find out the period
            flag = 1; 
            for (int j = 0; j < m; j++) { 
                if (s[j] != s[j % i]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                printf("%d\n", i);
                break; // just find out the min period
            }
        }
    }
    return 0;
}
