all : Kernel32.bin

Kernel32.bin : Source/Entrypoint.s
	nasm -o Kernel32.bin $<

clean : 
	rm -f Kernel32.bin
