/*
Sliding Window
│
├── Types
│   │
│   ├── Fixed Size (K)
│   │   ├── Keywords → "exactly K", "consecutive K", "average of K"
│   │   ├── Technique → Add new, remove old
│   │   ├── Problems
│   │   │   ├── Maximum Sum Subarray of Size K
│   │   │   ├── Maximum Average Subarray
│   │   │   └── Maximum Vowels in Substring of Size K
│   │
│   └── Variable Size
│       ├── Keywords → "at most", "minimum length", "longest"
│       ├── Technique → Expand until invalid, shrink until valid
│       ├── Problems
│       │   ├── Longest Substring Without Repeating Characters
│       │   ├── Longest Substring with At Most K Distinct Characters
│       │   ├── Fruits Into Baskets (2 distinct)
│       │   ├── Minimum Size Subarray Sum ≥ Target
│       │   └── Max Consecutive Ones III (At Most K Flips)
│
├── Core Components
│   ├── Two Pointers (left, right)
│   ├── Running Sum (for fixed window)
│   ├── HashMap / HashSet (track distinct/duplicates)
│   ├── Counters (zeros, vowels, etc.)
│
├── When to Use
│   ├── Linear data (array/string)
│   ├── Contiguous segment
│   ├── Optimization words → max/min/longest/shortest/at most
│
└── General Template
    ├── Expand window → right++
    ├── Check condition
    ├── If invalid → shrink with left++
    └── Update result
*/