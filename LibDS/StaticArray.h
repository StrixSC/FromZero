//
// Created by sc on 2021-07-07.
//
#pragma once
#ifndef ZER0_STATICARRAY_H
#define ZER0_STATICARRAY_H

namespace LibDS {
    template <typename ItemType>
    class StaticArray {
    public:
        explicit StaticArray<ItemType>(unsigned int size);
        [[nodiscard]] unsigned int get_size() const;

    private:
        ItemType * _elements;
        unsigned int _size;
    };
}
#endif //ZER0_STATICARRAY_H
