#include <node.h>
#include "./util.h"
#include "./callback.h"

namespace RunCallback {
  using namespace v8;

  void RunCallback(const v8::FunctionCallbackInfo<Value>& args){
    v8::Isolate* isolate = args.GetIsolate();

    if(args.Length() < 1) {
      nodeAddonUtil::throwError("wrong number of arguments");
      return;
    }

    if (!args[0]->IsFunction()) {
      nodeAddonUtil::throwError("wrong arguments");
      return;
    }

    Local<v8::Function> cb = Local<Function>::Cast(args[0]);
    const unsigned argc = 1;
    Local<Value> argv[1] = {nodeAddonUtil::v8_str("hello")};
    cb->Call(isolate->GetCurrentContext(), nodeAddonUtil::v8_null(), argc, argv);
  }
}