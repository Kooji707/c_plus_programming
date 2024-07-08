#include <iomanip>
using std::setw;

#include "Addition.h"

ostream &operator<<( ostream &output, const Addition &addition ) {
    output << addition.value;
    return output; 
}

istream &operator>>( istream &input, Addition &addition ) {
    return input;
}

Addition &operator+( const Addition& instance_1, Addition& instance_2 ) {
    Addition instance_temp;
    instance_temp.value = instance_1.value + instance_2.value; 
    return instance_temp;
}