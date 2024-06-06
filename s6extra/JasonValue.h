#pragma once
#include <iostream>
#include <vector>
using namespace std;
class JsonValue {
public:
   /// virtual ~JsonValue() = 0;

    virtual void Print(std::ostream& out) = 0;
};
class NullValue :public JsonValue {
    int  val;
public:
    NullValue()
    {
        val = NULL;
    }
    void Print(std::ostream& out) override
    {
        out << NULL;
    }
};
class NumberValue :public JsonValue {
    int val;
public:
    NumberValue(int x)
    {
        val = x;

    }
    void Print(std::ostream& out) override
    {
        out << val;
        out << endl;
    }
};
class BoolValue: public JsonValue {
        
    bool vala;
public:
    BoolValue(bool y)
    {
        vala = y;
    }
    void Print(std::ostream& out) override
    {
        out << vala;
        out << endl;
    }
};
class StringValue :public JsonValue
{
    string vals;
public:
    StringValue(string y):vals(y)
    {

    }
    void Print(std::ostream& out) override
    {
        out << vals;
        out << endl;
    }
   
};
class ArrayValue :public JsonValue
{
    vector <JsonValue*> v;
public:
    ArrayValue() {
        v.clear();
    }
    ArrayValue(vector<JsonValue*> y) {
        for (int i = 0; i < y.size(); i++)
            v[i] = y[i];
    }
    
    void add(JsonValue* x)
    {
        if (v.size() < 16)
            v.push_back(x);
    }
    void Print(std::ostream& out) override
    {
        for (int i = 0; i < v.size(); i++)
            v[i]->Print(out);
    }
};
class  ObjectValue: public JsonValue {
    vector<pair<string, JsonValue*>> values;
public:
    ObjectValue()
    {
        values.clear();
    }
    void add(string name,JsonValue*val)
    {
        if (values.size() < 16)
        {
            values.push_back({ name, val });///
        }
    }
    void Print(std::ostream& out) override
    {
        for (int i = 0; i < values.size(); i++)
        {
            out << values[i].first;
            values[i].second->Print(out);
        }
            
    }
};