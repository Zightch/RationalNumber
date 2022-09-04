#pragma once
#include <exception>
#include <string>

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)

class rational_number DataNotSpecificationException: public std::exception {
public:
    DataNotSpecificationException();

    [[maybe_unused]] DataNotSpecificationException(std::string, std::string);

    ~DataNotSpecificationException() override;

    [[nodiscard]] const char *what() const noexcept override;

private:
    std::string info;
    std::string ID;
    std::string res;
};
