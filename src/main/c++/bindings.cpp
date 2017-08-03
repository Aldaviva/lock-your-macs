#include <nan.h>
#include "maclock.h"

void IsLocked(const Nan::FunctionCallbackInfo<v8::Value>& info){
    info.GetReturnValue().Set(Nan::New(isWorkstationLocked()));
}

void Init(v8::Local<v8::Object> exports){
    exports->Set(Nan::New("isLocked").ToLocalChecked(), Nan::New<v8::FunctionTemplate>(IsLocked)->GetFunction());
}

NODE_MODULE(maclock, Init)