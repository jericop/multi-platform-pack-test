#include <stdio.h>

#if defined(__amd64__) || defined(__x86_64__)
    #define ARCH "AMD64"
#elif defined(__arm__) || defined(__aarch64__)
    #define ARCH "ARM"
#else
    #define ARCH "Unknown"
#endif

void main(int argc, char* argv){
#ifdef ARCH == "AMD64"
    printf("Hello from AMD64\n");
#elif ARCH == "ARM"
    printf("Hello from ARM\n");
#endif
}
