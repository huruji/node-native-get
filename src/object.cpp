#include <node.h>
#include "./util.h"
#include "./object.h"

namespace objectFactory
{
  using namespace v8;

  void createObject(const v8::FunctionCallbackInfo<Value>& args){
    v8::Isolate* isolate = args.GetIsolate();
    Local<Object> obj = Object::New(isolate);
    obj->Set(nodeAddonUtil::v8_str("msg"), args[0]->ToString(isolate));

    args.GetReturnValue().Set(obj);
  }
} // namespace objectFactory
