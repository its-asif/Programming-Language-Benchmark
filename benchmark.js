function fibonacci(n) {
  if (n <= 1) return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

console.time("Execution Time");
console.log("Fibonacci(40) =", fibonacci(40));
console.timeEnd("Execution Time");
