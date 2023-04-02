#pragma once
#include <exception>

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)
#ifdef _MSC_VER
class rational_number std::exception;
#endif
class rational_number ArrayIndexOutOfBoundsException: public std::exception {
public:
    ArrayIndexOutOfBoundsException();

    [[maybe_unused]]
    ArrayIndexOutOfBoundsException(const ArrayIndexOutOfBoundsException&);

    ArrayIndexOutOfBoundsException &operator=(const ArrayIndexOutOfBoundsException&);

    [[maybe_unused]]
    ArrayIndexOutOfBoundsException(const char *, const char *);

    ~ArrayIndexOutOfBoundsException() override;

    [[nodiscard]]
    const char *what() const noexcept override;

private:
    void *info = nullptr;
    void *ID = nullptr;
    void *res = nullptr;
};
