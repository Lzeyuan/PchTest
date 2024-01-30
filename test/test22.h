#include <stdafx.h>

namespace V
{
    struct StructV
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructV> c);
}
