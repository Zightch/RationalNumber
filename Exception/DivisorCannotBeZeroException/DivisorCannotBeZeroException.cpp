#include "DivisorCannotBeZeroException.h"
#include <string>

DivisorCannotBeZeroException::DivisorCannotBeZeroException(const char* I, const char* i) {
    res = new std::string;
    ID = new std::string;
    info = new std::string;
    (*(std::string*)ID) = I;
    (*(std::string*)info) = i;
    (*(std::string*)res) = ((*(std::string*)ID) + ":" + (*(std::string*)info));
}

const char *DivisorCannotBeZeroException::what() const noexcept {
    return res == nullptr ? "" : ((std::string *) res)->c_str();
}

DivisorCannotBeZeroException::~DivisorCannotBeZeroException() {
    delete (std::string *) res;
    delete (std::string *) ID;
    delete (std::string *) info;
    res = nullptr;
    ID = nullptr;
    info = nullptr;
}

DivisorCannotBeZeroException::DivisorCannotBeZeroException() {
    res = new std::string;
    ID = new std::string;
    info = new std::string;
}

[[maybe_unused]]
DivisorCannotBeZeroException::DivisorCannotBeZeroException(const DivisorCannotBeZeroException &d) {
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

DivisorCannotBeZeroException &DivisorCannotBeZeroException::operator=(const DivisorCannotBeZeroException &d) {
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
