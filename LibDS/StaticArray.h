//
// Created by sc on 2021-07-07.
//
#pragma once
#ifndef ZER0_STATICARRAY_H
#define ZER0_STATICARRAY_H

namespace LibDS {
    template <typename ElementType>
    class StaticArray {
    public:
        explicit StaticArray<ElementType>(unsigned int size);
        ~StaticArray();

        [[nodiscard]] unsigned int get_size() const;
        [[nodiscard]] ElementType* get_elements() const;

        int insert_at_end(ElementType element);
        int insert_at_index(ElementType element, unsigned int index); 

    private:
        ElementType * _elements;
        unsigned int _size;
    };
}
#endif //ZER0_STATICARRAY_H
