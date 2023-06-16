#!/bin/bash

cd build
cmake .. -DFORCE_DEBUG_BUILD=True
make -j4
