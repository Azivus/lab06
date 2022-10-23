#include <stdio.h>

int main() {
    char words[] = "lvanov";
    words[0] = 'n';
    words[1] = 'o';
    words[2] = 'v';
    words[3] = 'l';
    words[4] = 'v';
    words[5] = 'a';

    
    printf("%s\n", words);

    return 0;
}
