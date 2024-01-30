#include <stdafx.h>

namespace E
{
    struct StructE
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructE> c);
}
