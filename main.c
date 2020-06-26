// Author: Montana Esguerra
// Date: 6/25/20
// Filename: main.c
// Description: testbed for queues and pointers
//
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(int argc, char* argv[])
{
    struct block block_queue[QUEUEMAX];
    //int* queue_cnt;

    //struct block test;
    //set_block(1, 2, &test);
    //print_block(&test);

    set_block(3, 4, &block_queue[0]);
    set_block(5, 6, &block_queue[1]);
    set_block(7, 8, &block_queue[2]);
    set_block(9, 10, &block_queue[3]);
    set_block(11, 12, &block_queue[4]);
    set_block(13, 14, &block_queue[5]);
    set_block(15, 16, &block_queue[6]);
    set_block(17, 18, &block_queue[7]);
    set_block(19, 20, &block_queue[8]);
    set_block(21, 22, &block_queue[9]);

    for (int i = 0; i < QUEUEMAX; ++i)
    {
        printf("[%d]\n", i);
        print_block(&block_queue[i]);
        printf("======================\n");
    }






    return 0;
}
