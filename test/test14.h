#include <stdafx.h>

namespace N
{
    struct StructN
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructN> c);
}
