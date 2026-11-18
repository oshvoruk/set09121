# first run this in the terminal:
# chmod +x run.sh

# then type ./run.sh in the terminal


#!/bin/bash
set -e
cmake --build build
./build/bin/set09121
