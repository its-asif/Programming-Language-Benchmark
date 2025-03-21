# 🚀 Programming Language Benchmark: Fibonacci(40)

This repository contains benchmark tests for calculating Fibonacci(40) using different programming languages. The goal is to compare execution times and evaluate performance across compiled and interpreted languages.

## 📌 Benchmark Overview
Each implementation calculates Fibonacci(40) and records execution time. The results help in understanding language performance differences in CPU-intensive tasks.


## ⚙️ Setup & Run Instructions

### **C++**
```sh
g++ -O3 -o bench bench.cpp
./bench
```

### **Java**
```sh
javac bench.java
java bench
```

### **Rust**
```sh
rustc bench.rs
./bench.exe
```

### **Go**
```sh
go run benchmark.go
```

### **Node.js**
```sh
node benchmark.js
```

### **PHP**
```sh
php bench.php
```

### **Python**
```sh
python bench.py
```

## 📊 Benchmark Results
| Language  | Execution Time (Run 1) | Execution Time (Run 2) | Execution Time (Run 3) | Average Time |
|-----------|------------------------|------------------------|------------------------|--------------|
| **C++**   | 0.270s                 | 0.265s                 | 0.267s                 | **0.267s**   |
| **Java**  | 0.4185726s              | 0.4075631s              | 0.4054401s              | **0.410s**   |
| **Rust**  | 896.851ms               | 891.9176ms              | 882.417ms               | **0.890s**   |
| **Go**    | 541.6333ms              | 533.7964ms              | 538.5327ms              | **0.538s**   |
| **Node.js** | 995.366ms             | 994.467ms               | 1.001s                  | **0.997s**   |
| **PHP**   | 10.9925661s             | 10.8173242s             | 10.6800520s             | **10.83s**   |
| **Python**| 14.0095675s             | 14.0025489s             | 14.0591397s             | **14.02s**   |

