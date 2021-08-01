#pragma once
#ifndef ZER0_STATICARRAY_SPEC_H
#define ZER0_STATICARRAY_SPEC_H
#include <gtest/gtest.h>
#include "StaticArray.cpp"
#include "StaticArray.spec.h"

class BaseStaticArray : public ::testing::Test {
protected:
	LibDS::StaticArray<int, 10> arr;
};

TEST_F(BaseStaticArray, GetSize) {
	ASSERT_EQ(arr.get_size(), 10) << "StaticArray Size does not match";
}

#endif