
#ifndef __glctx_contextmanager_hpp__
#define __glctx_contextmanager_hpp__

#include <cstdint>
#include <memory>

namespace glctx {
    struct ContextDesc;
    class Context;
    
    typedef std::uint64_t NativeWindowHandle;

    class ContextManager {
    protected:
        ContextManager();
        virtual ~ContextManager();

    public:
        static ContextManager* getInstance();

    public:
        virtual Context* createContext(const NativeWindowHandle windowHandle, const ContextDesc &desc) = 0;

        virtual void destroyContext(Context *context) = 0;
    };
}

#endif
