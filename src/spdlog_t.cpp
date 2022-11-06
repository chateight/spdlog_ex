#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

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

    // set log level which also affects to the file log
    spdlog::set_level(spdlog::level::warn);
    spdlog::info("number_float is {:03.2f}", number_float);

    // logging to the log file
    auto log_file = spdlog::basic_logger_mt("logger", "log/basic.txt");
    log_file -> info("hello!");
    spdlog::set_default_logger(log_file);
    spdlog::warn("warning! write to the log file");
}