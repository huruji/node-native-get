#include <node.h>
#include "./util.h"
#include "./add.h"
#include "./callback.h"
#include "./object.h"
#include "./createFunction.h"

namespace demo
{
    using v8::FunctionCallbackInfo;
    using v8::Isolate;
    using v8::Local;
    using v8::Object;
    using v8::String;
    using v8::Value;

    void Method(const FunctionCallbackInfo<Value>& args)
    {
        Isolate* isolate = args.GetIsolate();
        if(args.Length() > 1){
            nodeAddonUtil::throwError("wrong number of arguments");
        }
        args.GetReturnValue().Set(nodeAddonUtil::v8_str("first 000000 build"));
    }

    void init(Local<Object> exports)
    {
        NODE_SET_METHOD(exports, "first", Method);
        NODE_SET_METHOD(exports, "add", Add::Add);
        NODE_SET_METHOD(exports, "runCallback", RunCallback::RunCallback);
        NODE_SET_METHOD(exports, "setObject", objectFactory::createObject);
        NODE_SET_METHOD(exports, "fn", CreateFunction::CreateFunction);
    }

    NODE_MODULE(addon, init)
} // namespace demo
