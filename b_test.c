

#include <stdio.h>

static int test_value = 1;

void get_b_test_value(void)
{

    printf("%s, test_value=%d, test_value=%p\r\n", __FUNCTION__, test_value++, &test_value);    
}

