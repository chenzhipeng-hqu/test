
#include <stdio.h>

#include "a_test.h"
#include "b_test.h"


int main(int argc, char *argv[])
{
    printf("hello world.\r\n");

    get_a_test_value();
    get_b_test_value();
    
    return 0;
}
