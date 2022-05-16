#include <node.h>
#include "./util.h"
#include "./add.h"

namespace Add
{
  using namespace v8;

  void Add(const v8::FunctionCallbackInfo<Value>& args)
  {
    v8::Isolate* isolate = args.GetIsolate();
    v8::Local<Context> context = isolate->GetCurrentContext();
    if(args.Length() < 2) {
      nodeAddonUtil::throwError("wrong number of arguments");
      return;
    }

    if(!args[0]->IsNumber() || !args[1]->IsNumber()) {
      nodeAddonUtil::throwError("Wrong arguments");
      return;
    }

    double value = args[0]->NumberValue(context).ToChecked() + args[1]->NumberValue(context).ToChecked();
    Local<Number> num = Number::New(isolate, value);
    args.GetReturnValue().Set(num);
  }
}