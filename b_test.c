

#include <stdio.h>

typedef struct
{
   int u16B; 
   char aB[10];
}TypeDef;

static TypeDef typedef_ = {10, "bbb"};

static int test_value = 1;

void get_b_test_value(void)
{
    printf("%s, %d, %s, %p \r\n", __FUNCTION__, typedef_.u16B, typedef_.aB, &typedef_);

    printf("%s, test_value=%d, test_value=%p\r\n", __FUNCTION__, test_value++, &test_value);    
}

