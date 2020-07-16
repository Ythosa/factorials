#include "benchmark/benchmark.h"
#include "falgo.h"

static void BM_PrimeSwing(benchmark::State& state) {
    for (auto _ : state) {
        for (long long i = 0; i < 21; i++) {
            falgo::PrimeSwing::Count(i);
        }
    }
}

static void BM_SimpleRecursion(benchmark::State& state) {
    for (auto _ : state) {
        for (long long i = 0; i < 21; i++) {
            falgo::SimpleRecursion::Count(i);
        }
    }
}

// Register the function as a benchmark
BENCHMARK(BM_PrimeSwing);
BENCHMARK(BM_SimpleRecursion);

// Run the benchmark
BENCHMARK_MAIN();
