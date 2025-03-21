public class bench {
    public static int fibonacci(int n) {
        if (n <= 1) return n;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void main(String[] args) {
        long startTime = System.nanoTime();
        System.out.println("Fibonacci(40) = " + fibonacci(40));
        long endTime = System.nanoTime();
        System.out.println("Java Execution Time: " + (endTime - startTime) / 1e9 + " seconds");
    }
}
