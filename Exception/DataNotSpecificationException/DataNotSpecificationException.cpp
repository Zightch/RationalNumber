#include "DataNotSpecificationException.h"
#include <string>
DataNotSpecificationException::DataNotSpecificationException() {
    res = new std::string;
    ID = new std::string;
    info = new std::string;
}
DataNotSpecificationException::DataNotSpecificationException(const char* I, const char* i) {
    res = new std::string;
    ID = new std::string;
    info = new std::string;
    (*(std::string*)ID) = I;
    (*(std::string*)info) = i;
    (*(std::string*)res) = ((*(std::string*)ID) + ":" + (*(std::string*)info));
}

const char *DataNotSpecificationException::what() const noexcept {
    return res == nullptr ? "" : ((std::string *) res)->c_str();
}

DataNotSpecificationException::~DataNotSpecificationException() {
    delete (std::string *) res;
    delete (std::string *) ID;
    delete (std::string *) info;
    res = nullptr;
    ID = nullptr;
    info = nullptr;
}

[[maybe_unused]]
DataNotSpecificationException::DataNotSpecificationException(const DataNotSpecificationException &d) {
    delete (std::string *) res;
    delete (std::string *) ID;
    delete (std::string *) info;
    res = new std::string;
    ID = new std::string;
    info = new std::string;
    (*(std::string *) res) = *(std::string *) d.res;
    (*(std::string *) ID) = *(std::string *) d.ID;
    (*(std::string *) info) = *(std::string *) d.info;
}

DataNotSpecificationException &DataNotSpecificationException::operator=(const DataNotSpecificationException &d) {
    if (this != &d) {
        delete (std::string *) res;
        delete (std::string *) ID;
        delete (std::string *) info;
        res = new std::string;
        ID = new std::string;
        info = new std::string;
        (*(std::string *) res) = *(std::string *) d.res;
        (*(std::string *) ID) = *(std::string *) d.ID;
        (*(std::string *) info) = *(std::string *) d.info;
    }
    return *this;
}
