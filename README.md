# Development

```bash
git clone --recurse-submodules https://github.com/oshvoruk/set09121.git
```

If you've already cloned the repository without submodules:

```bash
git submodule update --init --recursive
```

## Done so far 
CMake.txt file added 
lib/Box2d and lib/SFML and src/main.cpp added
.gitignore added

## Versions being used
- CMake 3.31 
- Box2d v3.1.1
- SFML 2.6.2 (Which is an older version of SFML but is what the course teaches, since 3.x changes a lot of syntax)
- C++17

## Aims for today 18/11
- git clone (as the top of the README advises)
- git checkout -b <newbranch>
- Add res/fonts 
- Download a font (.tff) from https://fonts.google.com/ 
- Add it to res/fonts 
- Set-up main.cpp with the game loop structure outlined in lab 2 (Pong 1) - init, update, render, clean, main 
- Compile a basic mentu title showing "Football Combat"