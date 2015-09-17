#ifndef _REALMRESULTS_H
#define _REALMRESULTS_H

#include <node.h>
#include <node_object_wrap.h>
#include "results.hpp"

class RealmResults : public node::ObjectWrap {
public:
    RealmResults(realm::Results results);

    static void Init(v8::Handle<v8::Object> exports);
    static void New(const v8::FunctionCallbackInfo<v8::Value>& args);

    // Methods
    static void SortByProperty(const v8::FunctionCallbackInfo<v8::Value>& args);

private:
    ~RealmResults();

    static v8::Persistent<v8::Function> constructor;

    realm::Results m_results;
};

#endif
