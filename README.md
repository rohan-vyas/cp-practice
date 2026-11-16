# cp-practice

My C++ competitive programming and Advent of Code workspace.

## Daily loop

```bash
./new cf1985A          # make problems/cf1985A with the template and a test file
# paste the sample input/output into problems/cf1985A/tests/1.in and 1.out
./run cf1985A          # compile with AddressSanitizer + UBSan, check every sample
./run cf1985A fast     # -O2 build, same checks (use before submitting)
```

Advent of Code:

```bash
./new aoc 5            # aoc/2026/day05/sol.cpp
# paste your puzzle input into aoc/2026/day05/input.txt (gitignored: AoC asks you not to share inputs)
./run aoc 5
```

`include/bits/stdc++.h` is a small shim because Apple clang does not ship that header.

## Plan

See [PLAN.md](PLAN.md). Log every problem in [tracker.csv](tracker.csv).
