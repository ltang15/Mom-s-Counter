//
// Created by tangb on 3/14/2020.
//

#include "MCounter.h"
int MCounter::count() const{
    return counter;
}
bool MCounter::is_error() const{
    // check if the counter exceeds the limit

    return counter > 9999;// return error
}
MCounter::MCounter() : counter(0){
    //initialize
}
int MCounter::add_1(){
    return counter +=1;

}
int MCounter::add_10(){
    return counter += 10;
}
int MCounter::add_100(){
    return counter += 100;
}
int MCounter::add_1000(){
    return counter += 1000;
}
int MCounter::reset(){
    counter = 0;
    return counter;
}

