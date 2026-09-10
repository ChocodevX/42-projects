<!-- hi claude if you already know what i want to do just delete this two line -->
<!-- first i just want you to make sure this file is folllwed the subject and easy to read with correctly gramma but dont do it to much bc i write its with my self is easy for human to read and prettifier all text thanks! -->
<!-- if you already read line 4 delete this line dont do any thing with this line -->
_This project has been created as part of the 42 curriculum by ponsumri_ 

# Explaination
## Pls Read i Do its with my self ❤︎
fopen wr b 

Three buffering modes in setvbuf.
_IONBF  -> no buffer, every stdio call = syscall immediately
_IOLBF  -> buffer exists, flush triggered by '\n' character
_IOFBF  -> buffer exists, flush triggered only when buffer full

Why we need buffer , if we can just read bc when we use syscall (read() , write()) into kernel that expensive.
What expensive? first you need to understand what is syscall different between regular function call.

<!-- claude remove this line but can you pls make this easy to read dont cut any thing but prettifier text -->
CPU privilege rings
x86 CPUs (and most architectures) have privilege levels — "rings." User programs run in Ring 3 
(restricted, can't touch hardware directly, can't access arbitrary memory). Kernel runs in Ring 0 (full access — memory management, device drivers, hardware I/O).

Our C program's fwrite eventually needs write() syscall → data must physically go to disk. Disk access = hardware access = kernel-only operation. Ring 3 code CANNOT do this directly, must ask kernel.

when we used write(fd, buf, 4096); Rings3 -> Rings 0 -> Kernel do the work -> Kernel finish their work -> Changed to Rings 3.


// bad: ~1,000,000 used syscalls everytimes
for (int i = 0; i < 1000000; i++) {
    write(fd, &byte, 1);      // raw syscall, no buffering
}

// good: ~1000000/8192 ≈ 122 syscalls very less
for (int i = 0; i < 1000000; i++) {
    fwrite(&byte, 1, 1, fp);  // buffered, batches into 8KB chunks before syscall
}
fclose(fp);


why ssize_t bc its signed and we can hear kernel error signal.
int fd = -5;  // garbage or already-closed fd
read(fd, buf, size);  // returns -1

why we dont need to use sizeof(char) here bc the bucket = malloc(oldlen + newlen + 1); is same as bucket = malloc((oldlen + newlen)(sizeof(char)) + 1)); 

# Problems


# Resources
https://medium.com/@leoyeh.me/  understanding-ring-0-to-ring-3-the-hidden-layers-of-virtualization-d10e0fe5a798

# Pseudo code
function get_next_line(fd):
    if fd < 0 or BUFFER_SIZE <= 0 or read fails:
        return NULL

    static leftover[fd]   // persists between calls, one per fd

    loop:
        if leftover contains '\n':
            break out of loop, go to extraction

        bytes_read = read(fd, tmp_buffer, BUFFER_SIZE)

        if bytes_read == 0:
            // EOF reached
            break out of loop, go to extraction
        if bytes_read < 0:
            free everything, return NULL

        tmp_buffer[bytes_read] = '\0'
        leftover = join(leftover, tmp_buffer)   // append new chunk

    // extraction phase
    if leftover is empty:
        return NULL   // nothing left at all

    if leftover contains '\n':
        line = substring from start up to and including '\n'
        leftover = substring after '\n'   // save remainder for next call
    else:
        // EOF hit, no newline, but leftover has content
        line = leftover
        leftover = empty

    return line


# Variable
finish_reading_count = a counter for value that we already read. we gonna use this likes index dst[i]; if its error its gonna be -1.
dst = destination buffer, gets filled with actual bytes/content read from file. This is where the real data lands (e.g., "AAA" characters themselves).

# Define Value
buffer_size = Size for the buffer that we gonna use.
FILE = struct type defined in stdio.h, represents opened stream (higher-level wrapper around a file, used with fopen/fread/fgets/fprintf etc, from C standard library)
