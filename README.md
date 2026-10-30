# C++ Chess Engine

A fast, modular chess engine boilerplate utilizing **Raylib** for graphics, **ImGui** for debugging tools/UI, and **GLM** for vector mathematics.

## Prerequisites

Ensure you have a modern C++ compiler (supporting C++17) and CMake installed.

- **Linux (Ubuntu/Debian):**
  ```bash
  sudo apt-get install build-essential cmake libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev
  ```
- **macOS:**
  ```bash
  brew install cmake
  ```
- **Windows:** Install Visual Studio (with C++ Desktop Development) and CMake.

## Build and Run Instructions

This project uses CMake FetchContent, so missing dependencies are cloned and compiled locally during your first build.

### Via Command Line (Linux/macOS/Windows PowerShell)

1. **Clone the repository** (or navigate to your project directory):
   ```bash
   cd chess-engine
   ```

2. **Generate build configuration:**
   ```bash
   cmake -B build -DCMAKE_BUILD_TYPE=Debug
   ```

3. **Compile the executable:**
   ```bash
   cmake --build build
   ```

4. **Run the engine:**
   ```bash
   # Linux/macOS
   ./build/ChessEngine
   
   # Windows
   .\build\Debug\ChessEngine.exe
   ```

