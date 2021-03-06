//pqueue.h
//Ledbetter, Randy
//rml

/*
 * =====================================================================================
 *
 *      Filename:       pqueue.h
 *
 *   Description:       Header file pqueue.h: This is the Definition/Interface for
 *                      the class Pqueue.
 *       Version:       2.0
 *       Created:       Thu 18 Oct 2012 08:45:00 PM PDT
 *      Revision:       none
 *      Compiler:       gcc/g++
 *
 *        Author:       Randy Michael Ledbetter (rml), rledbetter@mail.csuchico.edu
 *  Organization:       CSU Chico Computer Science Department
 *
 * =====================================================================================
 */

#include <iostream>
#include "cust.h"

using namespace std;

#ifndef PQUEUE_H
#define PQUEUE_H

class Pqueue
{
    public:

        Pqueue();
        ~Pqueue();

        void insert_by_arrival_time(Cust *pointer_to_customer);

        void enqueue(Cust *pointer_to_customer);

        bool dequeue(Cust **removed_customer);

        bool empty();

        void remove();


    private:

            class PqueueNode
            {
                public:

                    Cust *m_customer;
                    PqueueNode *m_next;
            };


        PqueueNode *m_front; //Points to the head of a linked list.
                             //Items are removed at this end.
        PqueueNode *m_back;  //Points to the node at the other end
                             //of the linked list. Items are added
                             //at this end.
};

#endif



