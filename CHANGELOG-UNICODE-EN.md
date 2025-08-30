# Changelog - Refal-05-Unicode

## [1.0.0-unicode] - 2025-01-07

### Added
- Full Unicode support using ICU (International Components for Unicode)
- UTF-32 internal character representation for efficient processing
- UTF-8 encoding for all input/output operations
- Unicode-aware pattern matching for all character types
- Extended node structure with `R05_DATATAG_UNICODE` type
- New Unicode library (`r05-unicode.h/c`) with comprehensive API
- ASCII optimization - characters < 128 use legacy CHAR nodes
- Support for all Unicode scripts including emoji

### Enhanced Built-in Functions
- `Chr` - Extended to support Unicode code points up to U+10FFFF
- `Ord` - Returns Unicode code points for all characters
- `ChrHex` - Convert hex string to Unicode character (e.g., '0x4E2D' → '中')
- `OrdHex` - Convert character to hex string (e.g., '中' → '0x4E2D')
- `Type` - Unicode category detection (Letter, Digit, etc.)
- `Upper` - Full Unicode uppercase conversion
- `Lower` - Full Unicode lowercase conversion
- `Prout`/`Print` - UTF-8 output with proper encoding

### Unicode Features via ICU
- Character property queries (alphabetic, digit, whitespace, etc.)
- Case mapping with locale support
- Unicode normalization (NFC, NFD, NFKC, NFKD)
- Script identification (Latin, Cyrillic, Han, etc.)
- Grapheme cluster boundary detection
- Bidirectional text properties

### Implementation Details
- Modified `refal05rts.h` to add Unicode node type
- Updated `refal05rts.c` with Unicode allocation and comparison
- Enhanced `Library.c` with Unicode-aware built-ins
- Added ICU detection to build system (`c-plus-plus.conf.sh`)
- Created comprehensive test suite for Unicode functionality

### Performance
- Fast path for ASCII characters in UTF-8 decoding
- Minimal overhead for ASCII-only programs
- ICU caching for character properties

### Compatibility
- Full backward compatibility with existing Refal-05 programs
- Source files can use UTF-8 encoding
- Binary compatibility preserved when built without Unicode

### Build Requirements
- ICU development libraries (icu4c)
- C compiler with C99 support
- Automatic detection of ICU availability

### Known Limitations
- Pattern matching with combining characters needs careful handling
- No locale-specific collation yet implemented

### New Features (v1.1.0)
- **Hexadecimal Functions**: Added `ChrHex` and `OrdHex` for hex Unicode operations
  - `ChrHex` converts hex strings (e.g., '0x4E2D') to Unicode characters
  - `OrdHex` converts characters to hex strings (e.g., '中' → '0x4E2D')
- **Hex Literal Support**: Parser now recognizes `0x` prefix for numbers
  - Direct hex notation in source: `<Chr 0x4E2D>` equivalent to `<Chr 20013>`
  - Works in all numeric contexts: math operations, comparisons, etc.
- **Compiler Unicode Support**: Rebuilt compiler with Unicode-enabled runtime
  - Compiler now properly handles UTF-8 strings in source files
  - Fixed Ord to return Unicode code points instead of UTF-8 bytes

### Bug Fixes
- Fixed ICU UTF-16 compatibility warnings by adding UTF-32 ↔ UTF-16 conversion helpers
- Fixed `Ord` returning UTF-8 byte sequences instead of Unicode code points
- Fixed `OrdHex` to output proper hex strings (was outputting decimal)
- Fixed `ChrHex` to parse character-by-character hex strings correctly
- Fixed compiler to use `r05_alloc_utf8_string` for non-ASCII strings
- Added Platform functions (PathSeparator, IsDirectorySeparator) to Library.c

### Testing
- `test-unicode-hello.ref` - Multi-language demonstration
- `test-simple-unicode.ref` - Character operations
- `test-unicode-compare.ref` - Pattern matching tests
- `test-unicode-comprehensive.ref` - Normalization, scripts, boundaries
- `test-unicode-advanced.ref` - Character types and mixed strings
- `test-hex-literals.ref` - Hexadecimal literal parsing
- `test-hex-functions.ref` - ChrHex/OrdHex functionality
- `test-unicode-source.ref` - Unicode in source (demonstrates limitation)

### Credits
Unicode implementation by Danslav Slavenskoj.

Refal-05 by Alexander Konovalov.