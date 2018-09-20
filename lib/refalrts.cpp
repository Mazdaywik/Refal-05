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

void valid_linked_aux(const char *text, refalrts::Iter i) {
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

//==============================================================================
// Примитивные операции
//==============================================================================

// Операции распознавания

void refalrts::use(refalrts::Iter&) {
  /* Ничего не делаем. Эта функция добавляется, чтобы подавить предупреждение
  компилятора о том, что переменная не используется */;
}

void refalrts::use_counter(unsigned&) {
  /* Ничего не делаем. Эта функция добавляется, чтобы подавить предупреждение
  компилятора о том, что переменная не используется */;
}

namespace {

refalrts::Iter next(refalrts::Iter current) {
  return current->next;
}

refalrts::Iter prev(refalrts::Iter current) {
  return current->prev;
}

bool is_open_bracket(refalrts::Iter node) {
  return (refalrts::cDataOpenBracket == node->tag);
}

bool is_close_bracket(refalrts::Iter node) {
  return (refalrts::cDataCloseBracket == node->tag);
}

} // unnamed namespace

void refalrts::move_left(
  refalrts::Iter& first, refalrts::Iter& last
) {
  //assert((first == 0) == (last == 0));
  if (first == 0) assert (last == 0);
  if (first != 0) assert (last != 0);

  if (first == last) {
    first = 0;
    last = 0;
  } else {
    first = next(first);
  }
}

void refalrts::move_right(
  refalrts::Iter& first, refalrts::Iter& last
) {
  //assert((first == 0) == (last == 0));
  if (first == 0) assert (last == 0);
  if (first != 0) assert (last != 0);

  if (first == last) {
    first = 0;
    last = 0;
  } else {
    last = prev(last);
  }
}

bool refalrts::empty_seq(refalrts::Iter first, refalrts::Iter last) {
  //assert((first == 0) == (last == 0));
  if (first == 0) assert (last == 0);
  if (first != 0) assert (last != 0);

  return (first == 0) && (last == 0);
}

bool refalrts::function_left(
  refalrts::RefalFunctionPtr fn, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (first->tag != cDataFunction) {
    return false;
  } else if (first->function_info.ptr != fn) {
    return false;
  } else {
    move_left(first, last);
    return true;
  }
}

bool refalrts::function_right(
  refalrts::RefalFunctionPtr fn, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (cDataFunction != last->tag) {
    return false;
  } else if (last->function_info.ptr != fn) {
    return false;
  } else {
    move_right(first, last);
    return true;
  }
}

bool refalrts::char_left(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (cDataChar != first->tag) {
    return false;
  } else if (first->char_info != ch) {
    return false;
  } else {
    move_left(first, last);
    return true;
  }
}

bool refalrts::char_right(
  char ch, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (cDataChar != last->tag) {
    return false;
  } else if (last->char_info != ch) {
    return false;
  } else {
    move_right(first, last);
    return true;
  }
}


bool refalrts::number_left(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (cDataNumber != first->tag) {
    return false;
  } else if (first->number_info != num) {
    return false;
  } else {
    move_left(first, last);
    return true;
  }
}

bool refalrts::number_right(
  refalrts::RefalNumber num, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (cDataNumber != last->tag) {
    return false;
  } else if (last->number_info != num) {
    return false;
  } else {
    move_right(first, last);
    return true;
  }
}

bool refalrts::brackets_left(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (cDataOpenBracket != first->tag) {
    return false;
  } else {
    refalrts::Iter left_bracket = first;
    refalrts::Iter right_bracket = left_bracket->link_info;

    if (next(left_bracket) != right_bracket) {
      res_first = next(left_bracket);
      res_last = prev(right_bracket);
    } else {
      res_first = 0;
      res_last = 0;
    }

    if (right_bracket == last) {
      first = 0;
      last = 0;
    } else {
      first = next(right_bracket);
    }

    return true;
  }
}

bool refalrts::brackets_right(
  refalrts::Iter& res_first, refalrts::Iter& res_last,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (cDataCloseBracket != last->tag) {
    return false;
  } else {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;

    if (next(left_bracket) != right_bracket) {
      res_first = next(left_bracket);
      res_last = prev(right_bracket);
    } else {
      res_first = 0;
      res_last = 0;
    }

    if (first == left_bracket) {
      first = 0;
      last = 0;
    } else {
      last = prev(left_bracket);
    }

    return true;
  }
}

bool refalrts::svar_left(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (is_open_bracket(first)) {
    return false;
  } else {
    svar = first;
    move_left(first, last);
    return true;
  }
}

bool refalrts::svar_right(
  refalrts::Iter& svar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (is_close_bracket(last)) {
    return false;
  } else {
    svar = last;
    move_right(first, last);
    return true;
  }
}

bool refalrts::tvar_left(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (is_open_bracket(first)) {
    refalrts::Iter right_bracket = first->link_info;

    tvar = first;
    first = right_bracket;
    move_left(first, last);
    return true;
  } else {
    tvar = first;
    move_left(first, last);
    return true;
  }
}

bool refalrts::tvar_right(
  refalrts::Iter& tvar, refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  if (empty_seq(first, last)) {
    return false;
  } else if (is_close_bracket(last)) {
    refalrts::Iter right_bracket = last;
    refalrts::Iter left_bracket = right_bracket->link_info;

    tvar = left_bracket;
    last = left_bracket;
    move_right(first, last);
    return true;
  } else {
    tvar = last;
    move_right(first, last);
    return true;
  }
}

namespace {

bool equal_nodes(
  refalrts::Iter node1, refalrts::Iter node2
) {
  if (node1->tag != node2->tag) {
    return false;
  } else {
    switch (node1->tag) {
      case refalrts::cDataChar:
        return (node1->char_info == node2->char_info);
        // break;

      case refalrts::cDataNumber:
        return (node1->number_info == node2->number_info);
        // break;

      case refalrts::cDataFunction:
        return (node1->function_info.ptr == node2->function_info.ptr);
        // break;

      /*
        Сведения о связях между скобками нужны для других целей, здесь
        же нам важны только их одновременные появления.
      */
      case refalrts::cDataOpenBracket:
      case refalrts::cDataCloseBracket:
        return true;
        // break;

      case refalrts::cDataFile:
        return (node1->file_info == node2->file_info);
        // break;

      /*
        Данная функция предназначена только для использования функциями рас-
        познавания образца. Поэтому других узлов мы тут не ожидаем.
      */
      default:
        r05_switch_default_violation(node1->tag);
        return false;   /* suppress warning */
    }
  }
}

} // unnamed namespace

namespace refalrts {

namespace profiler {

void add_match_repeated_tvar_time(clock_t duration);
void add_match_repeated_evar_time(clock_t duration);

}

}

namespace {

bool equal_expressions(
  refalrts::Iter first1, refalrts::Iter last1,
  refalrts::Iter first2, refalrts::Iter last2
) {
  assert((first1 == 0) == (last1 == 0));
  assert((first2 == 0) == (last2 == 0));

  clock_t start_match = clock();

  for (
    /* Пользуемся аргументами функции, инициализация не нужна */;
    // Порядок условий важен
    ! refalrts::empty_seq(first1, last1)
      && ! refalrts::empty_seq(first2, last2)
      && equal_nodes(first1, first2);
    refalrts::move_left(first1, last1), refalrts::move_left(first2, last2)
  ) {
    continue;
  }

  /*
    Здесь empty_seq(first1, last1) || empty_seq(first2, last2)
      || !equal_nodes(first1, first2)
  */

  refalrts::profiler::add_match_repeated_tvar_time(clock() - start_match);

  // Успешное завершение -- если мы достигли конца в обоих выражениях
  if (
    refalrts::empty_seq(first1, last1) && refalrts::empty_seq(first2, last2)
  ) {
    return true;
  } else {
    // Любое другое завершение цикла свидетельствует о несовпадении
    return false;
  }
}

} // unnamed namespace

bool refalrts::repeated_stvar_left(
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  refalrts::Iter left_term = 0;
  refalrts::Iter copy_last = last;

  if (! is_open_bracket(stvar_sample) && svar_left(stvar, first, last)) {
    return equal_nodes(stvar, stvar_sample);
  } else if (tvar_left(left_term, first, last)) {
    refalrts::Iter left_term_e;
    refalrts::Iter stvar_sample_e;

    if (empty_seq(first, last)) {
      left_term_e = copy_last;
    } else {
      left_term_e = prev(first);
    }

    if (is_open_bracket(stvar_sample)) {
      stvar_sample_e = stvar_sample->link_info;
    } else {
      stvar_sample_e = stvar_sample;
    }

    bool equal = equal_expressions(
      left_term, left_term_e,
      stvar_sample, stvar_sample_e
    );

    if (equal) {
      stvar = left_term;

      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

bool refalrts::repeated_stvar_right(
  refalrts::Iter& stvar, refalrts::Iter stvar_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  assert((first == 0) == (last == 0));

  refalrts::Iter right_term = 0;
  refalrts::Iter old_last = last;

  if (! is_open_bracket(stvar_sample) && svar_right(stvar, first, last)) {
    return equal_nodes(stvar, stvar_sample);
  } else if (tvar_right(right_term, first, last)) {
    refalrts::Iter right_term_e = old_last;
    refalrts::Iter stvar_sample_e;

    if (is_open_bracket(stvar_sample)) {
      stvar_sample_e = stvar_sample->link_info;
    } else {
      stvar_sample_e = stvar_sample;
    }

    bool equal = equal_expressions(
      right_term, right_term_e,
      stvar_sample, stvar_sample_e
    );

    if (equal) {
      stvar = right_term;

      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

bool refalrts::repeated_evar_left(
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  clock_t start_match = clock();
  refalrts::Iter current = first;
  refalrts::Iter cur_sample = evar_b_sample;
  refalrts::Iter copy_last = last;

  for (
    /* инициализация выше */;
    // порядок условий важен
    !empty_seq(current, copy_last)
      && !empty_seq(cur_sample, evar_e_sample)
      && equal_nodes(current, cur_sample);
    move_left(cur_sample, evar_e_sample), move_left(current, copy_last)
  ) {
    continue;
  }

  refalrts::profiler::add_match_repeated_evar_time(clock() - start_match);

  /*
    Здесь empty_seq(current, copy_last)
      || empty_seq(cur_sample, evar_e_sample
      || ! equal_nodes(current, cur_sample)
  */
  if (empty_seq(cur_sample, evar_e_sample)) {
    // Это нормальное завершение цикла -- вся образцовая переменная проверена

    if (empty_seq(current, copy_last)) {
      evar_b = first;
      evar_e = last;

      first = 0;
      last = 0;
    } else if (current != first) {
      evar_b = first;
      evar_e = prev(current);

      first = current;
    } else {
      evar_b = 0;
      evar_e = 0;
    }

    return true;
  } else {
    return false;
  }
}

bool refalrts::repeated_evar_right(
  refalrts::Iter& evar_b, refalrts::Iter& evar_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample,
  refalrts::Iter& first, refalrts::Iter& last
) {
  clock_t start_match = clock();
  refalrts::Iter current = last;
  refalrts::Iter cur_sample = evar_e_sample;
  refalrts::Iter copy_first = first;

  for (
    /* инициализация выше */;
    // порядок перечисления условий важен
    !empty_seq(copy_first, current)
      && !empty_seq(evar_b_sample, cur_sample)
      && equal_nodes(current, cur_sample);
    move_right(copy_first, current), move_right(evar_b_sample, cur_sample)
  ) {
    continue;
  }

  refalrts::profiler::add_match_repeated_evar_time(clock() - start_match);

  /*
    Здесь empty_seq(copy_first, current)
      || empty_seq(evar_b_sample, cur_sample)
      || ! equal_nodes(current, cur_sample)
  */

  if (empty_seq(evar_b_sample, cur_sample)) {
    // Это нормальное завершение цикла: вся переменная-образец просмотрена

    if (empty_seq(copy_first, current)) {
      evar_b = first;
      evar_e = last;

      first = 0;
      last = 0;
    } else if (current != last) {
      evar_b = next(current);
      evar_e = last;

      last = current;
    } else {
      evar_b = 0;
      evar_e = 0;
    }

    return true;
  } else {
    return false;
  }
}

bool refalrts::open_evar_advance(
  Iter& evar_b, Iter& evar_e,
  Iter& first, Iter& last
) {
  assert((evar_b == 0) == (evar_e == 0));

  refalrts::Iter prev_first = 0;

  if (tvar_left(prev_first, first, last)) {
    if (! evar_b) {
      evar_b = prev_first;
    }

    if (is_open_bracket(prev_first)) {
      evar_e = prev_first->link_info;
    } else {
      evar_e = prev_first;
    }

    return true;
  } else {
    return false;
  }
}

unsigned refalrts::read_chars(
  char buffer[], unsigned buflen, refalrts::Iter& first, refalrts::Iter& last
) {
  unsigned read = 0;
  while (
    read != buflen && ! empty_seq(first, last)
      && first->tag == refalrts::cDataChar
  ) {
    buffer[read] = first->char_info;
    ++ read;
    move_left(first, last);
  }
  return read;
}

//------------------------------------------------------------------------------

// Операции распределителя памяти

namespace refalrts{

namespace allocator {

void reset_allocator();
bool alloc_node(Iter& node);
Iter free_ptr();
void splice_to_freelist(Iter begin, Iter end);
void splice_from_freelist(Iter pos);

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

bool copy_node(refalrts::Iter& res, refalrts::Iter sample) {
  switch (sample->tag) {
    case refalrts::cDataChar:
      return refalrts::alloc_char(res, sample->char_info);
      // break;

    case refalrts::cDataNumber:
      return refalrts::alloc_number(res, sample->number_info);
      // break;

    case refalrts::cDataFunction:
      return refalrts::alloc_name(
        res, sample->function_info.ptr, sample->function_info.name
      );
      // break;

    case refalrts::cDataOpenBracket:
      return refalrts::alloc_open_bracket(res);
      // break;

    case refalrts::cDataCloseBracket:
      return refalrts::alloc_close_bracket(res);
      // break;

    case refalrts::cDataFile: {
      bool allocated = refalrts::allocator::alloc_node(res);
      if (allocated) {
        res->tag = refalrts::cDataFile;
        res->file_info = sample->file_info;
        return true;
      } else {
        return false;
      }
    }
    // break;

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

void make_dump(refalrts::Iter begin, refalrts::Iter end);

} // namespace vm

namespace profiler {

void add_copy_tevar_time(clock_t duration);

} // namespace profiler

} // namespace refalrts

namespace {

bool copy_nonempty_evar(
  refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  clock_t start_copy_time = clock();

  refalrts::Iter res = 0;
  refalrts::Iter bracket_stack = 0;

  refalrts::Iter prev_res_begin =
    prev(refalrts::allocator::free_ptr());

  while (! refalrts::empty_seq(evar_b_sample, evar_e_sample)) {
    if (! copy_node(res, evar_b_sample)) {
      return false;
    }

    if (is_open_bracket(res)) {
      res->link_info = bracket_stack;
      bracket_stack = res;
    } else if (is_close_bracket(res)) {
      assert(bracket_stack != 0);

      refalrts::Iter open_cobracket = bracket_stack;
      bracket_stack = bracket_stack->link_info;
      refalrts::link_brackets(open_cobracket, res);
    }

    refalrts::move_left(evar_b_sample, evar_e_sample);
  }

  assert(bracket_stack == 0);

  evar_res_b = next(prev_res_begin);
  evar_res_e = res;

  refalrts::profiler::add_copy_tevar_time(clock() - start_copy_time);

  return true;
}

} // unnamed namespace

bool refalrts::copy_evar(
  refalrts::Iter& evar_res_b, refalrts::Iter& evar_res_e,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  if (empty_seq(evar_b_sample, evar_e_sample)) {
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
  refalrts::Iter& stvar_res, refalrts::Iter stvar_sample
) {
  if (is_open_bracket(stvar_sample)) {
    refalrts::Iter end_of_sample = stvar_sample->link_info;
    refalrts::Iter end_of_res;
    return copy_evar(
      stvar_res, end_of_res, stvar_sample, end_of_sample
    );
  } else {
    return copy_node(stvar_res, stvar_sample);
  }
}

bool refalrts::alloc_copy_evar(
  refalrts::Iter& res,
  refalrts::Iter evar_b_sample, refalrts::Iter evar_e_sample
) {
  if (empty_seq(evar_b_sample, evar_e_sample)) {
    res = 0;
    return true;
  } else {
    refalrts::Iter res_e = 0;
    return copy_nonempty_evar(
      res, res_e, evar_b_sample, evar_e_sample
    );
  }
}

bool refalrts::alloc_copy_svar_(
  refalrts::Iter& svar_res, refalrts::Iter svar_sample
) {
  return copy_node(svar_res, svar_sample);
}


bool refalrts::alloc_char(refalrts::Iter& res, char ch) {
  if (allocator::alloc_node(res)) {
    res->tag = cDataChar;
    res->char_info = ch;
    return true;
  } else {
    return false;
  }
}

bool refalrts::alloc_number(
  refalrts::Iter& res, refalrts::RefalNumber num
) {
  if (allocator::alloc_node(res)) {
    res->tag = cDataNumber;
    res->number_info = num;
    return true;
  } else {
    return false;
  }
}

const char *unknown = "@unknown";

bool refalrts::alloc_name(
  refalrts::Iter& res,
  refalrts::RefalFunctionPtr fn,
  refalrts::RefalFuncName name
) {
  if (allocator::alloc_node(res)) {
    res->tag = cDataFunction;
    res->function_info.ptr = fn;
    if (name != 0) {
      res->function_info.name = name;
    } else {
      res->function_info.name = unknown;
    }
    return true;
  } else {
    return false;
  }
}

namespace {

bool alloc_some_bracket(refalrts::Iter& res, refalrts::DataTag tag) {
  if (refalrts::allocator::alloc_node(res)) {
    res->tag = tag;
    return true;
  } else {
    return false;
  }
}

void link_adjacent(refalrts::Iter left, refalrts::Iter right) {
  if (left != 0) {
    left->next = right;
  }

  if (right != 0) {
    right->prev = left;
  }
}

} // unnamed namespace

bool refalrts::alloc_open_bracket(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataOpenBracket);
}

bool refalrts::alloc_close_bracket(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataCloseBracket);
}

bool refalrts::alloc_open_call(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataOpenCall);
}

bool refalrts::alloc_close_call(refalrts::Iter& res) {
  return alloc_some_bracket(res, cDataCloseCall);
}

bool refalrts::alloc_chars(
  refalrts::Iter& res_b, refalrts::Iter& res_e,
  const char buffer[], unsigned buflen
) {
  if (buflen == 0) {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    refalrts::Iter before_begin_seq = prev(refalrts::allocator::free_ptr());
    refalrts::Iter end_seq = 0;

    for (unsigned i = 0; i < buflen; ++ i) {
      if (! alloc_char(end_seq, buffer[i])) {
        return false;
      }
    }

    res_b = next(before_begin_seq);
    res_e = end_seq;

    return true;
  }
}

bool refalrts::alloc_string(
  refalrts::Iter& res_b, refalrts::Iter& res_e, const char *string
) {
  if (*string == '\0') {
    res_b = 0;
    res_e = 0;
    return true;
  } else {
    refalrts::Iter before_begin_seq = prev(refalrts::allocator::free_ptr());
    refalrts::Iter end_seq = 0;

    for (const char *p = string; *p != '\0'; ++ p) {
      if (! alloc_char(end_seq, *p)) {
        return false;
      }
    }

    res_b = next(before_begin_seq);
    res_e = end_seq;

    return true;
  }
}

namespace refalrts {

namespace vm {

void push_stack(refalrts::Iter call_bracket);

} // namespace vm

} // namespace refalrts

void refalrts::push_stack(Iter call_bracket) {
  vm::push_stack(call_bracket);
}

void refalrts::link_brackets(Iter left, Iter right) {
  left->link_info = right;
  right->link_info = left;
}

namespace {

refalrts::Iter list_splice(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {

  VALID_LINKED(res);
  VALID_LINKED(res->prev);
  VALID_LINKED(begin);
  VALID_LINKED(begin->prev);
  VALID_LINKED(end);
  VALID_LINKED(end->prev);

  if ((res == begin) || refalrts::empty_seq(begin, end)) {

    // Цель достигнута сама по себе
    return res;
  } else {
    refalrts::Iter prev_res = prev(res);
    refalrts::Iter prev_begin = prev(begin);
    refalrts::Iter next_end = next(end);

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

refalrts::Iter refalrts::splice_elem(
  refalrts::Iter res, refalrts::Iter elem
) {
  return list_splice(res, elem, elem);
}

refalrts::Iter refalrts::splice_stvar(
  refalrts::Iter res, refalrts::Iter var
) {
  refalrts::Iter var_end;
  if (is_open_bracket(var)) {
    var_end = var->link_info;
  } else {
    var_end = var;
  }

  return list_splice(res, var, var_end);
}

refalrts::Iter refalrts::splice_evar(
  refalrts::Iter res, refalrts::Iter begin, refalrts::Iter end
) {
  return list_splice(res, begin, end);
}

void refalrts::splice_to_freelist(refalrts::Iter begin, refalrts::Iter end) {
  allocator::splice_to_freelist(begin, end);
}

void refalrts::splice_from_freelist(refalrts::Iter pos) {
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
extern void print_seq(FILE *output, refalrts::Iter begin, refalrts::Iter end);

} // namespace vm

} // namespace refalrts

void refalrts::set_return_code(int code) {
  refalrts::vm::g_ret_code = code;
}

void refalrts::debug_print_expr(
  void *file, refalrts::Iter first, refalrts::Iter last
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

extern refalrts::Node g_last_marker;

refalrts::Node g_first_marker =
  { 0, & g_last_marker, refalrts::cDataIllegal, { '\0' } };
refalrts::Node g_last_marker =
  { & g_first_marker, 0, refalrts::cDataIllegal, { '\0' } };

refalrts::NodePtr g_free_ptr = & g_last_marker;

namespace pool {

enum { cChunkSize = 1000 };
typedef struct Chunk {
  Chunk *next;
  refalrts::Node elems[cChunkSize];
} Chunk;

typedef Chunk *ChunkPtr;

refalrts::NodePtr alloc_node();
void free();
bool grow();

ChunkPtr g_pool = 0;
unsigned g_avail = 0;
refalrts::Node *g_pnext_node = 0;

} // namespace pool

unsigned g_memory_use = 0;

} // namespace allocator

} // namespace refalrts

inline void refalrts::allocator::reset_allocator() {
  g_free_ptr = g_first_marker.next;
}

bool refalrts::allocator::alloc_node(refalrts::Iter& node) {
  if ((g_free_ptr == & g_last_marker) && ! create_nodes()) {
    return false;
  } else {
    node = g_free_ptr;
    g_free_ptr = next(g_free_ptr);
    node->tag = refalrts::cDataIllegal;
    return true;
  }
}

refalrts::Iter refalrts::allocator::free_ptr() {
  return g_free_ptr;
}

void refalrts::allocator::splice_to_freelist(
  refalrts::Iter begin, refalrts::Iter end
) {
  reset_allocator();
  g_free_ptr = list_splice(g_free_ptr, begin, end);
}

void refalrts::allocator::splice_from_freelist(refalrts::Iter pos) {
  if (g_free_ptr != g_first_marker.next) {
    list_splice(pos, g_first_marker.next, g_free_ptr->prev);
  }
}

bool refalrts::allocator::create_nodes() {
  refalrts::NodePtr new_node = refalrts::allocator::pool::alloc_node();

#ifdef MEMORY_LIMIT

  if (g_memory_use >= MEMORY_LIMIT) {
    return false;
  }

#endif //ifdef MEMORY_LIMIT

  if (new_node == 0) {
    return false;
  } else {
    refalrts::NodePtr before_free_ptr = prev(g_free_ptr);
    before_free_ptr->next = new_node;
    new_node->prev = before_free_ptr;

    g_free_ptr->prev = new_node;
    new_node->next = g_free_ptr;

    g_free_ptr = new_node;
    g_free_ptr->tag = refalrts::cDataIllegal;
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
    static_cast<unsigned long>(sizeof(Node)),
    static_cast<unsigned long>(g_memory_use * sizeof(Node))
  );
#endif // DONT_PRINT_STATISTICS
}

refalrts::NodePtr refalrts::allocator::pool::alloc_node() {
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
void add_match_repeated_tvar_time(clock_t duration);
void add_match_repeated_evar_time(clock_t duration);
void start_e_loop();
void stop_e_loop();

#ifndef DONT_PRINT_STATISTICS
struct TimeItem {
  const char *name;
  unsigned long counter;
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

void refalrts::profiler::add_match_repeated_tvar_time(clock_t duration) {
  if (g_in_e_loop) {
    g_total_match_repeated_tvar_time += duration;
  } else {
    g_total_match_repeated_tvar_time_outside_e += duration;
  }
}

void refalrts::profiler::add_match_repeated_evar_time(clock_t duration) {
  if (g_in_e_loop) {
    g_total_match_repeated_evar_time += duration;
  } else {
    g_total_match_repeated_evar_time_outside_e += duration;
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

extern refalrts::FnResult Go(refalrts::Iter, refalrts::Iter);

namespace refalrts {

namespace vm {

void push_stack(refalrts::Iter call_bracket);
refalrts::Iter pop_stack();
bool empty_stack();

bool init_view_field();

refalrts::FnResult main_loop();
refalrts::FnResult execute_active(refalrts::Iter begin, refalrts::Iter end);
void make_dump(refalrts::Iter begin, refalrts::Iter end);
FILE* dump_stream();

void free_view_field();

refalrts::NodePtr g_stack_ptr = 0;

extern refalrts::Node g_last_marker;

refalrts::Node g_first_marker =
  { 0, & g_last_marker, refalrts::cDataIllegal, { '\0' } };
refalrts::Node g_last_marker =
  { & g_first_marker, 0, refalrts::cDataIllegal, { '\0' } };

refalrts::Iter g_begin_view_field = & g_last_marker;

unsigned g_step_counter = 0;

int g_ret_code;

} // namespace vm

} // namespace refalrts

void refalrts::vm::push_stack(refalrts::Iter call_bracket) {
  call_bracket->link_info = g_stack_ptr;
  g_stack_ptr = call_bracket;
}

refalrts::Iter refalrts::vm::pop_stack() {
  refalrts::Iter res = g_stack_ptr;
  g_stack_ptr = g_stack_ptr->link_info;
  return res;
}

bool refalrts::vm::empty_stack() {
  return (g_stack_ptr == 0);
}

bool refalrts::vm::init_view_field() {
  refalrts::reset_allocator();
  refalrts::Iter res = g_begin_view_field;
  refalrts::Iter n0 = 0;
  if (! refalrts::alloc_open_call(n0))
    return false;
  refalrts::Iter n1 = 0;
  if (! refalrts::alloc_name(n1, Go, "Go"))
    return false;
  refalrts::Iter n2 = 0;
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

refalrts::FnResult refalrts::vm::main_loop() {
  FnResult res = cSuccess;
  while (! empty_stack()) {
    refalrts::Iter active_begin = pop_stack();
    assert(! empty_stack());
    refalrts::Iter active_end = pop_stack();

    res = execute_active(active_begin, active_end);
    refalrts::profiler::after_step();

    ++ g_step_counter;

    if (res != cSuccess) {
      switch (res) {
        case refalrts::cRecognitionImpossible:
          fprintf(stderr, "\nRECOGNITION IMPOSSIBLE\n\n");
          break;

        case refalrts::cNoMemory:
          fprintf(stderr, "\nNO MEMORY\n\n");
          break;

        case refalrts::cExit:
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

refalrts::FnResult refalrts::vm::execute_active(
  refalrts::Iter begin, refalrts::Iter end
) {

#if SHOW_DEBUG

  if (g_step_counter >= (unsigned) SHOW_DEBUG) {
    make_dump(begin, end);
  }

#endif // SHOW_DEBUG

  refalrts::Iter function = next(begin);
  if (cDataFunction == function->tag) {
    return refalrts::FnResult(
      (function->function_info.ptr)(begin, end) & 0xFFU
    );
  } else {
    return cRecognitionImpossible;
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
  FILE *output, refalrts::Iter begin, refalrts::Iter end
) {
  enum {
    cStateView = 100,
    cStateString,
    cStateFinish
  } state = cStateView;

  int indent = 0;
  bool after_bracket = false;
  bool reset_after_bracket = true;

  while ((state != cStateFinish) && ! refalrts::empty_seq(begin, end)) {
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
          case refalrts::cDataIllegal:
            if (0 == begin->prev) {
              fprintf(output, "[FIRST] ");
            } else if (0 == begin->next) {
              fprintf(output, "\n[LAST]");
              state = cStateFinish;
            } else {
              fprintf(output, "\n[NONE]");
            }
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataChar:
            state = cStateString;
            fprintf(output, "\'");
            continue;

          case refalrts::cDataNumber:
            fprintf(output, "%ld ", begin->number_info);
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataFunction:
            if (begin->function_info.name[0] != 0) {
              fprintf(output, "&%s ", begin->function_info.name);
            } else {
              fprintf(output, "&%p ", begin->function_info.ptr);
            }
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataOpenBracket:
            if (! after_bracket) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "(");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataCloseBracket:
            --indent;
            fprintf(output, ")");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataOpenCall:
            if (! after_bracket) {
              print_indent(output, indent);
            }
            ++indent;
            after_bracket = true;
            reset_after_bracket = false;
            fprintf(output, "<");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataCloseCall:
            --indent;
            fprintf(output, ">");
            refalrts::move_left(begin, end);
            continue;

          case refalrts::cDataFile:
            fprintf(output, "*%p ", begin->file_info);
            refalrts::move_left(begin, end);
            continue;

          default:
            r05_switch_default_violation(begin->tag);
        }

      case cStateString:
        switch (begin->tag) {
          case refalrts::cDataChar: {
            unsigned char ch = static_cast<unsigned char>(begin->char_info);
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
              refalrts::move_left(begin, end);
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

void refalrts::vm::make_dump(refalrts::Iter begin, refalrts::Iter end) {
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
  refalrts::Iter begin = g_first_marker.next;
  refalrts::Iter end = & g_last_marker;

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

  refalrts::FnResult res;
  try {
    refalrts::vm::init_view_field();
    refalrts::profiler::start_profiler();
    res = refalrts::vm::main_loop();
    fflush(stderr);
    fflush(stdout);
  } catch (std::exception& e) {
    fprintf(stderr, "INTERNAL ERROR: std::exception %s\n", e.what());
    return 4;
  } catch (...) {
    fprintf(stderr, "INTERNAL ERROR: unknown exception\n");
    return 5;
  }

  refalrts::profiler::end_profiler();
  refalrts::vm::free_view_field();
  refalrts::allocator::free_memory();

  fflush(stdout);

  switch (res) {
    case refalrts::cSuccess:
      return 0;

    case refalrts::cRecognitionImpossible:
      return 1;

    case refalrts::cNoMemory:
      return 2;

    case refalrts::cExit:
      return refalrts::vm::g_ret_code;

    default:
      r05_switch_default_violation(res);
  }
}
