#pragma once
#include <exception>

#ifdef _WIN64
#ifdef RATIONAL_NUMBER_EXPORT
#define RATIONAL_NUMBER __declspec(dllexport)
#else
#define RATIONAL_NUMBER __declspec(dllimport)
#endif
#ifdef _MSC_VER
class RATIONAL_NUMBER std::exception;
#endif
#else
#define RATIONAL_NUMBER
#endif

class RATIONAL_NUMBER DataNotSpecificationException: public std::exception {
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
