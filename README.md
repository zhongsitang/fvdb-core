# fvdb-core (Windows Compatible)

This is a personal fork of [fvdb-core](https://github.com/Guanfan123/fvdb-core), adapted for research use under **Windows**.

The codebase has been verified to build and run successfully on the following environment:
- **Compiler:** MSVC 2022 (v143)
- **CUDA:** 12.8
- **PyTorch:** 2.8.0
- **OS:** Windows 11 (x64)
- **CMake Generator:** Ninja

✅ All **C++ tests** in `src/tests/` pass successfully on this configuration.  
⚠️ Some **Python tests** in `tests/` are still failing or partially unsupported on Windows.

> ⚠️ Note:  
> This branch (`wincompat`) only aims to ensure build and runtime compatibility under Windows for local research usage.  
> It is **not intended for upstream merging** or cross-platform maintenance.