/********************
Name: Andrew VanVoorhees
Coding 07
Header file for mylist.cpp
***********************/

#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>     /* cout, endl */
#include <stdlib.h>     /* srand, rand, atoi */
#include <time.h>       /* time */
// you can add libraries if you need them, but you shouldn't need more

// DO NOT MODIFY THESE
#define DEFAULT_SIZE 10
#define RMIN 1
#define RMAX 10

class MyList {
public:
    // DO NOT MODIFY THESES TWO
    MyList(int); // constructor
    ~MyList(); // destructor

    int getElement(int);
    bool getElement(int, int*);

    void setArray(int);
    bool setElement(int, int);
    void setRandom(int, int);

    bool resizeArray(int);
    
    void printArray();

private:
    // these are the only attributes allowed
    // DO NOT ADD OR MODIFY THEM
    int length;
    int *array;
};

#endif //MYLIST_H
