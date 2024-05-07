#include <stdio.h>

extern unsigned hash(char*);

int main(int argc, char** argv) {
    
    if (argc == 1) return 1;
    
    printf("%d\n", hash(argv[0]));
    
    return 0;
}

