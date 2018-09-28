

#include <stdio.h>

typedef struct
{
   int u16A; 
   char aA[10];
}TypeDef;

static TypeDef typedef_ = {20, "aaa"};

static int test_value = 2;

void get_a_test_value(void)
{

    printf("%s, %d, %s, %p \r\n", __FUNCTION__, typedef_.u16A, typedef_.aA, &typedef_);

    printf("%s, test_value=%d, test_value=%p\r\n", __FUNCTION__, test_value++, &test_value);    
}

