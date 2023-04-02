#pragma once

#include <exception>
#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)
#ifdef _MSC_VER
class rational_number std::exception;
#endif
class rational_number DivisorCannotBeZeroException : public std::exception {
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
