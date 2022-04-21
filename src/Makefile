DISBLAE_CANARY = -fno-stack-protector
DISABLE_PIE = -no-pie
EXEC_STACK = -z execstack

all: vuln1 vuln2 vuln3

vuln1:
	gcc vuln1.c -o build/vuln1 -g
vuln2:
	gcc vuln2.c -o build/vuln2 $(DISABLE_PIE) $(DISBLAE_CANARY)
vuln2:
	gcc vuln3.c -o build/vuln3 $(DISABLE_PIE) $(DISBLAE_CANARY) $(EXEC_STACK)

clean:
	rm build/*