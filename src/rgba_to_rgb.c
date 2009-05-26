
#include <stdio.h>
#include <assert.h>

static unsigned char condense_color(unsigned char x1, unsigned char x2) {

  unsigned short color_value;

  color_value = x1;
  color_value <<= 8;
  color_value += x2;

  return 255 & (color_value >> 8);

}

int rgba_to_rgb(unsigned char *rgba_line, unsigned char *rgb_line, int xres) {

  unsigned char *p, *q, *pend;

  unsigned short color_value;

  assert(rgba_line!=NULL && rgb_line!=NULL && xres>0);

  for ( p = rgba_line, q = rgb_line, pend = p + xres * 8 ; p < pend; ) {

    *q++ = condense_color(*p, *(p+1));
    p+=2;

    *q++ = condense_color(*p, *(p+1));
    p+=2;

    *q++ = condense_color(*p, *(p+1));
    p+=2;

    p+=2;

  }

  return 0;

}
