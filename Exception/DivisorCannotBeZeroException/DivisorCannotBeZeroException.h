#pragma once
#include <exception>
#include <string>

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)

class rational_number DivisorCannotBeZeroException: public std::exception {
public:
    DivisorCannotBeZeroException();

    DivisorCannotBeZeroException(std::string, std::string);

    ~DivisorCannotBeZeroException() override;

    [[nodiscard]] const char *what() const noexcept override;

private:
    std::string info;
    std::string ID;
    std::string res;
};
