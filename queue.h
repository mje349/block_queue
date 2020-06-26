// Author: Montana Esguerra
// Date: 6/25/20
// Filename: queue.h
// Description: queue of blocks where a block consists of an x value and a y value

#include <stdio.h>
#include <stdlib.h>

#define QUEUEMAX 10

struct block {
    int x;
    int y;
};

void block_nullify(struct block* in);

void set_block(int xin, int yin, struct block* in);

void print_block();

