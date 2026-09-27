#!/bin/bash

g++ main.cpp database.cpp -o main

if [ $? -eq 0 ]; then
    ./main
    rm main
fi
