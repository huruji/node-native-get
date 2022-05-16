#include "./node.h"
#include "./util.h"
#include "./createFunction.h"

namespace CreateFunction
{
  using namespace v8;

  void MyFunction(const v8::FunctionCallbackInfo<Value>& args){
    args.GetReturnValue().Set(nodeAddonUtil::v8_str("my fn"));
  }

  void CreateFunction(const v8::FunctionCallbackInfo<Value>& args){
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    Local<Function> fn = v8::FunctionTemplate::New(isolate, MyFunction)->GetFunction(context).ToLocalChecked();
    fn->SetName(nodeAddonUtil::v8_str("myfn"));
    args.GetReturnValue().Set(fn);
  }
} // namespace CreateFunction
