#ifndef wren_opt_random_h
#define wren_opt_random_h

#include <wren/src/vm/wren_common.h>
#include <wren/include/wren.h>
#if WREN_OPT_RANDOM

const char* wrenRandomSource();
WrenForeignClassMethods wrenRandomBindForeignClass(WrenVM* vm,
                                                   const char* module,
                                                   const char* className);
WrenForeignMethodFn wrenRandomBindForeignMethod(WrenVM* vm,
                                                const char* className,
                                                bool isStatic,
                                                const char* signature);

#endif

#endif
