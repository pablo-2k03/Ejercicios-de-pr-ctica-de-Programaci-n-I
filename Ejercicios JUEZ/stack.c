#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
char msg[1000];
if (fgets(msg, sizeof msg, stdin)) {
    int len = strlen(msg);
    if (msg[len - 1] == '\n') {  // potential undefined behavior!
        msg[--len] = '\0';       // potential undefined behavior!
    }
}
}
