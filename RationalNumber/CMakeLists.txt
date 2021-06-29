cmake_minimum_required(VERSION 3.19)
project(RationalNumber)

set(CMAKE_CXX_STANDARD 17)

set(
        root_source
        RationalNumber/RationalNumber.h
        RationalNumber/RationalNumber.cpp
        RationalNumber/SystemRelated.cpp
)
set(
        arithmetic_source
        RationalNumber/arithmetic/RationalNumber_addition.cpp
        RationalNumber/arithmetic/RationalNumber_division.cpp
        RationalNumber/arithmetic/RationalNumber_multiplication.cpp
        RationalNumber/arithmetic/RationalNumber_subtraction.cpp
)
set(
        basic_source
        RationalNumber/basic/RationalNumber_assign.cpp
        RationalNumber/basic/RationalNumber_get.cpp
        RationalNumber/basic/RationalNumber_other.cpp
        RationalNumber/basic/RationalNumber_set.cpp
)
set(
        compare_the_size_source
        RationalNumber/data_comparison/RationalNumber_equal.cpp
        RationalNumber/data_comparison/RationalNumber_notEqual.cpp
        RationalNumber/data_comparison/RationalNumber_greaterThan.cpp
        RationalNumber/data_comparison/RationalNumber_lessThan.cpp
        RationalNumber/data_comparison/RationalNumber_isEqualOrGreaterThan.cpp
        RationalNumber/data_comparison/RationalNumber_isEqualOrLesserThan.cpp
)
set(
        since_the_operation_source
        RationalNumber/since_the_operation/RationalNumber_decrement.cpp
        RationalNumber/since_the_operation/RationalNumber_sinceInAdditionTo.cpp
        RationalNumber/since_the_operation/RationalNumber_sinceTheAdd.cpp
        RationalNumber/since_the_operation/RationalNumber_square.cpp
)

add_library(
        RationalNumber
        SHARED

        ${root_source}

        ${arithmetic_source}
        ${basic_source}
        ${compare_the_size_source}
        ${since_the_operation_source}
)
