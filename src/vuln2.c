// This is to demostrate how to overwrite the return address
#include <stdio.h>
#include <unistd.h>

volatile void backdoor(){  // You can return to here
    puts("CS177");
}

int main(){
    char buffer[8];
    read(STDIN_FILENO, buffer, 0x18);
    // printf the address the program is about to return to
    printf("%p\n", *(unsigned long*)(buffer + 0x10));
    return 0;
}