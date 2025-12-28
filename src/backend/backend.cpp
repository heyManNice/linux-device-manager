#include "backend.hpp"

#include <sys/utsname.h>

namespace ldm::backend
{
    namespace kernel
    {
        std::string version()
        {
            struct utsname buffer;
            if (uname(&buffer) != 0)
            {
                return "unknown";
            }
            return std::string(buffer.release);
        }
    }
}