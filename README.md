Hemo
====

An adventure in programming language design and implementation

## Notes

- use https://github.com/google/cityhash CityHash64() as hash function
- store run-time type code in first 16 bits of references since current proccessors only use bottom 48-bits of 64-bit pointer types (this means a limit of 65,535 types per program which should be fine since the entire .NET BCL is something like 12,000 types)
