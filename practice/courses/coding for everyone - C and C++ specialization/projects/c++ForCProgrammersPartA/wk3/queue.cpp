#include <iostream>
#include <limits>
#include <queue.h>

/*struct Queue
{
    int front, rear, size;
    unsigned capacity;
    int *array;
};

struct Queue *createQueue (unsigned capacity)
{
    struct Queue *queue = NULL;
    queue = (struct Queue*) malloc (sizeof (struct Queue));

    if (queue == NULL)
    {
        std::cout << "Memory not allocated for queue \n";
    }

    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = NULL;

    queue->array = (int*) malloc (queue->capacity * sizeof (int));

    if (queue->array == NULL)
    {
        std::cout << "Memory not allocated for array \n";
    }

    return queue;
} 

int isFull (struct Queue *queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty (struct Queue *queue)
{
    return (queue->size == 0);
}

void enqueue (struct Queue *queue, int item)
{
    if (isFull (queue))
    {
        return;
    }

    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;

    std::cout << item << " enqueued to queue \n";
}

int dequeue (struct Queue *queue)
{
    if (isEmpty (queue))
    {
        return 1;
    }

    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;

    queue->size = queue->size - 1;

    return item;
}

int front (struct Queue *queue)
{
    if (isEmpty (queue))
    {
        return 1;
    }

    return queue->array[queue->front];
}

int rear (struct Queue *queue)
{
    if (isEmpty (queue))
    {
        return 1;
    }

    return queue->array[queue->rear];
}*/

q Queue::*createQueue (unsigned capacity)
{
    Queue *queue = NULL;
    queue = (Queue*) malloc (sizeof (Queue));

    if (queue == NULL)
    {
        std::cout << "Memory not allocated for queue \n";
    } 

    queue->initCap (capacity);
    queue->initFront (queue->initSize (0));
    queue->initRear (capacity - 1);
    queue->initArray (NULL);
    

    queue->initArray ((int*) malloc (queue->reCap () * sizeof (int)));

    if (queue->reArr () == NULL)
    {
        std::cout << "Memory not allocated for array \n";
    }

    return queue;
}

int Queue::isFull (Queue *queue)
{
    return (queue->reSize () == queue->reCap ());
}

int Queue::isEmpty (Queue *queue)
{
    return (queue->reSize () == 0);
}

void Queue::enqueue (Queue *queue, int item)
{
    if (isFull (queue))
    {
        return;
    }

    queue->initRear (queue->reRear () + 1 % queue->reCap ());
    queue->initArrayIndex (&item, queue->reRear ());
    queue->initSize (queue->reSize () + 1);

    std::cout << item << " enqueued to queue \n";
}

int Queue::dequeue (Queue *queue)
{
    if (isEmpty (queue))
    {
        return 1;
    }

    int item = queue->reArr (queue->reFrt ());
    queue->initFront (queue->reFrt () + 1 % queue->reCap ());

    queue->initSize (queue->reSize () - 1);

    return item;
}

int Queue::frontOf (Queue *queue)
{
    if (isEmpty (queue))
    {
        return 1;
    }

    return queue->reArr (queue->reFrt ());
}

int Queue::rearOf (Queue *queue)
{
    if (isEmpty (queue))
    {
        return;
    }

    return queue->reArr (queue->reRear ());
}


main ()
{
    Queue *queue = createQueue (1000);

    Queue a;

    a.enqueue (queue, 10);
    a.enqueue (queue, 20);
    a.enqueue (queue, 30);
    a.enqueue (queue, 40);

    std::cout << a.dequeue (queue) << " dequeue from queue \n";
    std::cout << "Front item is " << a.frontOf (queue) << "\n";
    std::cout << "Rear item is " << a.rearOf (queue) << "\n";

    return 0;
}
