#include <sys/types.h>

#ifndef LAB_4_BUFFER_H
#define LAB_4_BUFFER_H

#define BUFFER_SIZE 20
#define PRODUCERS 128
#define CONSUMERS 128

typedef struct {
    char type;
    short hash;
    int size;
    char data[256];
} msg_t;

typedef struct {
    size_t put_count;
    size_t pop_count;

    size_t head;
    size_t tail;
    size_t size;
    msg_t messages[BUFFER_SIZE];
} buff_t;

short hash(const msg_t* msg);

int put(buff_t* buff, msg_t* msg);
int pop(buff_t* buff, msg_t* msg);

#endif //LAB_4_BUFFER_H
