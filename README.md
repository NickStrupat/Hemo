Hemo
====

An adventure in programming language design and implementation

## Notes

- use https://github.com/google/cityhash CityHash64() as hash function
- see about making the hash function guarantee unique hashes of strings of same length up to a certain length; if achieved, comparing strings under that length can be done just with length and hash compare.
- store run-time type info index in first 16 bits of references since current proccessors only use bottom 48 bits of 64-bit pointer types (this means a limit of 65,535 types per program which should be fine since the entire .NET BCL is something like 12,000 types)
- store type info in a static array of pointers to the type info, grouped by inheritance hierarchies which are ordered
- implement base-to-derived casting by storing the up and down hierarchy terminal distances in the 16 bits unused by the pointer (8 bits each), there you can test the validity of the cast by checking that the destination type index subtract the source type index is less than the "up" or "down" hierarchy terminal distance
- implement virtual method tables as a static array of function pointers, one array per virtual method (arithemetic done with the type info index to translate the 0-65,535 index into the index for that function's virtual method table, with that add/subtract number baked in at compile time)
- Have unit-based numeric type (wrappers around int, etc.) with LINQ-over-units methods for getting unit-specific aggregate values (see http://www.boost.org/doc/libs/1_64_0/doc/html/accumulators/user_s_guide.html)

## Editor ideas

- Use 'Fira Code' font with ligatures?
- when scrolling, pile up the outward constructs you're currently in (like how iOS shows the category you're in at the top of the view while you're going through it)
