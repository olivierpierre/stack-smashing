all:
	gcc -fno-stack-protector hackme.c -g -static -o hackme

clean:
	rm -rf *.o hackme

