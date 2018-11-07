
/*******************************************************************
 * Project 4
 * Zach Schmitz
 * CS 2401 11/4/18
 * 
 * template doubly linked list header file 
*******************************************************************/

#include<iostream>
#include"dnode.h"
#include"dnode_iterator.h"

#ifndef DLIST_H
#define DLIST_H

template<class T>
class dlist{
    public:
        typedef dnode_iterator<T> iterator;

        dlist();
        //Big 3
        dlist(const dlist& d);
        ~dlist();
        dlist operator = (const dlist& d);

        size_t size() const {return nodeCount;}

        void rear_insert(const T& item);
        void front_insert(const T& item);
        void front_remove();
        void rear_remove();
        void show() const;
        void reverse_show() const;


        //external iterator functions
        dnode_iterator<T> begin(){return iterator(head);}
        dnode_iterator<T> r_begin(){return iterator(tail);}
        dnode_iterator<T> end(){return iterator(NULL);}
        dnode_iterator<T> r_end(){return iterator(NULL);}
        void remove(const iterator& ni);
        void insert_before(const iterator& ni, const T& item);
        void insert_after(const iterator& ni, const T& item);

    private:
        dnode <T>* head;
        dnode <T>* tail;
        size_t nodeCount;

};


#endif
#include"dlist.template"
