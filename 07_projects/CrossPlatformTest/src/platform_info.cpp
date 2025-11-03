#include "platform_info.h"

#if defined(_WIN32)
#define PLATFORM_NAME "Windows"
#elif defined(__APPLE__)
#define PLATFORM_NAME "macOS"
#elif defined(__linux__)
#define PLATFORM_NAME "Linux"
#else
#define PLATFORM_NAME "Unknown OS"
#endif

#if defined(__x86_64__) || defined(_M_X64)
#define ARCH_NAME "x86_64"
#elif defined(__aarch64__)
#define ARCH_NAME "ARM64"
#elif defined(__i386__)
#define ARCH_NAME "x86 (32-bit)"
#else
#define ARCH_NAME "Unknown Arch"
#endif

std::string getPlatformName() { return PLATFORM_NAME; }
std::string getArchitectureName() { return ARCH_NAME; }
