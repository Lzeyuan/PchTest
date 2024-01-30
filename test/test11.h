#include <stdafx.h>

namespace K
{
    struct StructK
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructK> c);
}
