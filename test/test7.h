#include <stdafx.h>

namespace G
{
    struct StructG
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructG> c);
}
