/*
 * Written to show off how Address Sanitizer displays double free error
 */

#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char* x = (char*)malloc(10 * sizeof(char));
    memset(x, 0, 10);
    int res = x[argc];
    free(x);
    free(x + argc - 1);  // Error Here 
    return res;
}
