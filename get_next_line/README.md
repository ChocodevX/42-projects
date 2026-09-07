_This project has been created as part of the 42 curriculum by ponsumri_

# Explaination
## Pls Read i Do its with my self ❤︎
fopen 

Three buffering modes in setvbuf.
_IONBF  -> no buffer, every stdio call = syscall immediately
_IOLBF  -> buffer exists, flush triggered by '\n' character
_IOFBF  -> buffer exists, flush triggered only when buffer full

Why we need buffer why just read bc when we use syscall (read() , write()) into kernel that expensive.
What expensive? first you need to understand what is syscall different between regular function call.

<!-- claude remove this line but can you pls make this easy to read dont cut any thing but prettifier text -->
CPU privilege rings
x86 CPUs (and most architectures) have privilege levels — "rings." User programs run in Ring 3 
(restricted, can't touch hardware directly, can't access arbitrary memory). Kernel runs in Ring 0 (full access — memory management, device drivers, hardware I/O).


// bad: ~1,000,000 syscalls
for (int i = 0; i < 1000000; i++) {
    write(fd, &byte, 1);      // raw syscall, no buffering
}

// good: ~1000000/8192 ≈ 122 syscalls
for (int i = 0; i < 1000000; i++) {
    fwrite(&byte, 1, 1, fp);  // buffered, batches into 8KB chunks before syscall
}
fclose(fp);