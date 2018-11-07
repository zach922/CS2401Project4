#include<iostream>
#include"dnode.h"

#ifndef DNODE_ITERATOR_H
#define DNODE_ITERATOR_H

template<class T>
class dlist;

template<class T>
class dnode_iterator{
    public:
        friend class dlist<T>;
        dnode_iterator(dnode<T>* initial = NULL){current = initial;}
        T operator*()const{return current->data();}
        dnode_iterator operator++(){
            current = current->next();
            return *this;
        }
        dnode_iterator operator++(int){
            dnode_iterator og(current);
            current = current->next();
            return og;
        }
        dnode_iterator operator--(){
            current = current->previous();
            return *this;
        }
        dnode_iterator operator--(int){
            dnode_iterator og(current);
            current = current->previous();
            return og;
        }
        bool operator == (const dnode_iterator& other){
            return current == other.current;
        }
        bool operator != (const dnode_iterator& other){
            return current != other.current;
        }

    private:
        dnode<T>* current;

};

#endif