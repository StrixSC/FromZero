//
// Created by sc on 2021-07-07.
//
#pragma once
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
    template <typename ElementType>
    StaticArray<ElementType>::StaticArray (unsigned int size): _size(size)  {
        this->_elements = new ElementType(size);
    }

    template <typename ElementType>
    unsigned int StaticArray<ElementType>::get_size() const {
        return this->_size;
    }

    template <typename ElementType>
    ElementType* StaticArray<ElementType>::get_elements() const {
        return this->_elements;
    }

    template <typename ElementType>
    StaticArray<ElementType>::~StaticArray() {
        for (auto & itr: this->_elements) {
            delete itr;
        }

        delete[] this->_elements;
    }

    template <typename ElementType>
    int StaticArray<ElementType>::insert_at_end(ElementType element) {
        if (this->_elements.length() >= this->_size) {
            return 0;
        }

        this->_elements[this->_size - 1] = element;
        return 1;
    }

    template <typename ElementType>
    int StaticArray<ElementType>::insert_at_index(ElementType element, unsigned int index) {
        if (this->_elements.length() >= this->_size) {
            return 0;
        }

        this->_elements[this->_size ]
    }

}