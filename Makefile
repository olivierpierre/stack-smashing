all:
	gcc -fno-stack-protector hackme.c -g -static -o hackme

disable-aslr:
	echo 0 | sudo tee /proc/sys/kernel/randomize_va_space

enable-aslr:
	echo 2 | sudo tee /proc/sys/kernel/randomize_va_space

clean:
	rm -rf *.o hackme

