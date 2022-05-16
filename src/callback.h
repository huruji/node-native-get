#ifndef NODE_NATIVE_GET_CALLBACK_H
#define NODE_NATIVE_GET_CALLBACK_H

#include <node.h>
#include "./util.h"

namespace RunCallback {
  using namespace v8;
  void RunCallback(const v8::FunctionCallbackInfo<Value>& args);
}

#endif