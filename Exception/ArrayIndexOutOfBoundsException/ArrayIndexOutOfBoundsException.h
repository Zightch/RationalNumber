#pragma once
#include <exception>
#include <string>

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)

class rational_number ArrayIndexOutOfBoundsException: public std::exception {
public:
    ArrayIndexOutOfBoundsException();

    [[maybe_unused]] ArrayIndexOutOfBoundsException(std::string, std::string);

    ~ArrayIndexOutOfBoundsException() override;

    [[nodiscard]] const char *what() const noexcept override;

private:
    std::string info;
    std::string ID;
    std::string res;
};
