# Refal-05-Unicode

A Unicode-enabled fork of Refal-05 that adds comprehensive Unicode support using ICU (International Components for Unicode).

## Overview

This fork extends the original Refal-05 compiler with full Unicode support, enabling programs to process text in any language and script. The implementation uses UTF-32 internally for efficient character processing and UTF-8 for input/output.

## Key Features

### Unicode Support
- **Full Unicode character set**: Support for all Unicode characters including emojis
- **UTF-8 I/O**: All input and output uses UTF-8 encoding
- **UTF-32 internal representation**: Fixed-width encoding for efficient pattern matching
- **ASCII optimization**: Characters < 128 use legacy CHAR nodes for performance

### Character Operations
- **Character properties**: `Type` function extended to identify Unicode categories
- **Case conversion**: `Upper` and `Lower` functions work with all Unicode scripts
- **Unicode-aware pattern matching**: Proper handling of multi-byte characters
- **Hexadecimal support**: `ChrHex` and `OrdHex` for hex notation (e.g., 0x4E2D)
- **Hex literals**: Direct hex notation in source code (0xFF, 0x1F389)

### ICU Integration
- **Character classification**: alphabetic, digit, whitespace, printable detection
- **Case mappings**: Locale-aware upper/lower/title case conversion
- **Normalization**: NFC, NFD, NFKC, NFKD forms
- **Script detection**: Identify writing system of characters
- **Grapheme clusters**: Proper handling of combining characters

## Implementation Details

### Architecture Changes

1. **Extended Node Structure** (`refal05rts.h`):
   - Added `R05_DATATAG_UNICODE` for UTF-32 characters
   - Added `unicode_` field to node union
   - Maintained backward compatibility with ASCII

2. **Unicode Library** (`r05-unicode.h/c`):
   - UTF-8 ↔ UTF-32 conversion functions
   - Character property queries via ICU
   - Normalization and script detection APIs

3. **Runtime Updates**:
   - Unicode-aware allocation functions
   - UTF-8 string parsing with ASCII fast path
   - Unicode character comparison in pattern matching
   - UTF-8 output conversion

4. **Built-in Functions**:
   - `Chr`/`Ord`: Extended for Unicode code points (0-0x10FFFF)
   - `ChrHex`/`OrdHex`: Hexadecimal Unicode operations
   - `Type`: Unicode category detection
   - `Upper`/`Lower`: Full Unicode case conversion
   - `Prout`/`Print`: UTF-8 output support

5. **Parser Enhancements**:
   - Hex literal support: `0x` prefix for numbers (e.g., 0x4E2D = 20013)
   - UTF-8 source file encoding
   - Unicode strings in source code

### Build System

The build system automatically detects ICU and enables Unicode support:
```bash
./makeself.sh lambda  # Builds with Unicode if ICU is available
```

Required dependencies:
- ICU development libraries (icu4c)
- C compiler with C99 support

### Performance Considerations

- ASCII characters (< 128) use the original CHAR node type for efficiency
- UTF-8 decoding includes fast path for ASCII
- Pattern matching optimized for common ASCII-only cases
- Unicode properties cached by ICU for performance

## Testing

Test programs demonstrate Unicode functionality:
- `test-unicode-hello.ref`: Multi-language "Hello World"
- `test-simple-unicode.ref`: Character operations and case conversion
- `test-unicode-comprehensive.ref`: Pattern matching and boundary cases
- `test-unicode-advanced.ref`: Character types and mixed strings
- `test-hex-literals.ref`: Hexadecimal literal parsing
- `test-hex-functions.ref`: ChrHex/OrdHex functionality

Example output:
```
Hello, World!
Привет, мир!
你好，世界！
こんにちは、世界！
🌍🌎🌏 Unicode Test 🎉
```

## Compatibility

- Maintains full backward compatibility with existing Refal-05 programs
- ASCII-only programs run with no performance penalty
- Source files can use UTF-8 encoding for string literals
- Binary compatibility preserved for non-Unicode builds

## License

Same as original Refal-05 (see LICENSE file)

## Credits

Unicode implementation by Danslav Slavenskoj.

Refal-05 by Alexander Konovalov.