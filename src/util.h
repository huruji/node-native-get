#ifndef NODE_NATIVE_GET_UTIL_H
#define NODE_NATIVE_GET_UTIL_H

#include <node.h>

namespace nodeAddonUtil
{

  using namespace v8;

  static inline v8::Local<v8::String> v8_str(const char *x)
  {
    return v8::String::NewFromUtf8(v8::Isolate::GetCurrent(), x);
  }

  static inline v8::Local<v8::Boolean> v8_bool(bool val)
  {
    return v8::Boolean::New(v8::Isolate::GetCurrent(), val);
  }

  static inline v8::Local<v8::Value> v8_num(double x)
  {
    return v8::Number::New(v8::Isolate::GetCurrent(), x);
  }

  static inline v8::Local<v8::Integer> v8_int(int32_t x)
  {
    return v8::Integer::New(v8::Isolate::GetCurrent(), x);
  }

  static inline v8::Local<v8::BigInt> v8_bigint(int64_t x)
  {
    return v8::BigInt::New(v8::Isolate::GetCurrent(), x);
  }

  static inline v8::Local<v8::Primitive> v8_null()
  {
    return v8::Null(v8::Isolate::GetCurrent());
  }

  static inline v8::Local<v8::Symbol> v8_symbol(const char *name)
  {
    return v8::Symbol::New(v8::Isolate::GetCurrent(), v8_str(name));
  }

  static inline void throwError(const char *x)
  {

    v8::Isolate::GetCurrent()->ThrowException(v8::Exception::TypeError(
        v8_str(x)));
  }

}

#endif //NODE_NATIVE_GET_UTIL_H