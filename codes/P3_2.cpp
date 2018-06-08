#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAlp(char s) {
    if (s == 'C') return 1;
    if (s == 'H') return 1;
    if (s == 'O') return 1;
    if (s == 'N') return 1;
    return 0;
}

int ch2num(char s) {
    return s - '0';
}

int main(int argc, const char * argv[]) {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        char s[81];
        scanf("%s", s);
        int len = strlen(s);
        float mass = 0;
        for (int j = 0; j < len; j++) { // check each string
            if (s[j] == 'C') { 
                if (j + 2 < len && !isAlp(s[j + 1]) && !isAlp(s[j + 2])) { // two digits
                    mass += 12.01 * (ch2num(s[j + 1]) * 10 + ch2num(s[j + 2])); 
                }
                else if (j + 1 < len && !isAlp(s[j + 1])) { // single digit
                    mass += 12.01 * ch2num(s[j + 1]);
                }
                else {
                    mass += 12.01; 
                }
            }
            if (s[j] == 'H') {
                if (j + 2 < len && !isAlp(s[j + 1]) && !isAlp(s[j + 2])) {
                    mass += 1.008 * (ch2num(s[j + 1]) * 10 + ch2num(s[j + 2])); 
                }
                else if (j + 1 < len && !isAlp(s[j + 1])) {
                    mass += 1.008 * ch2num(s[j + 1]);
                }
                else {
                    mass += 1.008;
                }
            }
            if (s[j] == 'O') {
                if (j + 2 < len && !isAlp(s[j + 1]) && !isAlp(s[j + 2])) {
                    mass += 16.00 * (ch2num(s[j + 1]) * 10 + ch2num(s[j + 2]));
                }
                else if (j + 1 < len && !isAlp(s[j + 1])) {
                    mass += 16.00 * ch2num(s[j + 1]);
                }
                else {
                    mass += 16.00;
                }
            }
            if (s[j] == 'N') {
                if (j + 2 < len && !isAlp(s[j + 1]) && !isAlp(s[j + 2])) {
                    mass += 14.01 * (ch2num(s[j + 1]) * 10 + ch2num(s[j + 2]));
                }
                else if (j + 1 < len && !isAlp(s[j + 1])) {
                    mass += 14.01 * ch2num(s[j + 1]);
                }
                else {
                    mass += 14.01;
                }
            }
        }
        printf("%.3f\n", mass);
    }
    return 0;
}

/*
This question seems easy, but requires careful consideration. The code deals with digit and double-digit case by case. 

Results: 
C6H5OH
94.108

C15H30
210.390

Refer: https://blog.csdn.net/shanchuan2012/article/details/58318201
*/
