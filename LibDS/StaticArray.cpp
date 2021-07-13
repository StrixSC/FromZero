//
// Created by sc on 2021-07-07.
//
#pragma once
#include "StaticArray.h"
#include <iostream>
/*
 *
 * A static array should be able to:
 * Add elements to its list
 * Not contain more elements than it can handle
 *
 */

namespace LibDS {
    template <typename ElementType, unsigned int Size>
    StaticArray<ElementType, Size>::StaticArray(): _size(Size), _length(0) {}

    template <typename ElementType, unsigned int Size>
    unsigned int StaticArray<ElementType, Size>::get_size() const {
        return this->_size;
    }

    template <typename ElementType, unsigned int Size>
    ElementType * StaticArray<ElementType, Size>::get_elements() const {
        return this->_elements;
    }

    template <typename ElementType, unsigned int Size>
    StaticArray<ElementType, Size>::StaticArray(StaticArray<ElementType, Size> & clone) {
        for (unsigned int i = 0; i < clone.get_size(); i++) {
            this->_elements[i] = clone.get_elements()[i];
        }
        this->_length = clone.get_length();
        this->_size = clone.get_size();
    }

    template <typename ElementType, unsigned int Size>
    unsigned int StaticArray<ElementType, Size>::get_length() const {
        return this->_length;
    }

    template <typename ElementType, unsigned int Size>
    StaticArray<ElementType, Size>::~StaticArray() = default;

    template <typename ElementType, unsigned int Size>
    int StaticArray<ElementType, Size>::insert_at_end(ElementType element) {
        if (this->_length >= this->_size - 1) {
            return 0;
        }

        this->_elements[this->_length] = element;
        this->_length++;
        return 1;
    }

    /*
     * @Description: Inserts an element at the desired index.
     * The StaticArray's must have size - 2 elements at most for the insertion to occur.
     * @Params:
     *      ElementType element - Element to insert.
     *      unsigned int index - Index in the StaticArray to insert the element into.
     * @Returns:
     *      2 cases:
     *          a. Int - 0 if the insertion was successful
     *          b. Int - 1 if the insertion was unsuccessful.
     */
    template <typename ElementType, unsigned int Size>
    int StaticArray<ElementType, Size>::insert_at_index(ElementType element, unsigned int index) {
        if (this->_length >= this->_size - 1) {
            return 0;
        }

        if (index >= this->size || index < 0) {
            return 0;
        }

        unsigned int shift_count = this->_size - index;
        auto tmp = StaticArray<ElementType, Size>(this->_elements);

        // push the index that we need to push it in.
        for (unsigned int i = 0 ; i < this->_size; i++) {
            if (index == i) {
                this->_elements[i] = element;
            }
        }

        for (unsigned int i = index; i < this->_size - 1; i++) {
            this->_elements[i + 1] = tmp[i + 1];
        }
    }
}