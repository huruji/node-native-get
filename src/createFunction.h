#ifndef NODE_NATIVE_GET_CREATE_FUNCTION_H
#define NODE_NATIVE_GET_CREATE_FUNCTION_H

#include "./node.h"
#include "./util.h"

namespace CreateFunction
{
  using namespace v8;
  void CreateFunction(const v8::FunctionCallbackInfo<Value>& args);
}

#endif