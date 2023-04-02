#pragma once

#include <exception>
#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)
#ifdef _MSC_VER
class rational_number std::exception;
#endif
class rational_number DataNotSpecificationException: public std::exception {
public:
    DataNotSpecificationException();

    [[maybe_unused]]
    DataNotSpecificationException(const DataNotSpecificationException &);

    DataNotSpecificationException &operator=(const DataNotSpecificationException &);

    [[maybe_unused]]
    DataNotSpecificationException(const char *, const char *);

    ~DataNotSpecificationException() override;

    [[nodiscard]]
    const char *what() const noexcept override;

private:
    void *info = nullptr;
    void *ID = nullptr;
    void *res = nullptr;
};
