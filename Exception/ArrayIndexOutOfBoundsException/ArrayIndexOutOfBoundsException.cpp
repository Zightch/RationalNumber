#include "ArrayIndexOutOfBoundsException.h"
#include <utility>
ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException() = default;
ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(std::string I, std::string i):ID(std::move(I)),info(std::move(i)) {
    res = (ID + ":" + info);
}

const char *ArrayIndexOutOfBoundsException::what() const noexcept {
    return res.c_str();
}

ArrayIndexOutOfBoundsException::~ArrayIndexOutOfBoundsException() = default;
