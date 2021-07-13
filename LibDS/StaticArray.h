//
// Created by sc on 2021-07-07.
//
#pragma once
#ifndef ZER0_STATICARRAY_H
#define ZER0_STATICARRAY_H

namespace LibDS {
    template <typename ElementType, unsigned Size>
    class StaticArray {
    public:
        StaticArray();
        ~StaticArray();
        StaticArray(StaticArray<ElementType, Size> & arr);

        [[nodiscard]] unsigned int get_size() const;
        [[nodiscard]] unsigned int get_length() const;
        [[nodiscard]] ElementType * get_elements() const;

        int insert_at_end(ElementType element);
        int insert_at_index(ElementType element, unsigned int index); 

    private:
        ElementType _elements[Size];
        unsigned int _size;
        unsigned int _length;
    };
}
#endif //ZER0_STATICARRAY_H
