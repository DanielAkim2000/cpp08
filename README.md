*This project has been created as part of the 42 curriculum by demane.*

# CPP Module 08

## Description

**CPP Module 08** is about templated containers, iterators, and algorithms from the STL. The goal is to write small utilities that leverage existing containers instead of reinventing data structures, and to extend `std::stack` so it becomes iterable.

This module contains three exercises:

| Exercise | Focus |
|----------|--------|
| **ex00 — Easy find** | `easyfind` — find an integer in any container of ints |
| **ex01 — Span** | Store up to N ints; shortest/longest span; range insertion |
| **ex02 — Mutated abomination** | `MutantStack` — stack with iterators |

### Overview

Prefer STL algorithms (`std::find`, etc.) and iterators. `Span` must handle large fill operations efficiently via iterator ranges. `MutantStack` reuses `std::stack`’s underlying container to expose `begin` / `end`.

## Instructions

### Requirements

- A C++ compiler supporting **C++98**
- `make`

### Compilation

```bash
cd ex00   # or ex01 / ex02
make
make clean / fclean / re
```

Flags: `-Wall -Wextra -Werror -std=c++98`.

### Execution

```bash
./exec    # ex00 / ex01 / ex02
```

## Classes & components

| Component | Role |
|-----------|------|
| `easyfind<T>` | Returns an iterator to the first occurrence of a value, or throws / signals not found |
| `Span` | Capacity `N`, `addNumber`, `addRange`, `shortestSpan`, `longestSpan` |
| `MutantStack<T>` | Inherits `std::stack<T>`; exposes container iterators |

`Span` stores values in a `std::vector<int>` and computes spans after sorting or by scanning differences.

## Resources

### Documentation & references

- [Containers library](https://en.cppreference.com/w/cpp/container)
- [std::find](https://en.cppreference.com/w/cpp/algorithm/find)
- [std::stack](https://en.cppreference.com/w/cpp/container/stack)
- [Iterator library](https://en.cppreference.com/w/cpp/iterator)
- 42 subject: *CPP Module 08*

### Use of AI

AI assistance was used for:

- Drafting and formatting this `README.md` according to the 42 curriculum requirements
- Clarifying wording and structuring documentation sections

No AI-generated code was submitted as a substitute for personal implementation. The C++ sources were written and validated by the student.

---

*42 Paris — Common Core*
