#include "spdlog/spdlog.h"

int main()
{
    spdlog::info("infromaion!");
    spdlog::warn("warning!");
    spdlog::error("error!");

    std::string test_message = "OK";
    spdlog::info("Test result is {}", test_message);

    int number_int = 10;
    float number_float = 12.345;
    spdlog::info("number_int is {:03d}", number_int);
    spdlog::info("number_float is {:03.2f}", number_float);
}