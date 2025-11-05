### 05_MODERN_CPP Notes

✅ Learned:

- `auto` → type inference.
- `nullptr` → type-safe null.
- `unique_ptr`, `shared_ptr` → automatic memory management.
- `std::move` → transfer ownership, avoid deep copy.
- `constexpr` → compile-time computation.
- Lambdas + range-for → modern loop idioms.

💡 Observations:

- Smart pointers and move semantics eliminate manual `delete`.
- constexpr makes code faster and safer.
- Lambdas keep STL algorithms compact and expressive.

🧩 Practice:

1. Create a class `Resource` managed by `unique_ptr`.
2. Return large vector from function — observe move vs copy.
3. Use `constexpr` to calculate factorial at compile-time.
4. Use lambda to count even numbers in a vector.
