# 🔗 GitHub Link Converter (Blob → Raw)

This utility converts GitHub **`blob` URLs** into **`raw.githubusercontent.com` URLs**.

## 📂 Project Structure

```txt
📦 Scripts
 ┣ 📜 a.out / a.exe       # Compiled executable
 ┣ 📜 convert2raw.cpp     # Source code
 ┣ 📜 inputLinks.txt      # Input file (paste GitHub links here)
 ┗ 📜 finalLinks.txt      # Output file (converted raw links)
```

## ⚙️ Build Instructions

### 🐧 Linux / 🍎 macOS

Make sure `g++` is installed, then run:

```bash
g++ convert2raw.cpp -o a.out
```

### 🪟 Windows

#### Option 1 — MinGW / MSYS2

```bash
g++ convert2raw.cpp -o a.exe
```

#### Option 2 — WSL (Recommended)

```bash
g++ convert2raw.cpp -o a.out
```

## ▶️ Run Instructions

### 🐧 Linux / 🍎 macOS

```bash
./a.out < inputLinks.txt > finalLinks.txt
```

### 🪟 Windows

#### MinGW / Command Prompt / PowerShell

```bash
a.exe < inputLinks.txt > finalLinks.txt
```

#### WSL

```bash
./a.out < inputLinks.txt > finalLinks.txt
```

## 📝 Input Format

Add one GitHub link per line in `inputLinks.txt`:

```txt
https://github.com/user/repo/blob/main/file.cpp
```

## 📤 Output Format

Converted raw links will be saved in `finalLinks.txt`:

```txt
https://raw.githubusercontent.com/user/repo/refs/heads/main/file.cpp
```

## ✅ Features

- Converts multiple links at once
- Handles full file paths
- Skips invalid/non-GitHub links
- Fast and lightweight (no dependencies)

## ⚡ Example

### Input (`inputLinks.txt`)

```txt
https://github.com/CPS-Academy/jipc-leetcode-solutions/blob/main/Arrays/832.%20Flipping%20an%20Image.cpp
```

### Output (`finalLinks.txt`)

```txt
https://raw.githubusercontent.com/CPS-Academy/jipc-leetcode-solutions/refs/heads/main/Arrays/832.%20Flipping%20an%20Image.cpp
```

## 🚀 Optional Shortcuts

### 🐧 Linux / 🍎 macOS (Alias)

Add this to your `.bashrc` or `.zshrc`:

```bash
alias convert='g++ convert2raw.cpp -o a.out && ./a.out < inputLinks.txt > finalLinks.txt'
```

Run with:

```bash
convert
```

### 🪟 Windows (Batch Script)

Create a file named `convert.bat`:

```bat
g++ convert2raw.cpp -o a.exe
a.exe < inputLinks.txt > finalLinks.txt
```

Then run:

```bat
convert
```

## 🧠 Notes

- Make sure `inputLinks.txt` exists before running
- Works on Linux, macOS, and Windows
- No manual input needed (fully file-based)
- For Windows, ensure `g++` is added to PATH

Happy coding! 💻✨
