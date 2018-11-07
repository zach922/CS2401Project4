/*******************************************************************
 * Project 4
 * Zach Schmitz
 * CS 2401 11/4/18
 * 
 * doubly linked node header file 
*******************************************************************/

#include<iostream>

#ifndef DNODE_H
#define DNODE_H

template<class T>
class dnode{
    public:
    dnode(T d = T(), dnode * n = NULL, dnode * p= NULL){
    data_field = d;
    next_field = n;
    pre_field = p;}
    //accessors
    T data() const {return data_field;}
    dnode* next() const {return next_field;}
    dnode* previous() const {return pre_field;}
    //mutators
    void set_data(const T& d){data_field=d;}
    void set_next(dnode * n){next_field = n;}
    void set_previous(dnode * p){pre_field = p;}

    private:
    T data_field;
    dnode * next_field;
    dnode * pre_field;

};

#endif