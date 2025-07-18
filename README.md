# Flow Field

Install required libraries:

```bash
sudo dnf install raylib raylib-devel
````

> Installs Raylib and its development headers.

Compile the project:

```bash
g++ flow.cpp RealVector.cpp config.cpp particle.cpp -o flow -lraylib -lGL -lm -ldl -lpthread -lrt -lX11
```

> Compiles the project and links necessary libraries.

Run the program:

```bash
./flow
```
