#include "DataNotSpecificationException.h"
#include <utility>
DataNotSpecificationException::DataNotSpecificationException() = default;
DataNotSpecificationException::DataNotSpecificationException(std::string I, std::string i):ID(std::move(I)),info(std::move(i)) {
    res = (ID + ":" + info);
}

const char *DataNotSpecificationException::what() const noexcept {
    return res.c_str();
}

DataNotSpecificationException::~DataNotSpecificationException() = default;
