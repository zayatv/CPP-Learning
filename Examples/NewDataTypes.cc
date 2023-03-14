#include <string>
#include <cstdint>

int main()
{
    //all new int types with their max value
    std::int8_t a = INT8_MAX;
    std::int16_t b = INT16_MAX;
    std::int32_t c = INT32_MAX;
    std::int64_t d = INT64_MAX;

    std::uint8_t e = UINT8_MAX;
    std::uint16_t f = UINT16_MAX;
    std::uint32_t g = UINT32_MAX;
    std::uint64_t h = UINT64_MAX;

    //two useful string datatypes
    std::string s = "String";
    std::string_view sv = s;

    return 0;
}