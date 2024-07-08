#ifndef ADDITION_H
#define ADDITION_H

#include <iostream>
#include <math.h>
using std::ostream;
using std::istream;

class Addition {
    friend ostream &operator<<( ostream &, const Addition & );
    friend istream &operator>>( istream &, Addition & );
    friend Addition &operator+( const Addition& instance_1, Addition& instance_2 );
private:
    int value;
};

#endif