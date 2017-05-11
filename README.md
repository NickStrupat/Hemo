Hemo
====

An adventure in programming language design and implementation

## Notes

- use https://github.com/google/cityhash CityHash64() as hash function
- store run-time type info index in first 16 bits of references since current proccessors only use bottom 48 bits of 64-bit pointer types (this means a limit of 65,535 types per program which should be fine since the entire .NET BCL is something like 12,000 types)
- store type info in a static array of pointers to the type info, grouped by inheritance hierarchies which are ordered
- implement base-to-derived casting by storing the up and down hierarchy terminal distances in the 16 bits unused by the pointer (8 bits each)
- implement virtual method tables as a static array of function pointers, one array per virtual method (arithemetic done with the type info index to translate the 0-65,535 index into the index for that function's virtual method table)
