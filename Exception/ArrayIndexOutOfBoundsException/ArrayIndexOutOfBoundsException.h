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

class RATIONAL_NUMBER ArrayIndexOutOfBoundsException: public std::exception {
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
