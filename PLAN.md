# Six-week plan: Codeforces rating + Advent of Code in C++

Goal: a real Codeforces rating I can put on my CV for quant and systems roles, and a full Advent of Code run in C++. About 1 hour a day on weekdays plus one contest a week.

Rules I follow:
- Rated contests are mine alone. No AI, no looking things up during a rated round. A rating I can't reproduce live is worse than no rating.
- Stuck for 30 minutes: read the editorial, then close it and code it from memory the next day.
- Log every problem in `tracker.csv`, including failures.

## Week 1: setup and speed on easy problems
- Make a Codeforces account (or use an existing one) and do 2 **virtual** Div. 3 contests to calibrate.
- 15 problems rated 800 to 1100 from the Codeforces problemset. Focus: reading fast, fast I/O, no silly bugs.
- Learn the kit: `./new`, `./run`, `./run ... fast`.

## Week 2: core patterns
- CSES Problem Set: Introductory (pick 10) and Sorting and Searching (pick 10).
- Patterns: sorting + two pointers, prefix sums, binary search on the answer, greedy proofs.
- First **rated** contest: Div. 3 or Div. 4.

## Week 3: graphs
- CSES Graph Algorithms: BFS/DFS, connected components, Dijkstra, topological sort (10 problems).
- 8 Codeforces problems rated 1200 to 1400 tagged `graphs` or `dfs and similar`.
- Rated Div. 2 or Div. 3.

## Week 4: dynamic programming
- CSES Dynamic Programming (10 problems: coin combinations, grid paths, edit distance, LIS).
- 8 problems rated 1300 to 1500 tagged `dp`.
- Rated contest.

## Week 5: Advent of Code starts (1 December)
- Solve each day in C++ with `./new aoc N`, before reading any discussion. Write down your time.
- Keep 3 Codeforces problems a week going (1400 to 1600) so the rating work doesn't stall.
- Rated contest.

## Week 6: contest stamina
- 2 virtual Div. 2 contests under real time limits, then upsolve every problem you missed up to 1600.
- Rated contest. Review: which pattern cost me the most time? Plan the next six weeks around it.

## Milestones worth putting on a CV
| Milestone | Typical time with this plan | CV line |
|---|---|---|
| Codeforces Pupil (1200+) | 4 to 8 weeks | "Codeforces: 1200+ (Pupil)" |
| Codeforces Specialist (1400+) | 2 to 4 months | "Codeforces Specialist (max rating N)" |
| Codeforces Expert (1600+) | 4 to 9 months | Strong signal for quant firms |
| Advent of Code 2026 complete in C++ | December | Link the repo of your own solutions |

These are rough ranges; people vary a lot. Only list a rating once you've earned it in rated contests.

## Quant-specific extras (after week 6)
- Probability and expected value puzzles: "A Practical Guide to Quantitative Finance Interviews" (Xinfeng Zhou), "Heard on the Street".
- Mental arithmetic speed (Zetamac, default settings): aim for 40+.
- Talk through my order book design (github.com/rohan-vyas/orderbook) out loud: data structures, complexity, why the differential test matters.
