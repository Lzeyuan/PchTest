#include <stdafx.h>

namespace O
{
    struct StructO
    {
        std::map<float, char> temp_;
    };
    
    void foo(std::vector<int> a, std::vector<double> b, std::vector<StructO> c);
}
