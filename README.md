# Beep

Beep is a fork from zserge beep, a minimal cross-platform sound playback library. 
All it does is beeping at the given frequency for the given duration of time.

- Good old C89 code with globals.
- Very small, ~150 lines of code for all platforms supported (Linux, macOS and Windows).
- Uses ALSA on Linux, CoreAudio on macOS and Beep() WINAPI function on Windows.
- Sleep() function definition made from unistd.h. 
- Easy to use, API is a single blocking function.

The API is the following:

```c
int Beep(int frequency, int duration);
```

Frequency is in Hz, duration is in milliseconds. To convert note index into a frequency use the following formula: 
`440 * pow(2, ((note - 49) / 12))`.

There is a also a `beep.c` utility which shows how the API can be used.

I included beep_jingleBell and beep_mario code tunes to test the common use of Beep() and Sleep() functions. 

If you found an issue or would like to propose a feature - PRs are welcome as long as they are small and simple!

Code is distributed under MIT license, feel free to use in commercial projects.

# Instalation

```bash
git clone https://github.com/ArielParra/Beep.git
cd Beep/
make
```

# Dependencies
- Windows need a C compiler like GCC and the Gnu make utility, which can be found in MSYS2.
- This project have been only tested with GCC and Glibc, compatibility with Compilers like LLVM/CLANG and/or other C libraries like ulibc, musl or bionic is unkown and most likely may not work as intended.
- The GNU make is used for the MAKEFILE, it isn't compatibile with BSD Make.
- It may need libasound2-dev or alsa-lib package for Linux.

# Warnings
- Functions are defined in the header file which may lead to ODR violations 
- Sound may be "choppy", it is recommended to use low volumes
