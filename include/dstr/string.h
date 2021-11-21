#pragma once

#include <string>
#include <vector>
namespace dstr 
{
    [[nodiscard]] std::vector<std::string> split(const std::string& input, const char* delimiter);
    [[nodiscard]] std::string strip(const std::string& input, const std::string& to_strip = " \n\t\f\r\v");
}
