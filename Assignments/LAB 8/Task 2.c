#include <stdio.h>
#include <string.h>

int main() {
    char course1[30] = "Programming Fundamentals";
    char course2[30] = "Applied Physics";
    char combined[60];
    int freq[256] = {0};
    char maxChar = '\0';
    int max = 0;

    strcpy(combined, course1);
    strcat(combined, course2);

    for (int i = 0; combined[i] != '\0'; i++) {
        unsigned char c = combined[i];
        if (c != ' ' && c != ',') {
            freq[c]++;
            if (freq[c] > max) {
                max = freq[c];
                maxChar = c;
            }
        }
    }
    printf("Most frequent character: %c\n", maxChar);
    return 0;
}

