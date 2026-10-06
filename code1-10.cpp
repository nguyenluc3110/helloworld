
#include <stdio.h>

int main() {
#ifdef __STDC_VERSION__
    printf("C Standard Version: %ld\n", __STDC_VERSION__);
#else
    printf("C Standard Version: C89/C90\n");
#endif
    return 0;
}