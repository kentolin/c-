#include <iostream>
#include "platform_info.h"

int main()
{
    std::cout << "✅ Cross-Platform C++ Test\n";
    std::cout << "Platform   : " << getPlatformName() << "\n";
    std::cout << "Architecture: " << getArchitectureName() << "\n";
    std::cout << "Hello, world!\n";
    return 0;
}
