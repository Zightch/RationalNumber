#define RATIONAL_NUMBER_EXPORT
#include "ArrayIndexOutOfBoundsException.h"
#include <string>
ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException() {
    res = new std::string;
    ID = new std::string;
    info = new std::string;
}
ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const char* I, const char* i) {
    res = new std::string;
    ID = new std::string;
    info = new std::string;
    (*(std::string*)ID) = I;
    (*(std::string*)info) = i;
    (*(std::string*)res) = ((*(std::string*)ID) + ":" + (*(std::string*)info));
}

const char *ArrayIndexOutOfBoundsException::what() const noexcept {
    return res == nullptr ? "" : ((std::string *) res)->c_str();
}

ArrayIndexOutOfBoundsException::~ArrayIndexOutOfBoundsException() {
    delete (std::string *) res;
    delete (std::string *) ID;
    delete (std::string *) info;
    res = nullptr;
    ID = nullptr;
    info = nullptr;
}

[[maybe_unused]]
ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(const ArrayIndexOutOfBoundsException &a) {
    delete (std::string *) res;
    delete (std::string *) ID;
    delete (std::string *) info;
    res = new std::string;
    ID = new std::string;
    info = new std::string;
    (*(std::string *) res) = *(std::string *) a.res;
    (*(std::string *) ID) = *(std::string *) a.ID;
    (*(std::string *) info) = *(std::string *) a.info;
}

ArrayIndexOutOfBoundsException &ArrayIndexOutOfBoundsException::operator=(const ArrayIndexOutOfBoundsException &a) {
    if (this != &a) {
        delete (std::string *) res;
        delete (std::string *) ID;
        delete (std::string *) info;
        res = new std::string;
        ID = new std::string;
        info = new std::string;
        (*(std::string *) res) = *(std::string *) a.res;
        (*(std::string *) ID) = *(std::string *) a.ID;
        (*(std::string *) info) = *(std::string *) a.info;
    }
    return *this;
}
