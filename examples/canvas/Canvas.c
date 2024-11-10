#include "refal05rts.h"
#include "lamestd.h"

// provided by canvas.js
void fillRect(int x, int y, int width, int height);
void clearRect(int x, int y, int width, int height);
void strokeRect(int x, int y, int width, int height);
void beginPath(void);
void closePath(void);
void moveTo(int x, int y);
void lineTo(int x, int y);
void stroke(void);
void fill(void);
void arc(int x, int y, int radius, int startAngle, int endAngle, int counterClockwise);
void arcTo(int x1, int y1, int x2, int y2, int radius);
void bezierCurveTo(int cp1x, int cp1y, int cp2x, int cp2y, int x, int y);
void quadraticCurveTo(int cpx, int cpy, int x, int y);
void setLineWidth(int width);
void setLineJoin(const char* joinStyle);  // "round", "bevel", or "miter"
void setLineCap(const char* capStyle);    // "butt", "round", or "square"
void setStrokeStyle(const char* color);
void setFillStyle(const char* color);
void setGlobalAlpha(int alpha);  // 0 to 255 range (assuming alpha as an integer)
void setTransform(int a, int b, int c, int d, int e, int f);
void drawImage(void* image, int x, int y, int width, int height);
void* createLinearGradient(int x0, int y0, int x1, int y1);
void* createRadialGradient(int x0, int y0, int r0, int x1, int y1, int r1);
void* createPattern(void* image, const char* repetition);  // "repeat", "repeat-x", "repeat-y", "no-repeat"


// cowardly stollen from Library.c
struct signed_number {
  signed sign;
  r05_number value;
};


static struct r05_node *parse_signed_number(
  struct signed_number *sn, struct r05_node *p
) {
  if (R05_DATATAG_CHAR == p->tag) {
    if ('-' == p->info.char_) {
      sn->sign = -1;
    } else if ('+' == p->info.char_) {
      sn->sign = +1;
    } else {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    sn->sign = +1;
  }

  if (R05_DATATAG_NUMBER != p->tag) {
    r05_recognition_impossible();
  }

  sn->value = p->info.number;

  if (0 == sn->value) {
    sn->sign = +1;
  }

  return p->next;
}


R05_DEFINE_ENTRY_FUNCTION(FillRect, "FillRect") {
  struct signed_number x, y, w, h;

  struct r05_node *func_name, *p;

  func_name = arg_begin->next;
  p = func_name->next;

  if (R05_DATATAG_OPEN_BRACKET == p->tag) {
    p = p->next;
    p = parse_signed_number(&x, p);

    if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
      r05_recognition_impossible();
    }

    p = p->next;
  } else {
    p = parse_signed_number(&x, p);
  }

  p = parse_signed_number(&y, p);

  p = parse_signed_number(&w, p);

  p = parse_signed_number(&h, p);

  if (p != arg_end) {
    r05_recognition_impossible();
  }

  fillRect(
    x.sign*x.value,
    y.sign*y.value,
    w.sign*w.value,
    h.sign*h.value
  );
}


// R05_DEFINE_ENTRY_FUNCTION(ClearRect, "ClearRect") {
//   struct signed_number x, y, w, h;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (R05_DATATAG_OPEN_BRACKET == p->tag) {
//     p = p->next;
//     p = parse_signed_number(&x, p);

//     if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
//       r05_recognition_impossible();
//     }

//     p = p->next;
//   } else {
//     p = parse_signed_number(&x, p);
//   }

//   p = parse_signed_number(&y, p);
//   p = parse_signed_number(&w, p);
//   p = parse_signed_number(&h, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   clearRect(
//     x.sign*x.value,
//     y.sign*y.value,
//     w.sign*w.value,
//     h.sign*h.value
//   );
// }

// R05_DEFINE_ENTRY_FUNCTION(StrokeRect, "StrokeRect") {
//   struct signed_number x, y, w, h;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (R05_DATATAG_OPEN_BRACKET == p->tag) {
//     p = p->next;
//     p = parse_signed_number(&x, p);

//     if (R05_DATATAG_CLOSE_BRACKET != p->tag) {
//       r05_recognition_impossible();
//     }

//     p = p->next;
//   } else {
//     p = parse_signed_number(&x, p);
//   }

//   p = parse_signed_number(&y, p);
//   p = parse_signed_number(&w, p);
//   p = parse_signed_number(&h, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   strokeRect(
//     x.sign*x.value,
//     y.sign*y.value,
//     w.sign*w.value,
//     h.sign*h.value
//   );
// }

// R05_DEFINE_ENTRY_FUNCTION(BeginPath, "BeginPath") {
//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   beginPath();
// }

// R05_DEFINE_ENTRY_FUNCTION(ClosePath, "ClosePath") {
//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   closePath();
// }

// R05_DEFINE_ENTRY_FUNCTION(MoveTo, "MoveTo") {
//   struct signed_number x, y;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&x, p);
//   p = parse_signed_number(&y, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   moveTo(x.sign*x.value, y.sign*y.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(LineTo, "LineTo") {
//   struct signed_number x, y;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&x, p);
//   p = parse_signed_number(&y, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   lineTo(x.sign*x.value, y.sign*y.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(Stroke, "Stroke") {
//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   stroke();
// }

// R05_DEFINE_ENTRY_FUNCTION(Fill, "Fill") {
//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   fill();
// }

// R05_DEFINE_ENTRY_FUNCTION(Arc, "Arc") {
//   struct signed_number x, y, r, startAngle, endAngle, counterClockwise;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&x, p);
//   p = parse_signed_number(&y, p);
//   p = parse_signed_number(&r, p);
//   p = parse_signed_number(&startAngle, p);
//   p = parse_signed_number(&endAngle, p);

//   counterClockwise.sign = 1;  // Default is clockwise
//   if (R05_DATATAG_NUMBER == p->tag) {
//     counterClockwise.value = p->info.number;
//     p = p->next;
//   }

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   arc(
//     x.sign*x.value,
//     y.sign*y.value,
//     r.sign*r.value,
//     startAngle.sign*startAngle.value,
//     endAngle.sign*endAngle.value,
//     counterClockwise.sign*counterClockwise.value
//   );
// }

// R05_DEFINE_ENTRY_FUNCTION(ArcTo, "ArcTo") {
//   struct signed_number x1, y1, x2, y2, r;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&x1, p);
//   p = parse_signed_number(&y1, p);
//   p = parse_signed_number(&x2, p);
//   p = parse_signed_number(&y2, p);
//   p = parse_signed_number(&r, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   arcTo(
//     x1.sign*x1.value,
//     y1.sign*y1.value,
//     x2.sign*x2.value,
//     y2.sign*y2.value,
//     r.sign*r.value
//   );
// }

// R05_DEFINE_ENTRY_FUNCTION(BezierCurveTo, "BezierCurveTo") {
//   struct signed_number cp1x, cp1y, cp2x, cp2y, x, y;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&cp1x, p);
//   p = parse_signed_number(&cp1y, p);
//   p = parse_signed_number(&cp2x, p);
//   p = parse_signed_number(&cp2y, p);
//   p = parse_signed_number(&x, p);
//   p = parse_signed_number(&y, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   bezierCurveTo(
//     cp1x.sign*cp1x.value,
//     cp1y.sign*cp1y.value,
//     cp2x.sign*cp2x.value,
//     cp2y.sign*cp2y.value,
//     x.sign*x.value,
//     y.sign*y.value
//   );
// }

// R05_DEFINE_ENTRY_FUNCTION(QuadraticCurveTo, "QuadraticCurveTo") {
//   struct signed_number cpx, cpy, x, y;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&cpx, p);
//   p = parse_signed_number(&cpy, p);
//   p = parse_signed_number(&x, p);
//   p = parse_signed_number(&y, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   quadraticCurveTo(
//     cpx.sign*cpx.value,
//     cpy.sign*cpy.value,
//     x.sign*x.value,
//     y.sign*y.value
//   );
// }

// R05_DEFINE_ENTRY_FUNCTION(SetLineWidth, "SetLineWidth") {
//   struct signed_number width;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&width, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   setLineWidth(width.sign*width.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(SetLineJoin, "SetLineJoin") {
//   struct r05_node *func_name, *p;
//   const char* joinStyle;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (R05_DATATAG_STRING != p->tag) {
//     r05_recognition_impossible();
//   }

//   joinStyle = p->info.string;
//   p = p->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   setLineJoin(joinStyle);
// }

// R05_DEFINE_ENTRY_FUNCTION(SetLineCap, "SetLineCap") {
//   struct r05_node *func_name, *p;
//   const char* capStyle;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (R05_DATATAG_STRING != p->tag) {
//     r05_recognition_impossible();
//   }

//   capStyle = p->info.string;
//   p = p->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   setLineCap(capStyle);
// }

// R05_DEFINE_ENTRY_FUNCTION(SetStrokeStyle, "SetStrokeStyle") {
//   struct r05_node *func_name, *p;
//   const char* color;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (R05_DATATAG_STRING != p->tag) {
//     r05_recognition_impossible();
//   }

//   color = p->info.string;
//   p = p->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   setStrokeStyle(color);
// }

R05_DEFINE_ENTRY_FUNCTION(SetFillStyle, "SetFillStyle") {
  struct r05_node *eColor[2];
  enum { MAX_COLOR = 100 };
  char color[MAX_COLOR + 1];
  size_t color_len;

  color_len =
    r05_read_chars(eColor, color, MAX_COLOR, arg_begin->next, arg_end);

  if (!r05_empty_hole(eColor[1], arg_end)) {
    if (R05_DATATAG_CHAR == eColor[1]->next->tag) {
      r05_builtin_error("fill style color too long");
    } else {
      r05_recognition_impossible();
    }
  }

  color[color_len] = '\0';

  printf("color: %s\n", color);
  setFillStyle(color);
}

// R05_DEFINE_ENTRY_FUNCTION(SetGlobalAlpha, "SetGlobalAlpha") {
//   struct signed_number alpha;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&alpha, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   setGlobalAlpha(alpha.sign*alpha.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(SetTransform, "SetTransform") {
//   struct signed_number a, b, c, d, e, f;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&a, p);
//   p = parse_signed_number(&b, p);
//   p = parse_signed_number(&c, p);
//   p = parse_signed_number(&d, p);
//   p = parse_signed_number(&e, p);
//   p = parse_signed_number(&f, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   setTransform(a.sign*a.value, b.sign*b.value, c.sign*c.value, d.sign*d.value, e.sign*e.value, f.sign*f.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(DrawImage, "DrawImage") {
//   struct signed_number x, y, width, height;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&x, p);
//   p = parse_signed_number(&y, p);
//   p = parse_signed_number(&width, p);
//   p = parse_signed_number(&height, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   drawImage(NULL, x.sign*x.value, y.sign*y.value, width.sign*width.value, height.sign*height.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(CreateLinearGradient, "CreateLinearGradient") {
//   struct signed_number x0, y0, x1, y1;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&x0, p);
//   p = parse_signed_number(&y0, p);
//   p = parse_signed_number(&x1, p);
//   p = parse_signed_number(&y1, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   createLinearGradient(x0.sign*x0.value, y0.sign*y0.value, x1.sign*x1.value, y1.sign*y1.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(CreateRadialGradient, "CreateRadialGradient") {
//   struct signed_number x0, y0, r0, x1, y1, r1;

//   struct r05_node *func_name, *p;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   p = parse_signed_number(&x0, p);
//   p = parse_signed_number(&y0, p);
//   p = parse_signed_number(&r0, p);
//   p = parse_signed_number(&x1, p);
//   p = parse_signed_number(&y1, p);
//   p = parse_signed_number(&r1, p);

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   createRadialGradient(x0.sign*x0.value, y0.sign*y0.value, r0.sign*r0.value, x1.sign*x1.value, y1.sign*y1.value, r1.sign*r1.value);
// }

// R05_DEFINE_ENTRY_FUNCTION(CreatePattern, "CreatePattern") {
//   struct r05_node *func_name, *p;
//   const char* repetition;

//   func_name = arg_begin->next;
//   p = func_name->next;

//   if (R05_DATATAG_POINTER != p->tag) {
//     r05_recognition_impossible();
//   }

//   p = p->next;
//   if (R05_DATATAG_STRING != p->tag) {
//     r05_recognition_impossible();
//   }

//   repetition = p->info.string;
//   p = p->next;

//   if (p != arg_end) {
//     r05_recognition_impossible();
//   }

//   createPattern(NULL, repetition);
// }
