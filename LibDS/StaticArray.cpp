//
// Created by sc on 2021-07-07.
//

#include "StaticArray.h"

/*
 *
 * A static array should be able to:
 * Add elements to its list
 * Not contain more elements than it can handle
 *
 *
 */

namespace LibDS {
    template <typename ItemType>
    StaticArray<ItemType>::StaticArray (unsigned int size): _size(size)  {
        this->_elements = new ItemType[size];
    }

    template <typename ItemType>
    unsigned int StaticArray<ItemType>::get_size() const {
        return this->_size;
    }
}