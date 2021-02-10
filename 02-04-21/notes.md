# Floating Point

Floats are saved in scientific notation.
```
2.300 * 10^3 == 2300
1.000 * 2^3  == 1000 (8)
```

## Adding floating point

### Example:
```
  0b1.101 * 2^3
+ 0b1.001 * 2^1
```
```
  0b0110.100 * 2^1
+ 0b0001.001 * 2^1
  0b0111.101 * 2^1 => 0b1.11101 * 2^3
```

## Multiplying floating point

### Example:
```
      0b1.101 * 2^3
    * 0b1.001 * 2^-1
      --------------
         1101
        00000
       000000
    + 1101000
      --------------
      1110101
      0b1.1110101 * 2^2
```

## Storing floating point

### C++ has:
1. Float = 32bit
2. Double = 64bit

### Formats:
##### IEEE-754
* Float:
  * 1 bit: sign
  * 8 bits: exponent (BIAS: 127)
  * 23 bits: fraction
* Double:
  * 1 bit: sign
  * 11 bits: exponent (BIAS: 1023)
  * 52 bits: fraction
* Example -0b11.101 * 2^5 (Float):
  1. Normalize: 
  `-0b1.1101 * 2^6`
  2. Sign: 
  `1 (negative)`
  3. Exponent: 
  `6 + BIAS = 6 + 127 = 133 => 0b1000_0101`
  4. Fraction:
  `1101 (1 is implied) => 0b1101_0000_0000_0000_0000_000`
  5. Final:
  `0b1100_0010_1110_1000_0000_0000_0000_0000 => 0xC2E8_0000`
* What is `0xC217_0000`?
  1. Change System: `0b1100_0010_0001_0111_0000_0000_0000_0000`
  2. Sign: `1 (negative)`
  3. Exponent: `1000_0100 - BIAS = 132 - 127 = 5`
  4. Fraction: `0010_1110_0000_0000_0000_000 => 1.0010111`
  5. Final: `-0b1.0010111 * 2^5 = -37.75`
    
    


