# CS177-demo

## Compiler flags

### `-z execstack`:

Make the stack executable. Make .bss section executable (no longer possible in newer linux kernels)

### `-fno-stack-protector`:

Disable canary

### `-no-pie`

Disable PIE

## Other things

### Disable ASLR

`echo 2 > /proc/sys/kernel/randomize_va_space`

### Enable ASLR

`echo 0 > /proc/sys/kernel/randomize_va_space`