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

class RATIONAL_NUMBER DivisorCannotBeZeroException : public std::exception {
public:
    DivisorCannotBeZeroException();

    [[maybe_unused]]
    DivisorCannotBeZeroException(const DivisorCannotBeZeroException &);

    DivisorCannotBeZeroException &operator=(const DivisorCannotBeZeroException &);

    DivisorCannotBeZeroException(const char *, const char *);

    ~DivisorCannotBeZeroException() override;

    [[nodiscard]]
    const char *what() const noexcept override;

private:
    void *info = nullptr;
    void *ID = nullptr;
    void *res = nullptr;
};
