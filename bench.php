<?php
function fibonacci($n) {
    if ($n <= 1) return $n;
    return fibonacci($n - 1) + fibonacci($n - 2);
}

$start = microtime(true);
echo "Fibonacci(40) = " . fibonacci(40) . "\n";
echo "PHP Execution Time: " . (microtime(true) - $start) . " seconds\n";
?>
