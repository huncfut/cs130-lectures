# Arithmetic Operations

### Two's Compliment

1. Flip all bits (negate)
2. +1

`1111_1111` => `0000_00000` => `0000_0001`

#### Compute 3 - 4
1. 3+(-4)
2. 4 = `0000_0100`
 -4 = `1111_1011` + 1 = `1111_1100`
3.
 `0000_0011 (3)
+1111_1100 (-4)
=1111_1111 (-1) => 0000_0001
`

### Multiplication
1. Isolate 1's place
2. If bottom is 1: add top number
3. Right shift bottom number by (1)
4. Left shift top number (1)

# Data

## Widening
### Sign extension
```
          1111_1111 = -1
1111_1111_1111_1111 => 0000...0001 = -1
```
### Zero extension
```
          1111_1111 = -1
0000_0000_1111_1111 = 255
```
## Narrowing
```
1010_1011_1111_1000
          1111_1000
```
