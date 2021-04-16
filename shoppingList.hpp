#pragma once
#include <iostream>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

int generateOutput(std::istream &input, std::ostream &output)
{
    Document d;
    d.parse(input);

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    output << buffer.GetString() << "\n";
}

int addItem(std::istream &input, std::istream &item)
{

}

int removeItem(std::istream &input, std::istream id)
{
    
}