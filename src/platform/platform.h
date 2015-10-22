#pragma once

#if defined(WIN32) || defined(_WIN32) || defined(_MSC_VER)
#define PLATFORM_WINDOWS
#elif __APPLE__
#define PLATFORM_APPLE
#define PLATFORM_POSIX
#elif __linux__
#define PLATFORM_LINUX
#define PLATFORM_POSIX
#endif
