// This is to demostrate overwriting a variable
#include <stdio.h>
#include <unistd.h>

int main(){
    char buffer[8];
    int victim = 0x1337;
    read(STDIN_FILENO, buffer, 8 + 4);
    printf("%x\n", victim);
    return 0;
}