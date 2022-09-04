#include "DivisorCannotBeZeroException.h"
#include <utility>
DivisorCannotBeZeroException::DivisorCannotBeZeroException() = default;
DivisorCannotBeZeroException::DivisorCannotBeZeroException(std::string I, std::string i):ID(std::move(I)),info(std::move(i)) {
    res = (ID + ":" + info);
}

const char *DivisorCannotBeZeroException::what() const noexcept {
    return res.c_str();
}

DivisorCannotBeZeroException::~DivisorCannotBeZeroException() = default;
