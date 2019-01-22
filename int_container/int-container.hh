#pragma once
#include <iostream>
#include <memory>
class MyIntContainer
{
    public:
        MyIntContainer(size_t size);
    private:
        std::unique_ptr<int[]> my_ptr;
};
