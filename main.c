
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/types.h>


#define offsetof(TYPE, MEMBER)  ((size_t) &((TYPE *)0)->MEMBER)

#define container_of(ptr, type, member) ({              \
    const typeof(((type *)0)->member)*__mptr = (ptr);   \
    printf("__mptr:%p \r\n", __mptr);                  \
    (type *)((char *)__mptr - offsetof(type, member)); })


struct list_head
{
    struct list_head *next, *prev;
};

typedef struct _fox
{
    unsigned char is_fantastic;
    unsigned int tail_length;
    struct list_head list;
    unsigned long weight;
    unsigned long weight2;
}fox;


/**
  * @brief  main.
  * @param  
  * @retval 
  */
int main(int argc, char *argv[])
{
    printf("\033[31;43m## [CZP] %s %s at %d\033[0m\n", __FILE__, __FUNCTION__, __LINE__);
    struct _fox *red_fox;
    red_fox = (struct _fox *)malloc(sizeof(struct _fox));
    red_fox->tail_length = 40;
    red_fox->weight = 6;
	/*red_fox->list.prev = red_fox->list;*/
    printf("sizeof(unsigned char):%d \r\n",sizeof(unsigned char));
    printf("sizeof(unsigned int):%d \r\n",sizeof(unsigned int));
    printf("sizeof(unsigned long):%d \r\n",sizeof(unsigned long));
    printf("sizeof(unsigned struct list_head):%d \r\n",sizeof(struct list_head));
    printf("red_fox:                %p \r\n", red_fox);
    printf("red_fox->tail_length:   %p \r\n", &red_fox->tail_length);
    printf("red_fox->weight:        %p \r\n", &red_fox->weight);
    printf("red_fox->is_fantastic:  %p \r\n", &red_fox->is_fantastic);
    printf("red_fox->weight2:       %p \r\n", &red_fox->weight2);
    printf("red_fox->list:          %p \r\n", &red_fox->list);

    struct list_head *p;
    struct _fox *f;
    f = container_of(&red_fox->list, struct _fox, list);
    printf("f:                %p \r\n", f);
    printf("f->tail_length:   %p \r\n", &f->tail_length);
    printf("f->weight:        %p \r\n", &f->weight);
    printf("f->is_fantastic:  %p \r\n", &f->is_fantastic);
    printf("f->weight2:       %p \r\n", &f->weight2);
    printf("f->list:          %p \r\n", &f->list);

    printf("offsetof(struct _fox, list):0x%x \r\n", offsetof(struct _fox, list));

    return 0;    
}


