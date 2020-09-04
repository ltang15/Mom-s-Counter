//
// Created by tangb on 3/14/2020.
//

#ifndef MOMCOUNTER_MCOUNTER_H
#define MOMCOUNTER_MCOUNTER_H
#include <iostream>
using namespace std;

class MCounter {
public:
    MCounter();
    int add_1();
    int add_10();
    int add_100();
    int add_1000();
    int reset();
    int count() const;
    bool is_error() const;
private:
    int counter;

};


#endif //MOMCOUNTER_MCOUNTER_H
