#include <exception>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <assert.h>

#include "refalrts.h"

#if 1
#  define VALID_LINKED(iter)
#else
#  define VALID_LINKED(iter) valid_linked_aux(#iter, iter);
#endif

#ifndef SHOW_DEBUG
#define SHOW_DEBUG 0
#endif // ifdef SHOW_DEBUG

void valid_linked_aux(const char *text, struct r05_node *i) {
  printf("checking %s\n", text);
  if (0 == i) {
    return;
  }

  if (i->next) {
    assert(i->next->prev == i);
  }

  if (i->prev) {
    assert(i->prev->next == i);
  }
}


#define EXIT_CODE_RECOGNITION_IMPOSSIBLE 1
#define EXIT_CODE_NO_MEMORY 2
#define EXIT_CODE_STD_EXCEPTION 4
#define EXIT_CODE_UNKNOWN_EXCEPTION 5


/*==============================================================================
   Операции сопоставления с образцом
==============================================================================*/

void r05_use(struct r05_node **) {
  /* Ничего не делаем. Эта функция добавляется, чтобы подавить предупреждение
  компилятора о том, что переменная не используется */;
}


void r05_prepare_argument(
  struct r05_node **left, struct r05_node **right,
  struct r05_node *arg_begin, struct r05_node *arg_end
) {
  *left = arg_begin->next->next;
  *right = arg_end->prev;
  if ((*right)->next == *left) {
    *left = 0;
    *right = 0;
  }
}


void r05_move_left(struct r05_node **first, struct r05_node **last) {
  //assert((*first == 0) == (*last == 0));
  if (*first == 0) assert (*last == 0);
  if (*first != 0) assert (*last != 0);

  if (*first == *last) {
    *first = 0;
    *last = 0;
  } else {
    *first = (*first)->next;
  }
}


void r05_move_right(struct r05_node **first, struct r05_node **last) {
  //assert((*first == 0) == (*last == 0));
  if (*first == 0) assert (*last == 0);
  if (*first != 0) assert (*last != 0);

  if (*first == *last) {
    *first = 0;
    *last = 0;
  } else {
    *last = (*last)->prev;
  }
}


int r05_empty_seq(struct r05_node *first, struct r05_node *last) {
  //assert((first == 0) == (last == 0));
  if (first == 0) assert (last == 0);
  if (first != 0) assert (last != 0);

  return (first == 0) && (last == 0);
}


int r05_function_left(
  r05_function_ptr fn, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if ((*first)->tag != R05_DATATAG_FUNCTION) {
    return 0;
  } else if ((*first)->info.function.ptr != fn) {
    return 0;
  } else {
    r05_move_left(first, last);
    return 1;
  }
}


int r05_function_right(
  r05_function_ptr fn, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (R05_DATATAG_FUNCTION != (*last)->tag) {
    return 0;
  } else if ((*last)->info.function.ptr != fn) {
    return 0;
  } else {
    r05_move_right(first, last);
    return 1;
  }
}


int r05_char_left(char ch, struct r05_node **first, struct r05_node **last) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (R05_DATATAG_CHAR != (*first)->tag) {
    return 0;
  } else if ((*first)->info.char_ != ch) {
    return 0;
  } else {
    r05_move_left(first, last);
    return 1;
  }
}


int r05_char_right(char ch, struct r05_node **first, struct r05_node **last) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (R05_DATATAG_CHAR != (*last)->tag) {
    return 0;
  } else if ((*last)->info.char_ != ch) {
    return 0;
  } else {
    r05_move_right(first, last);
    return 1;
  }
}


int r05_number_left(
  r05_number num, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (R05_DATATAG_NUMBER != (*first)->tag) {
    return 0;
  } else if ((*first)->info.number != num) {
    return 0;
  } else {
    r05_move_left(first, last);
    return 1;
  }
}


int r05_number_right(
  r05_number num, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (R05_DATATAG_NUMBER != (*last)->tag) {
    return 0;
  } else if ((*last)->info.number != num) {
    return 0;
  } else {
    r05_move_right(first, last);
    return 1;
  }
}


int r05_brackets_left(
  struct r05_node **res_first, struct r05_node **res_last,
  struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (R05_DATATAG_OPEN_BRACKET != (*first)->tag) {
    return 0;
  } else {
    struct r05_node *left_bracket = *first;
    struct r05_node *right_bracket = left_bracket->info.link;

    if (left_bracket->next != right_bracket) {
      *res_first = left_bracket->next;
      *res_last = right_bracket->prev;
    } else {
      *res_first = 0;
      *res_last = 0;
    }

    if (right_bracket == *last) {
      *first = 0;
      *last = 0;
    } else {
      *first = right_bracket->next;
    }

    return 1;
  }
}


int r05_brackets_right(
  struct r05_node **res_first, struct r05_node **res_last,
  struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (R05_DATATAG_CLOSE_BRACKET != (*last)->tag) {
    return 0;
  } else {
    struct r05_node *right_bracket = *last;
    struct r05_node *left_bracket = right_bracket->info.link;

    if (left_bracket->next != right_bracket) {
      *res_first = left_bracket->next;
      *res_last = right_bracket->prev;
    } else {
      *res_first = 0;
      *res_last = 0;
    }

    if (*first == left_bracket) {
      *first = 0;
      *last = 0;
    } else {
      *last = left_bracket->prev;
    }

    return 1;
  }
}


#define is_open_bracket(node) (R05_DATATAG_OPEN_BRACKET == (node)->tag)
#define is_close_bracket(node) (R05_DATATAG_CLOSE_BRACKET == (node)->tag)

int r05_svar_left(
  struct r05_node **svar, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (is_open_bracket(*first)) {
    return 0;
  } else {
    *svar = *first;
    r05_move_left(first, last);
    return 1;
  }
}


int r05_svar_right(
  struct r05_node **svar, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (is_close_bracket(*last)) {
    return 0;
  } else {
    *svar = *last;
    r05_move_right(first, last);
    return 1;
  }
}


int r05_tvar_left(
  struct r05_node **tvar, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (is_open_bracket(*first)) {
    struct r05_node *right_bracket = (*first)->info.link;

    *tvar = *first;
    *first = right_bracket;
    r05_move_left(first, last);
    return 1;
  } else {
    *tvar = *first;
    r05_move_left(first, last);
    return 1;
  }
}


int r05_tvar_right(
  struct r05_node **tvar, struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  if (r05_empty_seq(*first, *last)) {
    return 0;
  } else if (is_close_bracket(*last)) {
    struct r05_node *right_bracket = *last;
    struct r05_node *left_bracket = right_bracket->info.link;

    *tvar = left_bracket;
    *last = left_bracket;
    r05_move_right(first, last);
    return 1;
  } else {
    *tvar = *last;
    r05_move_right(first, last);
    return 1;
  }
}


static int equal_nodes(struct r05_node *node1, struct r05_node *node2) {
  if (node1->tag != node2->tag) {
    return 0;
  } else {
    switch (node1->tag) {
      case R05_DATATAG_CHAR:
        return (node1->info.char_ == node2->info.char_);

      case R05_DATATAG_NUMBER:
        return (node1->info.number == node2->info.number);

      case R05_DATATAG_FUNCTION:
        return (node1->info.function.ptr == node2->info.function.ptr);

      /*
        Сведения о связях между скобками нужны для других целей, здесь
        же нам важны только их одновременные появления.
      */
      case R05_DATATAG_OPEN_BRACKET:
      case R05_DATATAG_CLOSE_BRACKET:
        return 1;

      case R05_DATATAG_FILE:
        return (node1->info.file == node2->info.file);

      /*
        Данная функция предназначена только для использования функциями рас-
        познавания образца. Поэтому других узлов мы тут не ожидаем.
      */
      default:
        r05_switch_default_violation(node1->tag);
        return 0;       /* suppress warning */
    }
  }
}


static void add_match_repeated_tvar_time(clock_t duration);

static int equal_expressions(
  struct r05_node *first1, struct r05_node *last1,
  struct r05_node *first2, struct r05_node *last2
) {
  assert((first1 == 0) == (last1 == 0));
  assert((first2 == 0) == (last2 == 0));

  clock_t start_match = clock();

  while (
    // Порядок условий важен
    ! r05_empty_seq(first1, last1) && ! r05_empty_seq(first2, last2)
      && equal_nodes(first1, first2)
  ) {
    r05_move_left(&first1, &last1);
    r05_move_left(&first2, &last2);
  }

  /*
    Здесь r05_empty_seq(first1, last1) || r05_empty_seq(first2, last2)
      || !equal_nodes(first1, first2)
  */

  add_match_repeated_tvar_time(clock() - start_match);

  // Успешное завершение — если мы достигли конца в обоих выражениях
  if (r05_empty_seq(first1, last1) && r05_empty_seq(first2, last2)) {
    return 1;
  } else {
    // Любое другое завершение цикла свидетельствует о несовпадении
    return 0;
  }
}


int r05_repeated_stvar_left(
  struct r05_node **stvar, struct r05_node *stvar_sample,
  struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  struct r05_node *left_term = 0;
  struct r05_node *copy_last = *last;

  if (! is_open_bracket(stvar_sample) && r05_svar_left(stvar, first, last)) {
    return equal_nodes(*stvar, stvar_sample);
  } else if (r05_tvar_left(&left_term, first, last)) {
    struct r05_node *left_term_e;
    struct r05_node *stvar_sample_e;

    if (r05_empty_seq(*first, *last)) {
      left_term_e = copy_last;
    } else {
      left_term_e = (*first)->prev;
    }

    if (is_open_bracket(stvar_sample)) {
      stvar_sample_e = stvar_sample->info.link;
    } else {
      stvar_sample_e = stvar_sample;
    }

    int equal = equal_expressions(
      left_term, left_term_e,
      stvar_sample, stvar_sample_e
    );

    if (equal) {
      *stvar = left_term;

      return 1;
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}

int r05_repeated_stvar_right(
  struct r05_node **stvar, struct r05_node *stvar_sample,
  struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  struct r05_node *right_term = 0;
  struct r05_node *old_last = *last;

  if (! is_open_bracket(stvar_sample) && r05_svar_right(stvar, first, last)) {
    return equal_nodes(*stvar, stvar_sample);
  } else if (r05_tvar_right(&right_term, first, last)) {
    struct r05_node *right_term_e = old_last;
    struct r05_node *stvar_sample_e;

    if (is_open_bracket(stvar_sample)) {
      stvar_sample_e = stvar_sample->info.link;
    } else {
      stvar_sample_e = stvar_sample;
    }

    int equal = equal_expressions(
      right_term, right_term_e,
      stvar_sample, stvar_sample_e
    );

    if (equal) {
      *stvar = right_term;

      return 1;
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}


static void add_match_repeated_evar_time(clock_t duration);

int r05_repeated_evar_left(
  struct r05_node **evar_b, struct r05_node **evar_e,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample,
  struct r05_node **first, struct r05_node **last
) {
  clock_t start_match = clock();
  struct r05_node *current = *first;
  struct r05_node *cur_sample = evar_b_sample;
  struct r05_node *copy_last = *last;

  while (
    // порядок условий важен
    !r05_empty_seq(current, copy_last)
      && !r05_empty_seq(cur_sample, evar_e_sample)
      && equal_nodes(current, cur_sample)
  ) {
    r05_move_left(&cur_sample, &evar_e_sample);
    r05_move_left(&current, &copy_last);
  }

  add_match_repeated_evar_time(clock() - start_match);

  /*
    Здесь r05_empty_seq(current, copy_last)
      || r05_empty_seq(cur_sample, evar_e_sample
      || ! equal_nodes(current, cur_sample)
  */
  if (r05_empty_seq(cur_sample, evar_e_sample)) {
    // Это нормальное завершение цикла — вся образцовая переменная проверена

    if (r05_empty_seq(current, copy_last)) {
      *evar_b = *first;
      *evar_e = *last;

      *first = 0;
      *last = 0;
    } else if (current != *first) {
      *evar_b = *first;
      *evar_e = current->prev;

      *first = current;
    } else {
      *evar_b = 0;
      *evar_e = 0;
    }

    return 1;
  } else {
    return 0;
  }
}


int r05_repeated_evar_right(
  struct r05_node **evar_b, struct r05_node **evar_e,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample,
  struct r05_node **first, struct r05_node **last
) {
  clock_t start_match = clock();
  struct r05_node *current = *last;
  struct r05_node *cur_sample = evar_e_sample;
  struct r05_node *copy_first = *first;

  while (
    // порядок перечисления условий важен
    !r05_empty_seq(copy_first, current)
      && !r05_empty_seq(evar_b_sample, cur_sample)
      && equal_nodes(current, cur_sample)
  ) {
    r05_move_right(&copy_first, &current);
    r05_move_right(&evar_b_sample, &cur_sample);
  }

  add_match_repeated_evar_time(clock() - start_match);

  /*
    Здесь r05_empty_seq(copy_first, current)
      || r05_empty_seq(evar_b_sample, cur_sample)
      || ! equal_nodes(current, cur_sample)
  */

  if (r05_empty_seq(evar_b_sample, cur_sample)) {
    // Это нормальное завершение цикла: вся переменная-образец просмотрена

    if (r05_empty_seq(copy_first, current)) {
      *evar_b = *first;
      *evar_e = *last;

      *first = 0;
      *last = 0;
    } else if (current != *last) {
      *evar_b = current->next;
      *evar_e = *last;

      *last = current;
    } else {
      *evar_b = 0;
      *evar_e = 0;
    }

    return 1;
  } else {
    return 0;
  }
}


int r05_open_evar_advance(
  struct r05_node **evar_b, struct r05_node **evar_e,
  struct r05_node **first, struct r05_node **last
) {
  assert((*first == 0) == (*last == 0));

  struct r05_node *prev_first = 0;

  if (r05_tvar_left(&prev_first, first, last)) {
    if (! *evar_b) {
      *evar_b = prev_first;
    }

    if (is_open_bracket(prev_first)) {
      *evar_e = prev_first->info.link;
    } else {
      *evar_e = prev_first;
    }

    return true;
  } else {
    return false;
  }
}


size_t r05_read_chars(
  char buffer[], size_t buflen,
  struct r05_node **first, struct r05_node **last
) {
  size_t read = 0;
  while (
    read != buflen && ! r05_empty_seq(*first, *last)
      && (*first)->tag == R05_DATATAG_CHAR
  ) {
    buffer[read] = (*first)->info.char_;
    ++read;
    r05_move_left(first, last);
  }
  return read;
}


/*==============================================================================
   Операции распределителя памяти
==============================================================================*/

namespace refalrts{

namespace allocator {

void reset_allocator();
bool alloc_node(struct r05_node *&node);
struct r05_node *free_ptr();
void splice_to_freelist(struct r05_node *begin, struct r05_node *end);
void splice_from_freelist(struct r05_node *pos);

} // namespace allocator

} // namespace refalrts

//------------------------------------------------------------------------------

// Средства профилирования

namespace refalrts {

namespace profiler {

extern void start_building_result();

} // namespace profiler

} // namespace refalrts

//------------------------------------------------------------------------------

// Операции построения результата

void refalrts::reset_allocator() {
  profiler::start_building_result();
  allocator::reset_allocator();
}

namespace {

bool copy_node(struct r05_node *&res, struct r05_node *sample) {
  switch (sample->tag) {
    case R05_DATATAG_CHAR:
      return refalrts::alloc_char(res, sample->info.char_);

    case R05_DATATAG_NUMBER:
      return refalrts::alloc_number(res, sample->info.number);

    case R05_DATATAG_FUNCTION:
      return refalrts::alloc_name(
        res, sample->info.function.ptr, sample->info.function.name
      );

    case R05_DATATAG_OPEN_BRACKET:
      return refalrts::alloc_open_bracket(res);

    case R05_DATATAG_CLOSE_BRACKET:
      return refalrts::alloc_close_bracket(res);

    case R05_DATATAG_FILE: {
      bool allocated = refalrts::allocator::alloc_node(res);
      if (allocated) {
        res->tag = R05_DATATAG_FILE;
        res->info.file = sample->info.file;
        return true;
      } else {
        return false;
      }
    }

    /*
      Копируем только объектное выражение -- никаких вызовов функций
      быть не должно.
    */
    default:
      r05_switch_default_violation(sample->tag);
      return false;     /* suppress warning */
  }
}

} // unnamed namespace


namespace refalrts {

namespace vm {

void make_dump(struct r05_node *begin, struct r05_node *end);

} // namespace vm

namespace profiler {

void add_copy_tevar_time(clock_t duration);

} // namespace profiler

} // namespace refalrts

namespace {

bool copy_nonempty_evar(
  struct r05_node *&evar_res_b, struct r05_node *&evar_res_e,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample
) {
  clock_t start_copy_time = clock();

  struct r05_node *res = 0;
  struct r05_node *bracket_stack = 0;

  struct r05_node *prev_res_begin = refalrts::allocator::free_ptr()->prev;

  while (! r05_empty_seq(evar_b_sample, evar_e_sample)) {
    if (! copy_node(res, evar_b_sample)) {
      return false;
    }

    if (is_open_bracket(res)) {
      res->info.link = bracket_stack;
      bracket_stack = res;
    } else if (is_close_bracket(res)) {
      assert(bracket_stack != 0);

      struct r05_node *open_cobracket = bracket_stack;
      bracket_stack = bracket_stack->info.link;
      refalrts::link_brackets(open_cobracket, res);
    }

    r05_move_left(&evar_b_sample, &evar_e_sample);
  }

  assert(bracket_stack == 0);

  evar_res_b = prev_res_begin->next;
  evar_res_e = res;

  refalrts::profiler::add_copy_tevar_time(clock() - start_copy_time);

  return true;
}

} // unnamed namespace

bool refalrts::copy_evar(
  struct r05_node *&evar_res_b, struct r05_node *&evar_res_e,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample
) {
  if (r05_empty_seq(evar_b_sample, evar_e_sample)) {
    evar_res_b = 0;
    evar_res_e = 0;
    return true;
  } else {
    return copy_nonempty_evar(
      evar_res_b, evar_res_e, evar_b_sample, evar_e_sample
    );
  }
}

bool refalrts::copy_stvar(
  struct r05_node *&stvar_res, struct r05_node *stvar_sample
) {
  if (is_open_bracket(stvar_sample)) {
    struct r05_node *end_of_sample = stvar_sample->info.link;
    struct r05_node *end_of_res;
    return copy_evar(
      stvar_res, end_of_res, stvar_sample, end_of_sample
    );
  } else {
    return copy_node(stvar_res, stvar_sample);
  }
}

bool refalrts::alloc_copy_evar(
  struct r05_node *&res,
  struct r05_node *evar_b_sample, struct r05_node *evar_e_sample
) {
  if (r05_empty_seq(evar_b_sample, evar_e_sample)) {
    res = 0;
    return true;
  } else {
    struct r05_node *res_e = 0;
    return copy_nonempty_evar(
      res, res_e, evar_b_sample, evar_e_sample
    );
  }
}

bool refalrts::alloc_copy_svar_(
  struct r05_node *&svar_res, struct r05_node *svar_sample
) {
  return copy_node(svar_res, svar_sample);
}


bool refalrts::alloc_char(struct r05_node *&res, char ch) {
  if (allocator::alloc_node(res)) {
    res->tag = R05_DATATAG_CHAR;
    res->info.char_ = ch;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_number(
  struct r05_node *&res, r05_number num
) {
  if (allocator::alloc_node(res)) {
    res->tag = R05_DATATAG_NUMBER;
    res->info.number = num;
    return true;
  } else {
    return false;
  }
}

const char *unknown = "@unknown";

bool refalrts::alloc_name(
  struct r05_node *&res, r05_function_ptr fn, const char *name
) {
  if (allocator::alloc_node(res)) {
    res->tag = R05_DATATAG_FUNCTION;
    res->info.function.ptr = fn;
    if (name != 0) {
      res->info.function.name = name;
    } else {
      res->info.function.name = unknown;
    }
    return true;
  } else {
    return false;
  }
}

namespace {

bool alloc_some_bracket(struct r05_node *&res, r05_datatag tag) {
  if (refalrts::allocator::alloc_node(res)) {
    res->tag = tag;
    return true;
  } else {
    return false;
  }
}

void link_adjacent(struct r05_node *left, struct r05_node *right) {
  if (left != 0) {
    left->next = right;
  }

  if (right != 0) {
    right->prev = left;
  }
}

} // unnamed namespace

bool refalrts::alloc_open_bracket(struct r05_node *&res) {
  return alloc_some_bracket(res, R05_DATATAG_OPEN_BRACKET);
}

bool refalrts::alloc_close_bracket(struct r05_node *&res) {
  return alloc_some_bracket(res, R05_DATATAG_CLOSE_BRACKET);
}

bool refalrts::alloc_open_call(struct r05_node *&res) {
  return alloc_some_bracket(res, R05_DATATAG_OPEN_CALL);
}

bool refalrts::alloc_close_call(struct r05_node *&res) {
  return alloc_some_bracket(res, R05_DATATAG_CLOSE_CALL);
}

bool refalrts::alloc_chars(
  struct r05_node *&res_b, struct r05_node *&res_e,
  const char buffer[], unsigned buflen
) {
  if (buflen == 0) {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    struct r05_node *before_begin_seq = refalrts::allocator::free_ptr()->prev;
    struct r05_node *end_seq = 0;

    for (unsigned i = 0; i < buflen; ++ i) {
      if (! alloc_char(end_seq, buffer[i])) {
        return false;
      }
    }

    res_b = before_begin_seq->next;
    res_e = end_seq;

    return true;
  }
}

bool refalrts::alloc_string(
  struct r05_node *&res_b, struct r05_node *&res_e, const char *string
) {
  if (*string == '\0') {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    struct r05_node *before_begin_seq = refalrts::allocator::free_ptr()->prev;
    struct r05_node *end_seq = 0;

    for (const char *p = string; *p != '\0'; ++ p) {
      if (! alloc_char(end_seq, *p)) {
        return false;
      }
    }

    res_b = before_begin_seq->next;
    res_e = end_seq;

    return true;
  }
}

namespace refalrts {

namespace vm {

void push_stack(struct r05_node *call_bracket);

} // namespace vm

} // namespace refalrts

void refalrts::push_stack(struct r05_node *call_bracket) {
  vm::push_stack(call_bracket);
}

void refalrts::link_brackets(struct r05_node *left, struct r05_node *right) {
  left->info.link = right;
  right->info.link = left;
}

namespace {

struct r05_node *list_splice(
  struct r05_node *res, struct r05_node *begin, struct r05_node *end
) {

  VALID_LINKED(res);
  VALID_LINKED(res->prev);
  VALID_LINKED(begin);
  VALID_LINKED(begin->prev);
  VALID_LINKED(end);
  VALID_LINKED(end->prev);

  if ((res == begin) || r05_empty_seq(begin, end)) {

    // Цель достигнута сама по себе
    return res;
  } else {
    struct r05_node *prev_res = res->prev;
    struct r05_node *prev_begin = begin->prev;
    struct r05_node *next_end = end->next;

    link_adjacent(prev_res, begin);
    link_adjacent(end, res);
    link_adjacent(prev_begin, next_end);
  }

  VALID_LINKED(res);
  VALID_LINKED(res->prev);
  VALID_LINKED(begin);
  VALID_LINKED(begin->prev);
  VALID_LINKED(end);
  VALID_LINKED(end->next);

  return begin;
}

} // unnamed namespace

struct r05_node *refalrts::splice_elem(
  struct r05_node *res, struct r05_node *elem
) {
  return list_splice(res, elem, elem);
}

struct r05_node *refalrts::splice_stvar(
  struct r05_node *res, struct r05_node *var
) {
  struct r05_node *var_end;
  if (is_open_bracket(var)) {
    var_end = var->info.link;
  } else {
    var_end = var;
  }

  return list_splice(res, var, var_end);
}

struct r05_node *refalrts::splice_evar(
  struct r05_node *res, struct r05_node *begin, struct r05_node *end
) {
  return list_splice(res, begin, end);
}

void refalrts::splice_to_freelist(struct r05_node *begin, struct r05_node *end) {
  allocator::splice_to_freelist(begin, end);
}

void refalrts::splice_from_freelist(struct r05_node *pos) {
  allocator::splice_from_freelist(pos);
}

//------------------------------------------------------------------------------

// Средства профилирования

namespace refalrts {

namespace profiler {

extern void start_generated_function();
extern void start_e_loop();
extern void stop_e_loop();

} // namespace profiler

} // namespace refalrts

void refalrts::this_is_generated_function() {
  refalrts::profiler::start_generated_function();
}

void refalrts::start_sentence() {
  refalrts::profiler::stop_e_loop();
}

void refalrts::start_e_loop() {
  refalrts::profiler::start_e_loop();
}

//------------------------------------------------------------------------------

// Прочие операции

namespace refalrts {

namespace vm {

extern int g_ret_code;
extern void print_seq(FILE *output, struct r05_node *begin, struct r05_node *end);

} // namespace vm

} // namespace refalrts

void refalrts::set_return_code(int code) {
  refalrts::vm::g_ret_code = code;
}

void refalrts::debug_print_expr(
  void *file, struct r05_node *first, struct r05_node *last
) {
  refalrts::vm::print_seq(static_cast<FILE*>(file), first, last);
}

//==============================================================================
// Распределитель памяти
//==============================================================================

namespace refalrts {

namespace allocator {

bool create_nodes();

void free_memory();

extern struct r05_node g_last_marker;

struct r05_node g_first_marker =
  { 0, & g_last_marker, R05_DATATAG_ILLEGAL, { '\0' } };
struct r05_node g_last_marker =
  { & g_first_marker, 0, R05_DATATAG_ILLEGAL, { '\0' } };

struct r05_node *g_free_ptr = & g_last_marker;

namespace pool {

enum { cChunkSize = 1000 };
typedef struct Chunk {
  Chunk *next;
  struct r05_node elems[cChunkSize];
} Chunk;

typedef Chunk *ChunkPtr;

struct r05_node *alloc_node();
void free();
bool grow();

ChunkPtr g_pool = 0;
unsigned g_avail = 0;
struct r05_node *g_pnext_node = 0;

} // namespace pool

unsigned g_memory_use = 0;

} // namespace allocator

} // namespace refalrts

inline void refalrts::allocator::reset_allocator() {
  g_free_ptr = g_first_marker.next;
}

bool refalrts::allocator::alloc_node(struct r05_node *&node) {
  if ((g_free_ptr == & g_last_marker) && ! create_nodes()) {
    return false;
  } else {
    node = g_free_ptr;
    g_free_ptr = g_free_ptr->next;
    node->tag = R05_DATATAG_ILLEGAL;
    return true;
  }
}

struct r05_node *refalrts::allocator::free_ptr() {
  return g_free_ptr;
}

void refalrts::allocator::splice_to_freelist(
  struct r05_node *begin, struct r05_node *end
) {
  reset_allocator();
  g_free_ptr = list_splice(g_free_ptr, begin, end);
}

void refalrts::allocator::splice_from_freelist(struct r05_node *pos) {
  if (g_free_ptr != g_first_marker.next) {
    list_splice(pos, g_first_marker.next, g_free_ptr->prev);
  }
}

bool refalrts::allocator::create_nodes() {
  struct r05_node *new_node = refalrts::allocator::pool::alloc_node();

#ifdef MEMORY_LIMIT

  if (g_memory_use >= MEMORY_LIMIT) {
    return false;
  }

#endif //ifdef MEMORY_LIMIT

  if (new_node == 0) {
    return false;
  } else {
    struct r05_node *before_free_ptr = g_free_ptr->prev;
    before_free_ptr->next = new_node;
    new_node->prev = before_free_ptr;

    g_free_ptr->prev = new_node;
    new_node->next = g_free_ptr;

    g_free_ptr = new_node;
    g_free_ptr->tag = R05_DATATAG_ILLEGAL;
    ++ g_memory_use;

    return true;
  }
}

void refalrts::allocator::free_memory() {
  refalrts::allocator::pool::free();
#ifndef DONT_PRINT_STATISTICS
  fprintf(
    stderr,
    "Memory used %d nodes, %d * %lu = %lu bytes\n",
    g_memory_use,
    g_memory_use,
    static_cast<unsigned long>(sizeof(struct r05_node)),
    static_cast<unsigned long>(g_memory_use * sizeof(struct r05_node))
  );
#endif // DONT_PRINT_STATISTICS
}

struct r05_node *refalrts::allocator::pool::alloc_node() {
  if ((g_avail != 0) || grow()) {
    -- g_avail;
    return g_pnext_node++;
  } else {
    return 0;
  }
}

bool refalrts::allocator::pool::grow() {
  ChunkPtr p = static_cast<ChunkPtr>(malloc(sizeof(Chunk)));
  if (p != 0) {
    p->next = g_pool;
    g_pool = p;
    g_avail = cChunkSize;
    g_pnext_node = p->elems;
    return true;
  } else {
    return false;
  }
}

void refalrts::allocator::pool::free() {
  while (g_pool != 0) {
    ChunkPtr p = g_pool;
    g_pool = g_pool->next;
    ::free(p);
  }
}

//==============================================================================
// Упрощённый профилировщик
//==============================================================================

namespace refalrts {

namespace profiler {

clock_t g_start_program_time;
clock_t g_start_pattern_match_time;
clock_t g_total_pattern_match_time;
clock_t g_start_building_result_time;
clock_t g_total_building_result_time;
clock_t g_total_copy_tevar_time;
clock_t g_total_match_repeated_tvar_time;
clock_t g_total_match_repeated_evar_time;
clock_t g_start_e_loop;
clock_t g_total_e_loop;
clock_t g_total_match_repeated_tvar_time_outside_e;
clock_t g_total_match_repeated_evar_time_outside_e;

bool g_in_generated;
int g_in_e_loop;

void start_profiler();
void end_profiler();
void start_generated_function();
void after_step();
void add_copy_tevar_time(clock_t duration);
void start_e_loop();
void stop_e_loop();

#ifndef DONT_PRINT_STATISTICS
struct TimeItem {
  const char *name;
  clock_t counter;
};

int reverse_compare(const void *left_void, const void *right_void);
#endif // DONT_PRINT_STATISTICS

} // namespace profiler

} // namespace refalrts

void refalrts::profiler::start_profiler() {
  g_start_program_time = clock();
  g_in_generated = false;
}

#ifndef DONT_PRINT_STATISTICS

int refalrts::profiler::reverse_compare(
  const void *left_void, const void *right_void
) {
  const TimeItem *left = static_cast<const TimeItem *>(left_void);
  const TimeItem *right = static_cast<const TimeItem *>(right_void);

  if (left->counter > right->counter) {
    return -1;
  } else if (left->counter < right->counter) {
    return +1;
  } else {
    return 0;
  }
}

#endif // DONT_PRINT_STATISTICS

void refalrts::profiler::end_profiler() {
  refalrts::profiler::after_step();
#ifndef DONT_PRINT_STATISTICS

  clock_t full_time = clock() - g_start_program_time;
  clock_t refal_time =
    g_total_pattern_match_time + g_total_building_result_time;
  clock_t eloop_time = g_total_e_loop
    - (g_total_match_repeated_tvar_time + g_total_match_repeated_evar_time);

  TimeItem items[] = {
    { "\nTotal program time", full_time },
    { "Builtin time", full_time - refal_time },
    { "(Total refal time)", refal_time },
    { "Linear pattern time", g_total_pattern_match_time },
    { "Linear result time", g_total_building_result_time },
    { "Open e-loop time (clear)", eloop_time },
    {
      "Repeated e-var match time (inside e-loops)",
      g_total_match_repeated_evar_time
    },
    {
      "Repeated e-var match time (outside e-loops)",
      g_total_match_repeated_tvar_time_outside_e
    },
    {
      "Repeated t-var match time (inside e-loops)",
      g_total_match_repeated_tvar_time
    },
    {
      "Repeated t-var match time (outside e-loops)",
      g_total_match_repeated_tvar_time_outside_e
    },
    { "t- and e-var copy time", g_total_copy_tevar_time }
  };

  enum { nItems = sizeof(items) / sizeof(items[0]) };

  qsort(items, nItems, sizeof(items[0]), reverse_compare);

  const double cfSECS_PER_CLOCK = 1.0 / CLOCKS_PER_SEC;
  unsigned long total = full_time;

  for (size_t i = 0; i < nItems; ++i) {
    unsigned long value = items[i].counter;

    if (value > 0) {
      double percent = (total != 0) ? 100.0 * value / total : 0.0;
      fprintf(
        stderr, "%s: %.3f seconds (%.1f %%).\n",
        items[i].name, value * cfSECS_PER_CLOCK, percent
      );
    }
  }

#endif // DONT_PRINT_STATISTICS
}

void refalrts::profiler::start_generated_function() {
  g_start_pattern_match_time = clock();
  g_in_generated = true;
}

void refalrts::profiler::start_building_result() {
  if (g_in_generated) {
    g_start_building_result_time = clock();
    clock_t pattern_match =
      g_start_building_result_time - g_start_pattern_match_time;
    g_total_pattern_match_time += pattern_match;

    stop_e_loop();
  }
}

void refalrts::profiler::after_step() {
  if (g_in_generated) {
    clock_t building_result = clock() - g_start_building_result_time;
    g_total_building_result_time += building_result;
  }

  assert(g_in_e_loop == 0);

  g_in_generated = false;
  g_in_e_loop = 0;
}

namespace refalrts {

namespace vm {

extern unsigned g_step_counter;

} // namespace vm

} // namespace refalrts

void refalrts::profiler::add_copy_tevar_time(clock_t duration) {
  g_total_copy_tevar_time += duration;
}

static void add_match_repeated_tvar_time(clock_t duration) {
  if (refalrts::profiler::g_in_e_loop) {
    refalrts::profiler::g_total_match_repeated_tvar_time += duration;
  } else {
    refalrts::profiler::g_total_match_repeated_tvar_time_outside_e += duration;
  }
}

static void add_match_repeated_evar_time(clock_t duration) {
  if (refalrts::profiler::g_in_e_loop) {
    refalrts::profiler::g_total_match_repeated_evar_time += duration;
  } else {
    refalrts::profiler::g_total_match_repeated_evar_time_outside_e += duration;
  }
}

void refalrts::profiler::start_e_loop() {
  if (g_in_e_loop++ == 0) {
    g_start_e_loop = clock();
  }
}

void refalrts::profiler::stop_e_loop() {
  if (g_in_e_loop > 0) {
    g_total_e_loop += (clock() - g_start_e_loop);
    g_in_e_loop = 0;
  }
}

//==============================================================================
// Виртуальная машина
//==============================================================================

extern enum r05_fnresult r05c_Go(struct r05_node *begin, struct r05_node *end);

namespace refalrts {

namespace vm {

void push_stack(struct r05_node *call_bracket);
struct r05_node *pop_stack();
bool empty_stack();

bool init_view_field();

enum r05_fnresult main_loop();
enum r05_fnresult execute_active(struct r05_node *begin, struct r05_node *end);
void make_dump(struct r05_node *begin, struct r05_node *end);
FILE* dump_stream();

void free_view_field();

struct r05_node *g_stack_ptr = 0;

extern struct r05_node g_last_marker;

struct r05_node g_first_marker =
  { 0, & g_last_marker, R05_DATATAG_ILLEGAL, { '\0' } };
struct r05_node g_last_marker =
  { & g_first_marker, 0, R05_DATATAG_ILLEGAL, { '\0' } };

struct r05_node *g_begin_view_field = & g_last_marker;

unsigned g_step_counter = 0;

int g_ret_code;

} // namespace vm

} // namespace refalrts

void refalrts::vm::push_stack(struct r05_node *call_bracket) {
  call_bracket->info.link = g_stack_ptr;
  g_stack_ptr = call_bracket;
}

struct r05_node *refalrts::vm::pop_stack() {
  struct r05_node *res = g_stack_ptr;
  g_stack_ptr = g_stack_ptr->info.link;
  return res;
}

bool refalrts::vm::empty_stack() {
  return (g_stack_ptr == 0);
}

bool refalrts::vm::init_view_field() {
  refalrts::reset_allocator();
  struct r05_node *res = g_begin_view_field;
  struct r05_node *n0 = 0;
  if (! refalrts::alloc_open_call(n0))
    return false;
  struct r05_node *n1 = 0;
  if (! refalrts::alloc_name(n1, r05c_Go, "Go"))
    return false;
  struct r05_node *n2 = 0;
  if (! refalrts::alloc_close_call(n2))
    return false;
  refalrts::push_stack(n2);
  refalrts::push_stack(n0);
  res = refalrts::splice_elem(res, n2);
  res = refalrts::splice_elem(res, n1);
  res = refalrts::splice_elem(res, n0);
  g_begin_view_field = res;

  return true;
}

enum r05_fnresult refalrts::vm::main_loop() {
  enum r05_fnresult res = R05_SUCCESS;
  while (! empty_stack()) {
    struct r05_node *active_begin = pop_stack();
    assert(! empty_stack());
    struct r05_node *active_end = pop_stack();

    res = execute_active(active_begin, active_end);
    refalrts::profiler::after_step();

    ++ g_step_counter;

    if (res != R05_SUCCESS) {
      switch (res) {
        case R05_RECOGNITION_IMPOSSIBLE:
          fprintf(stderr, "\nRECOGNITION IMPOSSIBLE\n\n");
          break;

        case R05_NO_MEMORY:
          fprintf(stderr, "\nNO MEMORY\n\n");
          break;

        case R05_EXIT:
          return res;

        default:
          fprintf(stderr, "\nUNKNOWN ERROR (res = %d)\n\n", (int) res);
          break;
      }
      make_dump(active_begin, active_end);
      return res;
    } else {
      continue;
    }
  }

  // printf("\n\nTOTAL STEPS %d\n", g_step_counter);

  return res;
}

enum r05_fnresult refalrts::vm::execute_active(
  struct r05_node *begin, struct r05_node *end
) {

#if SHOW_DEBUG

  if (g_step_counter >= (unsigned) SHOW_DEBUG) {
    make_dump(begin, end);
  }

#endif // SHOW_DEBUG

  struct r05_node *function = begin->next;
  if (R05_DATATAG_FUNCTION == function->tag) {
    return (enum r05_fnresult)(
      (function->info.function.ptr)(begin, end) & 0xFFU
    );
  } else {
    return R05_RECOGNITION_IMPOSSIBLE;
  }
}

namespace {

void print_indent(FILE *output, int level) {
  enum { cPERIOD = 4 };
  putc('\n', output);
  if (level < 0) {
    putc('!', output);
    return;
  }
  for (int i = 0; i < level; ++i) {
    // Каждые cPERIOD позиций вместо пробела ставим точку.
    bool put_marker = ((i % cPERIOD) == (cPERIOD - 1));

    const char cSpace =  ' ';
    const char cMarker = '.';

    putc((put_marker ? cMarker : cSpace), output);
  }
}

} // unnamed namespace

void refalrts::vm::print_seq(
  FILE *output, struct r05_node *begin, struct r05_node *end
) {
  enum {
    cStateView = 100,
    cStateString,
    cStateFinish
  } state = cStateView;

  int indent = 0;
  bool after_bracket = false;
  bool reset_after_bracket = true;

  while ((state != cStateFinish) && ! r05_empty_seq(begin, end)) {
    if (reset_after_bracket) {
      after_bracket = false;
      reset_after_bracket = false;
    }

    if (after_bracket) {
      reset_after_bracket = true;
    }

    switch (state) {
      case cStateView:
        switch (begin->tag) {
          case R05_DATATAG_ILLEGAL:
            if (0 == begin->prev) {
              fprintf(output, "[FIRST] ");
            } else if (0 == begin->next) {
              fprintf(output, "\n[LAST]");
              state = cStateFinish;
            } else {
              fprintf(output, "\n[NONE]");
            }
            r05_move_left(&begin, &end);
            continue;

          case R05_DATATAG_CHAR:
            state = cStateString;
            fprintf(output, "\'");
            continue;

          case R05_DATATAG_NUMBER:
            fprintf(output, "%ld ", begin->info.number);
            r05_move_left(&begin, &end);
            continue;

          case R05_DATATAG_FUNCTION:
            if (begin->info.function.name[0] != 0) {
              fprintf(output, "&%s ", begin->info.function.name);
            } else {
              fprintf(output, "&%p ", begin->info.function.ptr);
            }
            r05_move_left(&begin, &end);
            continue;

          case R05_DATATAG_OPEN_BRACKET:
            if (! after_bracket) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "(");
            r05_move_left(&begin, &end);
            continue;

          case R05_DATATAG_CLOSE_BRACKET:
            --indent;
            fprintf(output, ")");
            r05_move_left(&begin, &end);
            continue;

          case R05_DATATAG_OPEN_CALL:
            if (! after_bracket) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "<");
            r05_move_left(&begin, &end);
            continue;

          case R05_DATATAG_CLOSE_CALL:
            --indent;
            fprintf(output, ">");
            r05_move_left(&begin, &end);
            continue;

          case R05_DATATAG_FILE:
            fprintf(output, "*%p ", begin->info.file);
            r05_move_left(&begin, &end);
            continue;

          default:
            r05_switch_default_violation(begin->tag);
        }

      case cStateString:
        switch (begin->tag) {
          case R05_DATATAG_CHAR: {
            unsigned char ch = static_cast<unsigned char>(begin->info.char_);
            switch (ch) {
              case '(': case ')':
              case '<': case '>':
                fprintf(output, "\\%c", ch);
                break;

              case '\n':
                fprintf(output, "\\n");
                break;

              case '\t':
                fprintf(output, "\\t");
                break;

              case '\\':
                fprintf(output, "\\\\");
                break;

              case '\'':
                fprintf(output, "\\\'");
                break;

              default:
                if (ch < '\x20') {
                  fprintf(output, "\\x%02x", static_cast<int>(ch));
                } else {
                  fprintf(output, "%c", ch);
                }
                break;
              }
              r05_move_left(&begin, &end);
              continue;
            }

          default:
            state = cStateView;
            fprintf(output, "\' ");
            continue;
        }

      case cStateFinish:
        continue;

      default:
        r05_switch_default_violation(state);
    }
  }

  if (cStateString == state) {
    fprintf(output, "\'");
  }
}

void refalrts::vm::make_dump(struct r05_node *begin, struct r05_node *end) {
  using refalrts::vm::dump_stream;

  fprintf(dump_stream(), "\nSTEP NUMBER %u\n", g_step_counter);
  fprintf(dump_stream(), "\nERROR EXPRESSION:\n");
  print_seq(dump_stream(), begin, end);
  fprintf(dump_stream(), "\nVIEW FIELD:\n");
  print_seq(dump_stream(), & g_first_marker, & g_last_marker);

#ifdef DUMP_FREE_LIST

  fprintf(dump_stream(), "\nFREE LIST:\n");
  print_seq(
    dump_stream(),
    & refalrts::allocator::g_first_marker,
    & refalrts::allocator::g_last_marker
  );

#endif //ifdef DUMP_FREE_LIST

  fprintf(dump_stream(),"\nEnd dump\n");
  fflush(dump_stream());
}

FILE *refalrts::vm::dump_stream() {
#ifdef DUMP_FILE

  static FILE *dump_file = 0;

  if (dump_file == 0) {
    // Необходимо открыть файл.
    // Если файл не открывается, используем stderr
    dump_file = fopen(DUMP_FILE, "wt");

    if (dump_file == 0) {
      dump_file = stderr;
    }
  }

  return dump_file;

#else //ifdef DUMP_FILE

  return stderr;

#endif //ifdef DUMP_FILE
}

void refalrts::vm::free_view_field() {
  struct r05_node *begin = g_first_marker.next;
  struct r05_node *end = & g_last_marker;

  if (begin != end) {
    end = end->prev;
    refalrts::allocator::splice_to_freelist(begin, end);
  } else {
    /*
      Поле зрения пустое -- его не нужно освобождать.
    */;
  }

#ifndef DONT_PRINT_STATISTICS
  fprintf(stderr, "Step count %d\n", g_step_counter);
#endif // DONT_PRINT_STATISTICS
}

void r05_switch_default_violation_impl(
  const char *expr, long value, const char *file, int line
) {
  fprintf(stderr, "%s:%d:SWITCH DEFAULT VIOLATION\n", file, line);
  fprintf(stderr, "    expression %s -> %ld is not handled\n", expr, value);
  abort();
}


//==============================================================================

// Используются в Library.cpp

char **g_argv = 0;
int g_argc = 0;

int main(int argc, char **argv) {
  g_argc = argc;
  g_argv = argv;

  enum r05_fnresult res;
  try {
    refalrts::vm::init_view_field();
    refalrts::profiler::start_profiler();
    res = refalrts::vm::main_loop();
    fflush(stderr);
    fflush(stdout);
  } catch (std::exception& e) {
    fprintf(stderr, "INTERNAL ERROR: std::exception %s\n", e.what());
    return EXIT_CODE_STD_EXCEPTION;
  } catch (...) {
    fprintf(stderr, "INTERNAL ERROR: unknown exception\n");
    return EXIT_CODE_UNKNOWN_EXCEPTION;
  }

  refalrts::profiler::end_profiler();
  refalrts::vm::free_view_field();
  refalrts::allocator::free_memory();

  fflush(stdout);

  switch (res) {
    case R05_SUCCESS:
      return 0;

    case R05_RECOGNITION_IMPOSSIBLE:
      return EXIT_CODE_RECOGNITION_IMPOSSIBLE;

    case R05_NO_MEMORY:
      return EXIT_CODE_NO_MEMORY;

    case R05_EXIT:
      return refalrts::vm::g_ret_code;

    default:
      r05_switch_default_violation(res);
  }
}
