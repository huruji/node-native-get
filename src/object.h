#ifndef NODE_NATIVE_GET_OBJECT_H
#define NODE_NATIVE_GET_OBJECT_H

#include <node.h>
#include "./util.h"

namespace objectFactory{
  using namespace v8;
  void createObject(const v8::FunctionCallbackInfo<Value>& args);
}

#endif