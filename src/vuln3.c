// This is to demostrate how to overwrite the return address to a piece of shellcode
// NOTICE: compile it with -z execstack
#include <stdio.h>
#include <unistd.h>

int main(){
    char buffer[0x30];  // You can write shellcode here first
    read(STDIN_FILENO, buffer, 0x30 + 0x10);  // Then return to that stack address (if you know the addr)
    return 0;
}