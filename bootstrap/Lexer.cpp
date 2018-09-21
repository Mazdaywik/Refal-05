// Automatically generated file. Don't edit!
#include "refalrts.h"


extern enum r05_fnresult r05c_Map(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_LoadFile(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Inc(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Type(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_FastIntFromStr(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_StrFromInt(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Add(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Chr(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Mul(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Fails(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Success(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EscapeChar(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_FlatLine(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_LexFolding(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_SkipBOM(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkChar(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseBlock(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkCloseBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkComma(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkEOF(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkError(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkName(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkNative(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkNumber(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpenCall(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpenBlock(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpenBracket(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkReplace(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkSemicolon(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkUnexpected(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkVariable(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_EEnum(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Entry(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Enum(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_Extern(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Inc2(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Scan(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanPseudo(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanPseudo_SwDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanPseudo_AddSemicolon(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanCComment(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanCCommentContent(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanNative(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_MakeDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Directive(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_MakeDirective_SwValid(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanChars(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanChars_Escape(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanChars_Escape_Hex(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanChars_Escape_Hex_SwHex(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Escape(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanChars_Escape_SwValid(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanVariable(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Punctuation(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Scan_ByPunctuation(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_Scan_ByType(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_GlueUnexpecteds(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanName(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_ScanNumber(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_StrDirective(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkOpen(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_TkClose(struct r05_node *arg_begin, struct r05_node *arg_end);
extern enum r05_fnresult r05c_StrFromToken(struct r05_node *arg_begin, struct r05_node *arg_end);
static enum r05_fnresult r05c_DigitFromChar(struct r05_node *arg_begin, struct r05_node *arg_end);

static enum r05_fnresult r05c_FlatLine(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    // ( e.Line )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;
    eLine_b_1 = bb_1;
    eLine_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '\n' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_LexFolding(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eFileName_b_1;
    struct r05_node *eFileName_e_1;
    // e.FileName
    eFileName_b_1 = bb_0;
    eFileName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_number( n2, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_number( n3, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_SkipBOM, "SkipBOM" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Map, "Map" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_FlatLine, "FlatLine" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_LoadFile, "LoadFile" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_call( n14 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n14 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n12 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eFileName_b_1, eFileName_e_1 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_SkipBOM(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eContent_b_1;
    struct r05_node *eContent_e_1;
    // '\357\273\277 e.Content
    if (! r05_char_left('\357', &bb_0, &be_0))
      break;
    if (! r05_char_left('\273', &bb_0, &be_0))
      break;
    if (! r05_char_left('\277', &bb_0, &be_0))
      break;
    eContent_b_1 = bb_0;
    eContent_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eContent_b_1, eContent_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eContent_b_1;
    struct r05_node *eContent_e_1;
    // e.Content
    eContent_b_1 = bb_0;
    eContent_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eContent_b_1, eContent_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkChar(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkCloseCall(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkCloseBlock(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkCloseBracket(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkComma(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkDirective(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkEOF(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkError(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkName(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkNative(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkNumber(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkOpenCall(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkOpenBlock(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkOpenBracket(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkReplace(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkSemicolon(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkUnexpected(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkVariable(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_EEnum(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Entry(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Enum(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_Extern(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Inc2(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sNum_1;
    // s.Num
    if (! r05_svar_left(&sNum_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Add, "Add" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_number( n2, 2UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n3 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sNum_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Scan(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col '  e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left(' ', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col '\t e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('\t', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sCol_1;
    // s.Row s.Col '\n e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('\n', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_number( n5, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n6 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *ePseudo_b_1;
    struct r05_node *ePseudo_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    // s.Row 1 '*$ e.Pseudo '\n e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_number_left(1UL, &bb_0, &be_0))
      break;
    if (! r05_char_left('*', &bb_0, &be_0))
      break;
    if (! r05_char_left('$', &bb_0, &be_0))
      break;
    ePseudo_b_1 = 0;
    ePseudo_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      if (! r05_char_left('\n', &bb_1, &be_1))
        continue;
      eTail_b_1 = bb_1;
      eTail_e_1 = be_1;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
        return R05_NO_MEMORY;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_ScanPseudo, "ScanPseudo" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_number( n2, 3UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_open_bracket( n3 ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_bracket( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_open_call( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_name( n6, r05c_Type, "Type" ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_char( n7, '\n' ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_close_call( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_close_call( n9 ) )
        return R05_NO_MEMORY;
      struct r05_node *n10 = 0;
      if( ! refalrts::alloc_open_call( n10 ) )
        return R05_NO_MEMORY;
      struct r05_node *n11 = 0;
      if( ! refalrts::alloc_name( n11, r05c_Scan, "Scan" ) )
        return R05_NO_MEMORY;
      struct r05_node *n12 = 0;
      if( ! refalrts::alloc_open_call( n12 ) )
        return R05_NO_MEMORY;
      struct r05_node *n13 = 0;
      if( ! refalrts::alloc_name( n13, r05c_Inc, "Inc" ) )
        return R05_NO_MEMORY;
      struct r05_node *n14 = 0;
      if( ! refalrts::alloc_close_call( n14 ) )
        return R05_NO_MEMORY;
      struct r05_node *n15 = 0;
      if( ! refalrts::alloc_number( n15, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n16 = 0;
      if( ! refalrts::alloc_close_call( n16 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n16 );
      refalrts::push_stack( n10 );
      res = refalrts::splice_elem( res, n16 );
      res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
      res = refalrts::splice_elem( res, n15 );
      refalrts::push_stack( n14 );
      refalrts::push_stack( n12 );
      res = refalrts::splice_elem( res, n14 );
      res = refalrts::splice_stvar( res, sRow_2 );
      res = refalrts::splice_elem( res, n13 );
      res = refalrts::splice_elem( res, n12 );
      res = refalrts::splice_elem( res, n11 );
      res = refalrts::splice_elem( res, n10 );
      refalrts::push_stack( n9 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n9 );
      refalrts::push_stack( n8 );
      refalrts::push_stack( n5 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, ePseudo_b_1, ePseudo_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::link_brackets( n3, n4 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, sRow_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&ePseudo_b_1, &ePseudo_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *eComment_b_1;
    struct r05_node *eComment_e_1;
    // s.Row 1 '* e.Comment '\n e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_number_left(1UL, &bb_0, &be_0))
      break;
    if (! r05_char_left('*', &bb_0, &be_0))
      break;
    eComment_b_1 = 0;
    eComment_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      if (! r05_char_left('\n', &bb_1, &be_1))
        continue;
      eTail_b_1 = bb_1;
      eTail_e_1 = be_1;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_Scan, "Scan" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_number( n5, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n6 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sRow_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eComment_b_1, &eComment_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col '/* e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('/', &bb_0, &be_0))
      break;
    if (! r05_char_left('*', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanCComment, "ScanCComment" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc2, "Inc2" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    // s.Row 1 '%%\n e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_number_left(1UL, &bb_0, &be_0))
      break;
    if (! r05_char_left('%', &bb_0, &be_0))
      break;
    if (! r05_char_left('%', &bb_0, &be_0))
      break;
    if (! r05_char_left('\n', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanNative, "ScanNative" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col '$ e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('$', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanDirective, "ScanDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col '\' e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('\'', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanChars, "ScanChars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col 'e. e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('e', &bb_0, &be_0))
      break;
    if (! r05_char_left('.', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanVariable, "ScanVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc2, "Inc2" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_char( n5, 'e' ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col 's. e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('s', &bb_0, &be_0))
      break;
    if (! r05_char_left('.', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanVariable, "ScanVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc2, "Inc2" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_char( n5, 's' ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col 't. e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('t', &bb_0, &be_0))
      break;
    if (! r05_char_left('.', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanVariable, "ScanVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc2, "Inc2" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_char( n5, 't' ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n6, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sNext_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col s.Next e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sNext_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan_ByPunctuation, "Scan_ByPunctuation" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Punctuation, "Punctuation" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    // s.Row s.Col
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkEOF, "TkEOF" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanPseudo(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *sLetter_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col ( e.Scanned ) 'L s.SubType s.Letter e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('L', &bb_0, &be_0))
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sLetter_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanPseudo, "ScanPseudo" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sLetter_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *sDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col ( e.Scanned ) 'D s.SubType s.Digit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanPseudo, "ScanPseudo" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDigit_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col ( e.Scanned ) s.Type s.SubType e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanPseudo_SwDirective, "ScanPseudo_SwDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Directive, "Directive" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanPseudo_SwDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sDirective_1;
    struct r05_node *sRow_2;
    // s.Row s.Col ( & Success s.Directive ) e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Success, &bb_1, &be_1))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if (! r05_svar_left(&sDirective_1, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkDirective, "TkDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_number( n3, 2UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_ScanPseudo_AddSemicolon, "ScanPseudo_AddSemicolon" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sDirective_1 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    // s.Row s.Col ( & Fails e.Directive ) e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Fails, &bb_1, &be_1))
      break;
    // Unused closed variable e.Directive
    // Unused closed variable e.Tail

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanPseudo_AddSemicolon(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *tSrcPos_1;
    // e.Tokens ( & TkEOF t.SrcPos )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_right(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_TkEOF, &bb_1, &be_1))
      break;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;
    if (! r05_tvar_left(&tSrcPos_1, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkSemicolon, "TkSemicolon" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, tSrcPos_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanCComment(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eComment_b_1;
    struct r05_node *eComment_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col e.Comment '*/ e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    eComment_b_1 = 0;
    eComment_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      if (! r05_char_left('*', &bb_1, &be_1))
        continue;
      if (! r05_char_left('/', &bb_1, &be_1))
        continue;
      eTail_b_1 = bb_1;
      eTail_e_1 = be_1;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_ScanCCommentContent, "ScanCCommentContent" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_bracket( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_chars( n3, n4, "*/", 2) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_close_bracket( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n6 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
      refalrts::link_brackets( n2, n5 );
      res = refalrts::splice_elem( res, n5 );
      res = refalrts::splice_evar( res, n3, n4 );
      res = refalrts::splice_evar( res, eComment_b_1, eComment_e_1 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, sCol_1 );
      res = refalrts::splice_stvar( res, sRow_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eComment_b_1, &eComment_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *eComment_b_1;
    struct r05_node *eComment_e_1;
    struct r05_node *sCol_1;
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    // s.Row s.Col e.Line '\n e.Comment
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    eLine_b_1 = 0;
    eLine_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_1 = bb_0;
      struct r05_node *be_1 = be_0;
      if (! r05_char_left('\n', &bb_1, &be_1))
        continue;
      eComment_b_1 = bb_1;
      eComment_e_1 = be_1;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_ScanCComment, "ScanCComment" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_number( n5, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_close_call( n6 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n6 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eComment_b_1, eComment_e_1 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sRow_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eLine_b_1, &eLine_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkError, "TkError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "EOF in comment", 14) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_TkEOF, "TkEOF" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_bracket( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_bracket( n11 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n7, n11 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::link_brackets( n9, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanCCommentContent(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *eComment_b_1;
    struct r05_node *eComment_e_1;
    struct r05_node *sCol_1;
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    // s.Row s.Col ( e.Line '\n e.Comment ) e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    eLine_b_1 = 0;
    eLine_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_2 = bb_1;
      struct r05_node *be_2 = be_1;
      if (! r05_char_left('\n', &bb_2, &be_2))
        continue;
      eComment_b_1 = bb_2;
      eComment_e_1 = be_2;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_ScanCCommentContent, "ScanCCommentContent" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_number( n5, 1UL ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_close_call( n8 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n8 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n8 );
      res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eComment_b_1, eComment_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sRow_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eLine_b_1, &eLine_e_1, &bb_1, &be_1));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *eComment_b_1;
    struct r05_node *eComment_e_1;
    struct r05_node *sChar_1;
    // s.Row s.Col ( s.Char e.Comment ) e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if (! r05_svar_left(&sChar_1, &bb_1, &be_1))
      break;
    eComment_b_1 = bb_1;
    eComment_e_1 = be_1;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanCCommentContent, "ScanCCommentContent" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eComment_b_1, eComment_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col ( ) e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanNative(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sStartRow_1;
    struct r05_node *sRow_1;
    struct r05_node *eNative_b_1;
    struct r05_node *eNative_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.StartRow s.Row ( e.Native ) '%%\n e.Tail
    if (! r05_svar_left(&sStartRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('%', &bb_0, &be_0))
      break;
    if (! r05_char_left('%', &bb_0, &be_0))
      break;
    if (! r05_char_left('\n', &bb_0, &be_0))
      break;
    eNative_b_1 = bb_1;
    eNative_e_1 = be_1;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkNative, "TkNative" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_number( n3, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_number( n11, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n12 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eNative_b_1, eNative_e_1 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sStartRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sStartRow_1;
    struct r05_node *sRow_1;
    struct r05_node *eNative_b_1;
    struct r05_node *eNative_e_1;
    struct r05_node *eLine_b_1;
    struct r05_node *eLine_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.StartRow s.Row ( e.Native ) e.Line '\n e.Tail
    if (! r05_svar_left(&sStartRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eNative_b_1 = bb_1;
    eNative_e_1 = be_1;
    eLine_b_1 = 0;
    eLine_e_1 = 0;
    refalrts::start_e_loop();
    do {
      struct r05_node *bb_2 = bb_0;
      struct r05_node *be_2 = be_0;
      if (! r05_char_left('\n', &bb_2, &be_2))
        continue;
      eTail_b_1 = bb_2;
      eTail_e_1 = be_2;

      refalrts::reset_allocator();
      struct r05_node *res = arg_begin;
      struct r05_node *n0 = 0;
      if( ! refalrts::alloc_open_call( n0 ) )
        return R05_NO_MEMORY;
      struct r05_node *n1 = 0;
      if( ! refalrts::alloc_name( n1, r05c_ScanNative, "ScanNative" ) )
        return R05_NO_MEMORY;
      struct r05_node *n2 = 0;
      if( ! refalrts::alloc_open_call( n2 ) )
        return R05_NO_MEMORY;
      struct r05_node *n3 = 0;
      if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
        return R05_NO_MEMORY;
      struct r05_node *n4 = 0;
      if( ! refalrts::alloc_close_call( n4 ) )
        return R05_NO_MEMORY;
      struct r05_node *n5 = 0;
      if( ! refalrts::alloc_open_bracket( n5 ) )
        return R05_NO_MEMORY;
      struct r05_node *n6 = 0;
      if( ! refalrts::alloc_open_bracket( n6 ) )
        return R05_NO_MEMORY;
      struct r05_node *n7 = 0;
      if( ! refalrts::alloc_close_bracket( n7 ) )
        return R05_NO_MEMORY;
      struct r05_node *n8 = 0;
      if( ! refalrts::alloc_close_bracket( n8 ) )
        return R05_NO_MEMORY;
      struct r05_node *n9 = 0;
      if( ! refalrts::alloc_close_call( n9 ) )
        return R05_NO_MEMORY;
      refalrts::push_stack( n9 );
      refalrts::push_stack( n0 );
      res = refalrts::splice_elem( res, n9 );
      res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
      refalrts::link_brackets( n5, n8 );
      res = refalrts::splice_elem( res, n8 );
      refalrts::link_brackets( n6, n7 );
      res = refalrts::splice_elem( res, n7 );
      res = refalrts::splice_evar( res, eLine_b_1, eLine_e_1 );
      res = refalrts::splice_elem( res, n6 );
      res = refalrts::splice_evar( res, eNative_b_1, eNative_e_1 );
      res = refalrts::splice_elem( res, n5 );
      refalrts::push_stack( n4 );
      refalrts::push_stack( n2 );
      res = refalrts::splice_elem( res, n4 );
      res = refalrts::splice_stvar( res, sRow_1 );
      res = refalrts::splice_elem( res, n3 );
      res = refalrts::splice_elem( res, n2 );
      res = refalrts::splice_stvar( res, sStartRow_1 );
      res = refalrts::splice_elem( res, n1 );
      res = refalrts::splice_elem( res, n0 );
      r05_use(&res);
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return R05_SUCCESS;
    } while (r05_open_evar_advance(&eLine_b_1, &eLine_e_1, &bb_0, &be_0));
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eNative_b_1;
    struct r05_node *eNative_e_1;
    struct r05_node *sStartRow_1;
    struct r05_node *sRow_1;
    struct r05_node *sRow_2;
    // s.StartRow s.Row ( e.Native )
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_right(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eNative_b_1 = bb_1;
    eNative_e_1 = be_1;
    if (! r05_svar_left(&sStartRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkNative, "TkNative" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_number( n3, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_TkError, "TkError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_number( n9, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_bracket( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_chars( n11, n12, "unclosed native code", 20) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_bracket( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_open_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_name( n15, r05c_TkEOF, "TkEOF" ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_open_bracket( n16 ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_number( n17, 1UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n18 = 0;
    if( ! refalrts::alloc_close_bracket( n18 ) )
      return R05_NO_MEMORY;
    struct r05_node *n19 = 0;
    if( ! refalrts::alloc_close_bracket( n19 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n14, n19 );
    res = refalrts::splice_elem( res, n19 );
    refalrts::link_brackets( n16, n18 );
    res = refalrts::splice_elem( res, n18 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::link_brackets( n6, n13 );
    res = refalrts::splice_elem( res, n13 );
    res = refalrts::splice_evar( res, n11, n12 );
    refalrts::link_brackets( n8, n10 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    refalrts::link_brackets( n0, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eNative_b_1, eNative_e_1 );
    refalrts::link_brackets( n2, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sStartRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *sLetter_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col ( e.Scanned ) 'L s.SubType s.Letter e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('L', &bb_0, &be_0))
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sLetter_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanDirective, "ScanDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sLetter_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *sDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col ( e.Scanned ) 'D s.SubType s.Digit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanDirective, "ScanDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDigit_1 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eScanned_b_1;
    struct r05_node *eScanned_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col ( e.Scanned ) s.Type s.SubType e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eScanned_b_1 = bb_1;
    eScanned_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_MakeDirective, "MakeDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_open_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_name( n4, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n3 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eScanned_b_1, eScanned_e_1 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MakeDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eDirective_b_1;
    struct r05_node *eDirective_e_1;
    // s.Row s.Col e.Directive
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    eDirective_b_1 = bb_0;
    eDirective_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_MakeDirective_SwValid, "MakeDirective_SwValid" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Directive, "Directive" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eDirective_b_1, eDirective_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Directive(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'ENUM'
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_char_left('N', &bb_0, &be_0))
      break;
    if (! r05_char_left('U', &bb_0, &be_0))
      break;
    if (! r05_char_left('M', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Enum, "Enum" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'EENUM'
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_char_left('N', &bb_0, &be_0))
      break;
    if (! r05_char_left('U', &bb_0, &be_0))
      break;
    if (! r05_char_left('M', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_EEnum, "EEnum" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'ENTRY'
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_char_left('N', &bb_0, &be_0))
      break;
    if (! r05_char_left('T', &bb_0, &be_0))
      break;
    if (! r05_char_left('R', &bb_0, &be_0))
      break;
    if (! r05_char_left('Y', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Entry, "Entry" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'EXTERN'
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_char_left('X', &bb_0, &be_0))
      break;
    if (! r05_char_left('T', &bb_0, &be_0))
      break;
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_char_left('R', &bb_0, &be_0))
      break;
    if (! r05_char_left('N', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Extern, "Extern" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eOther_b_1;
    struct r05_node *eOther_e_1;
    // e.Other
    eOther_b_1 = bb_0;
    eOther_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Fails, "Fails" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_MakeDirective_SwValid(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sDirective_1;
    // s.Row s.Col & Success s.Directive
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Success, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDirective_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkDirective, "TkDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sDirective_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eOther_b_1;
    struct r05_node *eOther_e_1;
    // s.Row s.Col & Fails e.Other
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Fails, &bb_0, &be_0))
      break;
    eOther_b_1 = bb_0;
    eOther_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkError, "TkError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "Unknown directive $", 19) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eOther_b_1, eOther_e_1 );
    res = refalrts::splice_evar( res, n4, n5 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanChars(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col '\' e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('\'', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col '\n e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('\n', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkError, "TkError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "unclosed quote", 14) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_char( n9, '\n' ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col '\\ e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('\\', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanChars_Escape, "ScanChars_Escape" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sOther_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col s.Other e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sOther_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkChar, "TkChar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_ScanChars, "ScanChars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sOther_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanChars_Escape(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col 'x e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('x', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanChars_Escape_Hex, "ScanChars_Escape_Hex" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sNext_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col s.Next e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sNext_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanChars_Escape_SwValid, "ScanChars_Escape_SwValid" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Escape, "Escape" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanChars_Escape_Hex(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sH1_1;
    struct r05_node *sH2_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col ( s.H1 s.H2 ) e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;
    if (! r05_svar_left(&sH1_1, &bb_1, &be_1))
      break;
    if (! r05_svar_left(&sH2_1, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkChar, "TkChar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_Chr, "Chr" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Add, "Add" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Mul, "Mul" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_number( n10, 16UL ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    struct r05_node *n14 = 0;
    if( ! refalrts::alloc_close_bracket( n14 ) )
      return R05_NO_MEMORY;
    struct r05_node *n15 = 0;
    if( ! refalrts::alloc_open_call( n15 ) )
      return R05_NO_MEMORY;
    struct r05_node *n16 = 0;
    if( ! refalrts::alloc_name( n16, r05c_ScanChars, "ScanChars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n17 = 0;
    if( ! refalrts::alloc_close_call( n17 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n17 );
    refalrts::push_stack( n15 );
    res = refalrts::splice_elem( res, n17 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n16 );
    res = refalrts::splice_elem( res, n15 );
    refalrts::link_brackets( n0, n14 );
    res = refalrts::splice_elem( res, n14 );
    refalrts::push_stack( n13 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_stvar( res, sH2_1 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_stvar( res, sH1_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eDigits_b_1;
    struct r05_node *eDigits_e_1;
    struct r05_node *sNext_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col ( e.Digits ) s.Next e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eDigits_b_1 = bb_1;
    eDigits_e_1 = be_1;
    if (! r05_svar_left(&sNext_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanChars_Escape_Hex_SwHex, "ScanChars_Escape_Hex_SwHex" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_DigitFromChar, "DigitFromChar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sNext_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_evar( res, eDigits_b_1, eDigits_e_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanChars_Escape_Hex_SwHex(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sNoDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col ( e.Digits ) & Fails s.NoDigit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Fails, &bb_0, &be_0))
      break;
    // Unused closed variable e.Digits
    if (! r05_svar_left(&sNoDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkError, "TkError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "bad hex escape sequence \"\\x...\"", 31) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_ScanChars, "ScanChars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sNoDigit_1 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n0, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, n4, n5 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eDigits_b_1;
    struct r05_node *eDigits_e_1;
    struct r05_node *sDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col ( e.Digits ) s.Digit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eDigits_b_1 = bb_1;
    eDigits_e_1 = be_1;
    if (! r05_svar_left(&sDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanChars_Escape_Hex, "ScanChars_Escape_Hex" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDigit_1 );
    res = refalrts::splice_evar( res, eDigits_b_1, eDigits_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Escape(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'n'
    if (! r05_char_left('n', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '\n' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 't'
    if (! r05_char_left('t', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '\t' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'r'
    if (! r05_char_left('r', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '\r' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '\\'
    if (! r05_char_left('\\', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '\\' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '\''
    if (! r05_char_left('\'', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '\'' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '\"'
    if (! r05_char_left('\"', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '\"' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '<'
    if (! r05_char_left('<', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '<' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '>'
    if (! r05_char_left('>', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '>' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '('
    if (! r05_char_left('(', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, '(' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // ')'
    if (! r05_char_left(')', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_char( n1, ')' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sOther_1;
    // s.Other
    if (! r05_svar_left(&sOther_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Fails, "Fails" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_stvar( res, sOther_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanChars_Escape_SwValid(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sValue_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col & Success s.Value e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Success, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sValue_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkChar, "TkChar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_ScanChars, "ScanChars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sValue_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sOther_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    struct r05_node *sOther_2;
    // s.Row s.Col & Fails s.Other e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Fails, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sOther_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sOther_2, sOther_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkError, "TkError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "bad escape sequence \"\\", 22) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_char( n6, '\"' ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_ScanChars, "ScanChars" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sOther_2 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sOther_1 );
    res = refalrts::splice_evar( res, n4, n5 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanVariable(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *sLetter_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col s.Mode ( e.Index ) 'L s.SubType s.Letter e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sMode_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('L', &bb_0, &be_0))
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sLetter_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanVariable, "ScanVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sLetter_1 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *sDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col s.Mode ( e.Index ) 'D s.SubType s.Digit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sMode_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanVariable, "ScanVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDigit_1 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col s.Mode ( e.Index ) s.Type s.SubType '- e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sMode_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('-', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanVariable, "ScanVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_char( n6, '_' ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    // s.Row s.Col s.Mode ( e.Index ) s.Type s.SubType '_ e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sMode_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('_', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanVariable, "ScanVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_char( n6, '_' ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sMode_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col s.Mode ( ) s.Type s.SubType e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sMode_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkError, "TkError" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_chars( n4, n5, "empty index in variable \"", 25) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_chars( n6, n7, ".\"", 2) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_bracket( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    refalrts::link_brackets( n0, n8 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_evar( res, n6, n7 );
    res = refalrts::splice_stvar( res, sMode_1 );
    res = refalrts::splice_evar( res, n4, n5 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col s.Mode ( e.Index ) s.Type s.SubType e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sMode_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eIndex_b_1 = bb_1;
    eIndex_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkVariable, "TkVariable" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_stvar( res, sMode_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Punctuation(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '('
    if (! r05_char_left('(', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkOpenBracket, "TkOpenBracket" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // ')'
    if (! r05_char_left(')', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkCloseBracket, "TkCloseBracket" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // ','
    if (! r05_char_left(',', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkComma, "TkComma" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // ';'
    if (! r05_char_left(';', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkSemicolon, "TkSemicolon" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '<'
    if (! r05_char_left('<', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkOpenCall, "TkOpenCall" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '='
    if (! r05_char_left('=', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkReplace, "TkReplace" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '>'
    if (! r05_char_left('>', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkCloseCall, "TkCloseCall" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '{'
    if (! r05_char_left('{', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkOpenBlock, "TkOpenBlock" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '}'
    if (! r05_char_left('}', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Success, "Success" ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkCloseBlock, "TkCloseBlock" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sOther_1;
    // s.Other
    if (! r05_svar_left(&sOther_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Fails, "Fails" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_stvar( res, sOther_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Scan_ByPunctuation(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sToken_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col & Success s.Token e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Success, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sToken_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_bracket( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_open_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_name( n7, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_close_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n9 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    refalrts::push_stack( n8 );
    refalrts::push_stack( n6 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n0, n3 );
    res = refalrts::splice_elem( res, n3 );
    refalrts::link_brackets( n1, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_stvar( res, sToken_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    // s.Row s.Col & Fails e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_Fails, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_Scan_ByType, "Scan_ByType" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_call( n5 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n5 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_Scan_ByType(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sLetter_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    struct r05_node *sCol_2;
    // s.Row s.Col 'L s.SubType s.Letter e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('L', &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sLetter_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanName, "ScanName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sLetter_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    struct r05_node *sCol_2;
    // s.Row s.Col 'D s.SubType s.Digit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanNumber, "ScanNumber" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDigit_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sCol_1;
    struct r05_node *sUnexpected_1;
    struct r05_node *eText_b_1;
    struct r05_node *eText_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    struct r05_node *sRow_2;
    struct r05_node *sCol_2;
    // s.Row s.Col s.Type s.SubType s.Unexpected e.Text
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sUnexpected_1, &bb_0, &be_0))
      break;
    eText_b_1 = bb_0;
    eText_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    if( ! refalrts::copy_stvar( sCol_2, sCol_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_GlueUnexpecteds, "GlueUnexpecteds" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_TkUnexpected, "TkUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_close_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_open_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_name( n10, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    struct r05_node *n12 = 0;
    if( ! refalrts::alloc_close_call( n12 ) )
      return R05_NO_MEMORY;
    struct r05_node *n13 = 0;
    if( ! refalrts::alloc_close_call( n13 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n13 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n13 );
    refalrts::push_stack( n12 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n12 );
    res = refalrts::splice_evar( res, eText_b_1, eText_e_1 );
    refalrts::push_stack( n11 );
    refalrts::push_stack( n9 );
    res = refalrts::splice_elem( res, n11 );
    res = refalrts::splice_stvar( res, sCol_2 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n2, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sUnexpected_1 );
    refalrts::link_brackets( n4, n5 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_GlueUnexpecteds(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    struct r05_node *tSrcPos1_1;
    struct r05_node *sUnexpected1_1;
    struct r05_node *eUnexpected2_b_1;
    struct r05_node *eUnexpected2_e_1;
    struct r05_node *tSrcPos2_1;
    // ( & TkUnexpected t.SrcPos1 s.Unexpected1 ) ( & TkUnexpected t.SrcPos2 e.Unexpected2 ) e.Tokens
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_TkUnexpected, &bb_1, &be_1))
      break;
    struct r05_node *bb_2 = 0;
    struct r05_node *be_2 = 0;
    if (! r05_brackets_left(&bb_2, &be_2, &bb_0, &be_0))
      break;
    if (! r05_function_left(r05c_TkUnexpected, &bb_2, &be_2))
      break;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;
    if (! r05_tvar_left(&tSrcPos1_1, &bb_1, &be_1))
      break;
    if (! r05_svar_left(&sUnexpected1_1, &bb_1, &be_1))
      break;
    if (! r05_empty_seq(bb_1, be_1))
      break;
    if (! r05_tvar_left(&tSrcPos2_1, &bb_2, &be_2))
      break;
    eUnexpected2_b_1 = bb_2;
    eUnexpected2_e_1 = be_2;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkUnexpected, "TkUnexpected" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_bracket( n2 ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    refalrts::link_brackets( n0, n2 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eUnexpected2_b_1, eUnexpected2_e_1 );
    res = refalrts::splice_stvar( res, sUnexpected1_1 );
    res = refalrts::splice_stvar( res, tSrcPos1_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *tUnexpected_1;
    struct r05_node *eTokens_b_1;
    struct r05_node *eTokens_e_1;
    // t.Unexpected e.Tokens
    if (! r05_tvar_left(&tUnexpected_1, &bb_0, &be_0))
      break;
    eTokens_b_1 = bb_0;
    eTokens_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    res = refalrts::splice_evar( res, eTokens_b_1, eTokens_e_1 );
    res = refalrts::splice_stvar( res, tUnexpected_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanName(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sStartCol_1;
    struct r05_node *sCol_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *sLetter_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.StartCol s.Col ( e.Name ) 'L s.SubType s.Letter e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sStartCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('L', &bb_0, &be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sLetter_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanName, "ScanName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sLetter_1 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sStartCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sStartCol_1;
    struct r05_node *sCol_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *sDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.StartCol s.Col ( e.Name ) 'D s.SubType s.Digit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sStartCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanName, "ScanName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDigit_1 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sStartCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sStartCol_1;
    struct r05_node *sCol_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    // s.Row s.StartCol s.Col ( e.Name ) s.Type s.SubType '- e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sStartCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('-', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanName, "ScanName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_char( n6, '_' ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sStartCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sStartCol_1;
    struct r05_node *sCol_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    // s.Row s.StartCol s.Col ( e.Name ) s.Type s.SubType '_ e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sStartCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('_', &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanName, "ScanName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_char( n6, '_' ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    struct r05_node *n11 = 0;
    if( ! refalrts::alloc_close_call( n11 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n11 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n11 );
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n5, n7 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sStartCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sStartCol_1;
    struct r05_node *sCol_1;
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    struct r05_node *sRow_2;
    // s.Row s.StartCol s.Col ( e.Name ) s.Type s.SubType e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sStartCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eName_b_1 = bb_1;
    eName_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkName, "TkName" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_bracket( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_call( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_name( n6, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_call( n7 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n7 );
    refalrts::push_stack( n5 );
    res = refalrts::splice_elem( res, n7 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::link_brackets( n0, n4 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sStartCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_ScanNumber(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sStartCol_1;
    struct r05_node *sCol_1;
    struct r05_node *eNumber_b_1;
    struct r05_node *eNumber_e_1;
    struct r05_node *sDigit_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sSubType_1;
    // s.Row s.StartCol s.Col ( e.Number ) 'D s.SubType s.Digit e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sStartCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    eNumber_b_1 = bb_1;
    eNumber_e_1 = be_1;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDigit_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_ScanNumber, "ScanNumber" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_Inc, "Inc" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_open_bracket( n5 ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_bracket( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_open_call( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_name( n8, r05c_Type, "Type" ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_close_call( n9 ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n10 );
    refalrts::push_stack( n9 );
    refalrts::push_stack( n7 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_elem( res, n8 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::link_brackets( n5, n6 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_stvar( res, sDigit_1 );
    res = refalrts::splice_evar( res, eNumber_b_1, eNumber_e_1 );
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sStartCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sRow_1;
    struct r05_node *sStartCol_1;
    struct r05_node *sCol_1;
    struct r05_node *eNumber_b_1;
    struct r05_node *eNumber_e_1;
    struct r05_node *eTail_b_1;
    struct r05_node *eTail_e_1;
    struct r05_node *sType_1;
    struct r05_node *sSubType_1;
    struct r05_node *sRow_2;
    // s.Row s.StartCol s.Col ( e.Number ) s.Type s.SubType e.Tail
    if (! r05_svar_left(&sRow_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sStartCol_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCol_1, &bb_0, &be_0))
      break;
    struct r05_node *bb_1 = 0;
    struct r05_node *be_1 = 0;
    if (! r05_brackets_left(&bb_1, &be_1, &bb_0, &be_0))
      break;
    eNumber_b_1 = bb_1;
    eNumber_e_1 = be_1;
    if (! r05_svar_left(&sType_1, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sSubType_1, &bb_0, &be_0))
      break;
    eTail_b_1 = bb_0;
    eTail_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    if( ! refalrts::copy_stvar( sRow_2, sRow_1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_bracket( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_TkNumber, "TkNumber" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_bracket( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_bracket( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_open_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_name( n5, r05c_FastIntFromStr, "FastIntFromStr" ) )
      return R05_NO_MEMORY;
    struct r05_node *n6 = 0;
    if( ! refalrts::alloc_close_call( n6 ) )
      return R05_NO_MEMORY;
    struct r05_node *n7 = 0;
    if( ! refalrts::alloc_close_bracket( n7 ) )
      return R05_NO_MEMORY;
    struct r05_node *n8 = 0;
    if( ! refalrts::alloc_open_call( n8 ) )
      return R05_NO_MEMORY;
    struct r05_node *n9 = 0;
    if( ! refalrts::alloc_name( n9, r05c_Scan, "Scan" ) )
      return R05_NO_MEMORY;
    struct r05_node *n10 = 0;
    if( ! refalrts::alloc_close_call( n10 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n10 );
    refalrts::push_stack( n8 );
    res = refalrts::splice_elem( res, n10 );
    res = refalrts::splice_evar( res, eTail_b_1, eTail_e_1 );
    res = refalrts::splice_stvar( res, sCol_1 );
    res = refalrts::splice_stvar( res, sRow_2 );
    res = refalrts::splice_elem( res, n9 );
    res = refalrts::splice_elem( res, n8 );
    refalrts::link_brackets( n0, n7 );
    res = refalrts::splice_elem( res, n7 );
    refalrts::push_stack( n6 );
    refalrts::push_stack( n4 );
    res = refalrts::splice_elem( res, n6 );
    res = refalrts::splice_evar( res, eNumber_b_1, eNumber_e_1 );
    res = refalrts::splice_elem( res, n5 );
    res = refalrts::splice_elem( res, n4 );
    refalrts::link_brackets( n2, n3 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sStartCol_1 );
    res = refalrts::splice_stvar( res, sRow_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_StrDirective(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & EEnum
    if (! r05_function_left(r05c_EEnum, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "EENUM", 5) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & Entry
    if (! r05_function_left(r05c_Entry, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "ENTRY", 5) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & Enum
    if (! r05_function_left(r05c_Enum, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "ENUM", 4) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & Extern
    if (! r05_function_left(r05c_Extern, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "EXTERN", 6) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkOpen(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_TkClose(struct r05_node *, struct r05_node *) {
  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

enum r05_fnresult r05c_StrFromToken(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sChar_1;
    // & TkChar s.Char
    if (! r05_function_left(r05c_TkChar, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sChar_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '\'' ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_open_call( n1 ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_name( n2, r05c_EscapeChar, "EscapeChar" ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_close_call( n3 ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_char( n4, '\'' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n4 );
    refalrts::push_stack( n3 );
    refalrts::push_stack( n1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_stvar( res, sChar_1 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkCloseCall
    if (! r05_function_left(r05c_TkCloseCall, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\">\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkCloseBlock
    if (! r05_function_left(r05c_TkCloseBlock, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\"}\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkCloseBracket
    if (! r05_function_left(r05c_TkCloseBracket, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\")\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkComma
    if (! r05_function_left(r05c_TkComma, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\",\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sDirective_1;
    // & TkDirective s.Directive
    if (! r05_function_left(r05c_TkDirective, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sDirective_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\"$", 2) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_StrDirective, "StrDirective" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    struct r05_node *n5 = 0;
    if( ! refalrts::alloc_char( n5, '\"' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n5 );
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sDirective_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkEOF
    if (! r05_function_left(r05c_TkEOF, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "end of file", 11) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eMessage_b_1;
    struct r05_node *eMessage_e_1;
    // & TkError e.Message
    if (! r05_function_left(r05c_TkError, &bb_0, &be_0))
      break;
    eMessage_b_1 = bb_0;
    eMessage_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "LEXER ERROR: ", 13) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eMessage_b_1, eMessage_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eName_b_1;
    struct r05_node *eName_e_1;
    // & TkName e.Name
    if (! r05_function_left(r05c_TkName, &bb_0, &be_0))
      break;
    eName_b_1 = bb_0;
    eName_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Name ", 5) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eName_b_1, eName_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkNative e.Code
    if (! r05_function_left(r05c_TkNative, &bb_0, &be_0))
      break;
    // Unused closed variable e.Code

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\"%%...%%\"", 9) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sNumber_1;
    // & TkNumber s.Number
    if (! r05_function_left(r05c_TkNumber, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sNumber_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Number ", 7) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_open_call( n2 ) )
      return R05_NO_MEMORY;
    struct r05_node *n3 = 0;
    if( ! refalrts::alloc_name( n3, r05c_StrFromInt, "StrFromInt" ) )
      return R05_NO_MEMORY;
    struct r05_node *n4 = 0;
    if( ! refalrts::alloc_close_call( n4 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n4 );
    refalrts::push_stack( n2 );
    res = refalrts::splice_elem( res, n4 );
    res = refalrts::splice_stvar( res, sNumber_1 );
    res = refalrts::splice_elem( res, n3 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenCall
    if (! r05_function_left(r05c_TkOpenCall, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\"<\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenBlock
    if (! r05_function_left(r05c_TkOpenBlock, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\"{\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkOpenBracket
    if (! r05_function_left(r05c_TkOpenBracket, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\"(\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkReplace
    if (! r05_function_left(r05c_TkReplace, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\"=\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // & TkSemicolon
    if (! r05_function_left(r05c_TkSemicolon, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "\";\"", 3) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *eUnexpected_b_1;
    struct r05_node *eUnexpected_e_1;
    // & TkUnexpected e.Unexpected
    if (! r05_function_left(r05c_TkUnexpected, &bb_0, &be_0))
      break;
    eUnexpected_b_1 = bb_0;
    eUnexpected_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_chars( n0, n1, "Unexpected characters <", 23) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_char( n2, '>' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_evar( res, eUnexpected_b_1, eUnexpected_e_1 );
    res = refalrts::splice_evar( res, n0, n1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sMode_1;
    struct r05_node *eIndex_b_1;
    struct r05_node *eIndex_e_1;
    // & TkVariable s.Mode e.Index
    if (! r05_function_left(r05c_TkVariable, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sMode_1, &bb_0, &be_0))
      break;
    eIndex_b_1 = bb_0;
    eIndex_e_1 = be_0;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_char( n0, '.' ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_evar( res, eIndex_b_1, eIndex_e_1 );
    res = refalrts::splice_elem( res, n0 );
    res = refalrts::splice_stvar( res, sMode_1 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sOpenBracket_1;
    // & TkOpen s.OpenBracket
    if (! r05_function_left(r05c_TkOpen, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sOpenBracket_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_StrFromToken, "StrFromToken" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sOpenBracket_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sCloseBracket_1;
    // & TkClose s.CloseBracket
    if (! r05_function_left(r05c_TkClose, &bb_0, &be_0))
      break;
    if (! r05_svar_left(&sCloseBracket_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_open_call( n0 ) )
      return R05_NO_MEMORY;
    struct r05_node *n1 = 0;
    if( ! refalrts::alloc_name( n1, r05c_StrFromToken, "StrFromToken" ) )
      return R05_NO_MEMORY;
    struct r05_node *n2 = 0;
    if( ! refalrts::alloc_close_call( n2 ) )
      return R05_NO_MEMORY;
    refalrts::push_stack( n2 );
    refalrts::push_stack( n0 );
    res = refalrts::splice_elem( res, n2 );
    res = refalrts::splice_stvar( res, sCloseBracket_1 );
    res = refalrts::splice_elem( res, n1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}

static enum r05_fnresult r05c_DigitFromChar(struct r05_node *arg_begin, struct r05_node *arg_end) {
  refalrts::this_is_generated_function();
  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '0'
    if (! r05_char_left('0', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 0UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '1'
    if (! r05_char_left('1', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 1UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '2'
    if (! r05_char_left('2', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 2UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '3'
    if (! r05_char_left('3', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 3UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '4'
    if (! r05_char_left('4', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 4UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '5'
    if (! r05_char_left('5', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 5UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '6'
    if (! r05_char_left('6', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 6UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '7'
    if (! r05_char_left('7', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 7UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '8'
    if (! r05_char_left('8', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 8UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // '9'
    if (! r05_char_left('9', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 9UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'A'
    if (! r05_char_left('A', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 10UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'B'
    if (! r05_char_left('B', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 11UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'C'
    if (! r05_char_left('C', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 12UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'D'
    if (! r05_char_left('D', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 13UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'E'
    if (! r05_char_left('E', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 14UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'F'
    if (! r05_char_left('F', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 15UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'a'
    if (! r05_char_left('a', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 10UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'b'
    if (! r05_char_left('b', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 11UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'c'
    if (! r05_char_left('c', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 12UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'd'
    if (! r05_char_left('d', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 13UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'e'
    if (! r05_char_left('e', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 14UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    // 'f'
    if (! r05_char_left('f', &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_number( n0, 15UL ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  do {
    struct r05_node *bb_0 = 0;
    struct r05_node *be_0 = 0;
    r05_prepare_argument(&bb_0, &be_0, arg_begin, arg_end);
    refalrts::start_sentence();
    struct r05_node *sOther_1;
    // s.Other
    if (! r05_svar_left(&sOther_1, &bb_0, &be_0))
      break;
    if (! r05_empty_seq(bb_0, be_0))
      break;

    refalrts::reset_allocator();
    struct r05_node *res = arg_begin;
    struct r05_node *n0 = 0;
    if( ! refalrts::alloc_name( n0, r05c_Fails, "Fails" ) )
      return R05_NO_MEMORY;
    res = refalrts::splice_stvar( res, sOther_1 );
    res = refalrts::splice_elem( res, n0 );
    r05_use(&res);
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return R05_SUCCESS;
  } while ( 0 );

  return (enum r05_fnresult)(
    R05_RECOGNITION_IMPOSSIBLE | (__LINE__ << 8)
  );
}


//End of file
