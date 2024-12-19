#!/bin/bash
set -e

rm -rf build/WSL/*

mkdir -p build/WSL

echo "====================="
echo "Running CMake..."
echo "====================="

cmake -S . -B ./build/WSL

cd build/WSL/

echo "====================="
echo "Running MakeFile..."
echo "====================="

make

echo "====================="
echo "Running executable..."
echo "#####################"

./bin/diskscope
