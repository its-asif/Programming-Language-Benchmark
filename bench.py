import time

def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)

start_time = time.time()
print("Fibonacci(40) =", fibonacci(40))
print("Python Execution Time:", time.time() - start_time, "seconds")
