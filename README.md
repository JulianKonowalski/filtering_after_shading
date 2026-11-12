# Filtering After Shading

This is a repository for an implementation of the [Filtering After Shading](https://arxiv.org/pdf/2407.06107)
paper. The project was made as a part of Rendering And Animation Techniques
course at Warsaw University of Technology.

## Cloning and building

To build this project you will need CMake, a cmake generator and a C/C++
compiler of your choice. This project was originally built using CMake, Ninja
and Clang. All of the dependencies (see `./3rdparty/` directory) are being cloned
alongside this repository.

To clone and build this project use:
```
git clone --recurse-submodules https://github.com/JulianKonowalski/filtering_after_shading.git
cd filtering_after_shading
git submodule update --init --recursive --remote
cmake -G Ninja -B build -S . 
cmake --build build
```

The built executable file will be located under `./build/src/` directory.
