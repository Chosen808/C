#pragma once
#include <iostream>

typedef Queue q;

class Queue 
{
    public:
        Queue () {}
        
        int initFront (int frt) 
        {
            front = frt;
        }

        int initSize (int sz)
        {
            size = sz;
        }

        unsigned initCap (unsigned cap)
        {
            capacity = cap;
        }

        int initRear (int rr)
        {
            rear = rr;
        }

        int initArray (int arr[])
        {
            array = arr;
        }

        int initArrayIndex (int *arr, int index)
        {
            array[index] = arr[index];
        }

        unsigned reCap ()
        {
            return capacity;
        }

        int reArr (int index)
        {
            return array[index];
        }

        int *reArr ()
        {
            return array;
        }

        int reSize ()
        {
            return size;
        }

        int reRear ()
        {
            return rear;
        }

        int reFrt ()
        {
            return front;
        }
        
        q *createQueue (unsigned capacity);
        int isFull (Queue *queue);
        int isEmpty (Queue *queue);
        void enqueue (Queue *queue, int item);
        int dequeue (Queue *queue);
        int frontOf (Queue *queue);
        int rearOf (Queue *queue);

    private:
        int front {0};
        int rear;
        int size;
        unsigned capacity;
        int *array;

        friend class Queue2;

    protected:
        int funct ()
        {
            std::cout << front << "\n";
        }
};

class Queue2 : public Queue
{
    public:
        int printQueue ()
        {
            funct ();
        }
};