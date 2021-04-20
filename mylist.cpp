/********************
Name: Andrew VanVoorhees
Coding 07
Methods for Coding 07
***********************/

#include "mylist.h"

// constructor

MyList::MyList(int size) {
    srand(time(NULL));
    length = size < 1 ? DEFAULT_SIZE : size;
    array = new int[length];
    setArray(0);
}

// destructor

MyList::~MyList() {
    delete[] array;
}

void MyList::setRandom(int n1, int n2) {
    int min = n1, max = n2;

    if (n1 < 0 || n2 < 0 || n1 == n2) {
        min = RMIN;
        max = RMAX;
    } else if (n1 > n2) {
            min = n2;
            max = n1;
        }

    for (int i = 0; i < length; i++) {
        array[i] = (rand() % max) + 1;
    }
}

void MyList::setArray(int value) {
    for (int i = 0; i < length; i++) {
        array[i] = value;
    }
}

bool MyList::setElement(int value, int i) {
    bool set = false;
    if (i >= 0 && i < length) {
        array[i] = value;
        set = true;
    }
    return set;
}

int MyList::getElement(int i) {
    if (i < 0 || i > length - 1) {
        throw 1;
    }
    return array[i];
}

bool MyList::getElement(int i, int *iptr) {
    bool get = false;
    if (i >= 0 && i < length) {
        *iptr = array[i];
        get = true;
    }
    return get;
}

bool MyList::resizeArray(int newlength) {
    bool resized = false;
    if (newlength >= 1 && newlength != length) {
        int *newarray = new int[newlength];
        if (newlength < length) {
            for (int i = 0; i < newlength; i++) {
                newarray[i] = array[i];
            }
        } else {
            for (int i = 0; i < length; i++) {
                newarray[i] = array[i];
            }
            for (int i = length; i < newlength; i++) {
                newarray[i] = 0;
            }
        }

        delete array;
        array = newarray;
        length = newlength;

        resized = true;
    }
    return resized;
}

void MyList::printArray() {
    std::cout << "[";
    for (int i = 0; i < length; i++) {
        std::cout << array[i];
        if (i < length - 1) {
            std::cout << " ";
        }
    }
    std::cout << "]" << std::endl;
}
