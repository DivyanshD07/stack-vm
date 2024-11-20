#ifndef STACK_VH_H
#define STACK_VH_H

#include <iostream>
#include <vector>
#include <cstdint>

//type definitons
typedef int32_t i32; // signed integer of 32 bit

class StackVM {
    i32 pc = 100; // program counter
    i32 sp = 0; // stack pointer
    std::vector<i32> memory;
    i32 typ = 0;
    i32 dat = 0;
    i32 running = 1;

    // private functions
    i32 getType(i32 instruction);
    i32 getData(i32 instruction);
    void fetch();
    void decode();
    void execute();
    void doPrimitive();

    // public functions
    public:
    StackVM();
    void run();
    void loadProgram(std::vector<i32> prog);
};

#endif