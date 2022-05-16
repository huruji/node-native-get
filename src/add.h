#ifndef NODE_NATIVE_GET_ADD_H
#define NODE_NATIVE_GET_ADD_H

#include <node.h>
#include "./util.h"


namespace Add {
  using namespace v8;
  void Add(const v8::FunctionCallbackInfo<Value>& args);
}


#endif
