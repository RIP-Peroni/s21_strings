#include "s21_string.h"

s21_size_t s21_strnlen(const char *s, s21_size_t max_len) {
  const char *p = s;
  s21_size_t n = 0;

  while (*p && n < max_len) {
    ++p;
    ++n;
  }

  return n;
}

int float_print(int flags, char *buffer, int field_width, int len,
                int min_zero) {
  int field = field_width - len;
  char c;
  char str[1024];
  int j = 0, l = 0, i;
  if (flags & LEFT) flags &= ~ZEROPAD;

  c = (flags & ZEROPAD) ? '0' : ' ';

  if (!(flags & LEFT) && !(flags & ZEROPAD) && (flags & SIGN)) {
    while (--field > 0) str[j++] = c;
  }

  if (flags & SIGN) {
    if (min_zero == 1) {
      str[j++] = '-';
      field--;
    } else if (flags & PLUS) {
      str[j++] = '+';
      field--;
    } else if (flags & SPACE) {
      str[j++] = ' ';
      field--;
    }
  }
  if (!(flags & LEFT)) {
    while (field-- > 0) str[j++] = c;
  }
  while (len-- > 0) {
    str[j++] = buffer[l++];
  }
  while (field-- > 0) {
    str[j++] = ' ';
  }
  for (i = 0; i < j; i++) {
    buffer[i] = str[i];
  }

  str[j] = '\0';
  return i;
}

static int s21_skip_atoi(const char *s) {
  int i = 0;
  while (is_digit(*s)) i = i * 10 + (*s++) - '0';
  return i;
}

int int_len(int num) {
  int i = 0;
  while (num) {
    num /= 10;
    i++;
  }
  return i;
}

static char s21_number(char *str, long num, int base, int size, int precision,
                       int type) {
  static char *lower_digits = "0123456789abcdefghijklmnopqrstuvwxyz";
  static char *upper_digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char c, sign, tmp[66];
  char *dig = lower_digits;
  int i, z = 0;

  if (type & UPPERCASE) dig = upper_digits;
  if (type & LEFT) type &= ~ZEROPAD;
  if (base < 2 || base > 36) return 0;

  c = (type & ZEROPAD) ? '0' : ' ';
  sign = 0;
  if (type & SIGN) {
    if (num < 0) {
      sign = '-';
      num = -num;
      size--;
    } else if (type & PLUS) {
      sign = '+';
      size--;
    } else if (type & SPACE) {
      sign = ' ';
      size--;
    }
  }

  if (type & HEX_PREP) {
    if ((base == 16) && !(num == 0)) {
      size -= 2;
      z = 1;
    } else if (base == 8)
      size--;
  }
  i = 0;
  if (num == 0 && precision == 0) {
  } else if (num == 0) {
    tmp[i++] = '0';
  } else {
    while (num != 0) {
      tmp[i++] = dig[((unsigned long)num) % (unsigned)base];
      num = ((unsigned long)num) / (unsigned)base;
    }
  }
  if (i > precision) precision = i;
  size -= precision;
  if (!(type & (ZEROPAD | LEFT)))
    while (size-- > 0) *str++ = ' ';
  if (sign) *str++ = sign;

  if (type & HEX_PREP) {
    if (base == 8)
      *str++ = '0';
    else if (base == 16 && z == 1) {
      *str++ = '0';
      *str++ = dig[33];
    }
  }

  if (!(type & LEFT))
    while (size-- > 0) *str++ = c;
  while (i < precision--) *str++ = '0';
  while (i-- > 0) *str++ = tmp[i];
  while (size-- > 0) *str++ = ' ';

  *str++ = '\0';
  return 0;
}

int float_to_string(double num, char *str, int precision, int stop_on_zeroes,
                    int flags) {
  long long int whole_part = (long long int)num;
  double frac_part = num - whole_part;
  long long int frac_digits = 1;
  for (int i = 0; i < precision; i++) {
    frac_digits *= 10;
    frac_part *= 10.0f;
  }
  long long int frac_part_int = (long long int)(frac_part + 0.5f);
  if (frac_part_int >= frac_digits) {
    frac_part_int = 0;
    whole_part++;
  }
  int num_len = 0;
  if (whole_part == 0) {
    str[num_len++] = '0';
  } else {
    long long int temp = whole_part;
    while (temp != 0) {
      temp /= 10;
      num_len++;
    }
    temp = whole_part;
    for (int i = num_len - 1; i >= 0; i--) {
      str[i] = '0' + temp % 10;
      temp /= 10;
    }
  }
  if (precision > 0 && !(flags & POINT_NO)) str[num_len++] = '.';
  if ((flags & HEX_PREP) && (precision < 1)) {
    str[num_len++] = '.';
  }
  if ((flags & HEX_PREP) && (precision != 0)) stop_on_zeroes = 0;

  for (int i = 0; i < precision; i++) {
    if ((frac_part_int * (10 * precision)) == 0 && stop_on_zeroes) {
      break;
    }
    frac_part_int *= 10;
    str[num_len++] = '0' + (frac_part_int / frac_digits);
    frac_part_int %= frac_digits;
  }
  str[num_len] = '\0';
  return num_len;
}

void reverse(char *str, int length) {
  int start = 0;
  int end = length - 1;
  while (start < end) {
    char tmp = *(str + start);
    *(str + start) = *(str + end);
    *(str + end) = tmp;
    start++;
    end--;
  }
}

int intToStr(long int num, char *str, int base) {
  int i = 0;
  int isNegative = 0;

  if (num == 0) {
    str[i++] = '0';
    str[i] = '\0';
    return i;
  }
  if (num < 0) {
    isNegative = 1;
    num = -num;
  }
  while (num != 0) {
    int rem = num % base;
    str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
    num = num / base;
  }
  if (isNegative) str[i++] = '-';
  str[i] = '\0';
  reverse(str, i);
  return i;
}

int s21_sprintf(char *str, const char *format, ...) {
  char *s;
  char dstr[1024];
  char ustr[1024];
  char ostr[1024];
  int min_zero;
  int min_zerog;
  char pstr[1024];
  int *num;

  va_list args;
  int i = 0, j = 0;
  long int_temp = 0;
  double float_temp = 0;

  va_start(args, format);

  while (format[i]) {
    int precision = 6;
    if (format[i] == '%') {
      i++;
      int flags = 0;
      while (format[i] == '-' || format[i] == '+' || format[i] == '0' ||
             format[i] == ' ' || format[i] == '#') {
        switch (format[i]) {
          case '-':
            flags |= LEFT;
            break;
          case '+':
            flags |= PLUS;
            break;
          case ' ':
            flags |= SPACE;
            break;
          case '#':
            flags |= HEX_PREP;
            break;
          case '0':
            flags |= ZEROPAD;
            break;
        }
        i++;
      }
      // Получение ширины поля
      int field_width = -1;
      if (is_digit(format[i])) {
        field_width = s21_skip_atoi(&format[i]);
        i += int_len(field_width);
      } else if (format[i] == '*') {
        i++;
        field_width = va_arg(args, int);
        if (field_width < 0) {
          field_width = -field_width;
          flags |= LEFT;
        }
      }
      // Получение точности
      precision = -1;
      if (format[i] == '.') {
        ++i;
        if (is_digit(format[i])) {
          precision = s21_skip_atoi(&format[i]);
          if (precision == 0) {
            i += 1;
          } else
            i += int_len(precision);
        } else if (format[i] == '*') {
          ++i;
          precision = va_arg(args, int);
        } else {
          precision = 0;
        }
        if (precision < 0) precision = 0;
      }

      // Получение классификатора преобразования
      int qualifier = 0;
      if (format[i] == 'l' || format[i] == 'L' || format[i] == 'h') {
        qualifier = format[i];
        i++;
      }

      switch (format[i]) {
        case 'c':
          if (!(flags & LEFT))
            while (--field_width > 0) str[j++] = ' ';
          str[j++] = (char)va_arg(args, int);
          while (--field_width > 0) str[j++] = ' ';
          break;
        case 's':
          s = va_arg(args, char *);
          if (!s) s = "<NULL>";
          int slen = s21_strnlen(s, precision);
          if (!(flags & LEFT))
            while (slen < field_width--) str[j++] = ' ';
          for (int p = 0; p < slen; ++p) str[j++] = *s++;
          while (slen < field_width--) str[j++] = ' ';
          break;
        case 'd':
        case 'i':
          flags |= SIGN;
          if (qualifier == 'l') {
            int_temp = va_arg(args, long int);
          } else if (qualifier == 'h') {
            int_temp = va_arg(args, int);
            if (int_temp > 32767) int_temp = (int_temp % 32767) - 32769;
            if (int_temp < -32768) int_temp = (int_temp % 32768) + 32768;
          } else {
            int_temp = va_arg(args, int);
          }
          s21_number(dstr, int_temp, 10, field_width, precision, flags);
          int ilen = s21_strlen(dstr);
          s21_strcpy(str + j, dstr);
          j += ilen;
          break;
        case 'u':
          if (qualifier == 'l') {
            int_temp = va_arg(args, unsigned long int);
          } else if (qualifier == 'h') {
            int_temp = va_arg(args, int);
            if (int_temp > 65536 || int_temp < -65536) int_temp %= 65536;
            if (int_temp < 0) int_temp += 65536;
          } else {
            int_temp = va_arg(args, unsigned int);
          }
          s21_number(ustr, int_temp, 10, field_width, precision, flags);
          int ulen = s21_strlen(ustr);
          s21_strcpy(str + j, ustr);
          j += ulen;
          break;
        case 'X':
        case 'x':
          if (format[i] == 'X') {
            flags |= UPPERCASE;
          }
          char xstr[1024];
          if (qualifier == 'l') {
            int_temp = va_arg(args, unsigned long int);
          } else if (qualifier == 'h') {
            int_temp = va_arg(args, int);
            if (int_temp > 65536 || int_temp < -65536) int_temp %= 65536;
            if (int_temp < 0) int_temp += 65536;
          } else {
            int_temp = va_arg(args, unsigned int);
          }
          s21_number(xstr, int_temp, 16, field_width, precision, flags);
          int xlen = s21_strlen(xstr);
          s21_strcpy(str + j, xstr);
          j += xlen;
          break;
        case 'o':
          if (qualifier == 'l') {
            int_temp = va_arg(args, long long int);
          } else if (qualifier == 'h') {
            int_temp = va_arg(args, int);
            if (int_temp > 65535 || int_temp < -65536) int_temp %= 65536;
            if (int_temp < 0) int_temp += 65536;
          } else {
            int_temp = va_arg(args, int);
          }
          s21_number(ostr, int_temp, 8, field_width, precision, flags);
          int olen = s21_strlen(ostr);
          s21_strcpy(str + j, ostr);
          j += olen;
          break;
        case 'f':
          min_zero = 0;
          if (precision < 0) precision = 6;
          if (qualifier == 'L') {
            float_temp = va_arg(args, long double);
          } else {
            float_temp = va_arg(args, double);
          }
          if (float_temp < 0) {
            float_temp *= -1.0;
            min_zero = 1;
          }
          char fbuf[1024];
          int dlen = float_to_string(float_temp, fbuf, precision, 0, flags);
          if (((flags & PLUS) && (min_zero == 0)) || (flags & SPACE) ||
              min_zero == 1) {
            flags |= SIGN;
          }
          dlen = float_print(flags, fbuf, field_width, dlen, min_zero);
          s21_strcpy(str + j, fbuf);
          j += dlen;
          break;
        case 'G':
        case 'g':
        case 'E':
        case 'e':
          min_zerog = 0;
          if (precision < 0) precision = 6;
          if (qualifier == 'L') {
            float_temp = va_arg(args, long double);
          } else {
            float_temp = va_arg(args, double);
          }
          if (float_temp < 0) {
            float_temp *= -1.0;
            min_zerog = 1;
          }
          if ((format[i] == 'g' || format[i] == 'G') && (float_temp == 0)) {
            str[j++] = '0';
            break;
          }
          char buf[100];
          int m = 0, b = 0, z = 0, v = 0, p = 0;
          if ((format[i] == 'g' || format[i] == 'G') &&
              (float_temp >= 0.0001 && float_temp < 1000000.0)) {
            double double_temp = float_temp;
            while (double_temp >= 1) {
              double_temp /= 10.0;
              z++;
              v++;
            }
            while (double_temp < 1 && v == 0) {
              double_temp *= 10.0;
              z++;
            }
            int Gprecision =
                ((float_temp >= 1)
                     ? precision - z
                     : ((precision != 0) ? precision + z - 1 : precision + z));
            int l = float_to_string(float_temp, buf, Gprecision, 1, flags);
            if (((flags & PLUS) && (min_zerog == 0)) || (flags & SPACE) ||
                min_zerog == 1) {
              flags |= SIGN;
            }
            l = float_print(flags, buf, field_width, l, min_zerog);
            s21_strcpy(str + j, buf);
            j += l;
            break;
          } else {
            double fltemp = float_temp;
            int h = 0;
            while (fltemp >= 10) fltemp /= 10;
            for (h = 0; h < precision; h++) {
              fltemp *= 10;
            }
            long int int_temp = (long int)(fltemp + 0.5);
            while (h--) int_temp /= 10;
            if ((format[i] == 'G' || format[i] == 'g') &&
                ((float_temp >= 999999) && (float_temp < 1000010.0)) &&
                precision == 0)
              flags |= POINT_NO;
            if ((float_temp < 1.0) && float_temp != 0) {
              while ((float_temp < 1.0)) {
                float_temp *= 10.0;
                m++;
              }
              if ((format[i] == 'E' || format[i] == 'e') &&
                  ((float_temp + 0.5) >= 10) && (float_temp >= 0.0001) &&
                  precision == 0) {
                float_temp /= 10.0;
                m--;
              }
            } else if (((format[i] == 'E' || format[i] == 'e')
                            ? (float_temp + 0.5)
                            : float_temp) >= 10.0) {
              while (((format[i] == 'E' || format[i] == 'e')
                          ? (float_temp + 0.5)
                          : float_temp) >= 10.0) {
                float_temp /= 10.0;
                b++;
                v++;
              }
              if ((format[i] == 'E' || format[i] == 'e') && (float_temp < 1) &&
                  (v > 1) && int_temp < 10) {
                float_temp *= 10.0;
                b--;
              }
            } else {
              p = 1;
            }
            int len;
            if (format[i] == 'G' || format[i] == 'g') {
              double temp = float_temp;
              while (temp < 1) {
                temp *= 10;
              }
              int u = 0;
              for (int q = 0; q < precision; q++) {
                temp *= 10;
                u += (int)temp % 10;
                if (u == 0) flags |= POINT_NO;
              }
              len = float_to_string(float_temp, buf, precision - 1, 1, flags);
            } else {
              len = float_to_string(float_temp, buf, precision, 0, flags);
            }
            if (m > 0) {
              buf[len++] = (format[i] == 'e' || format[i] == 'g') ? 'e' : 'E';
              buf[len++] = '-';
            } else if (b > 0) {
              buf[len++] = (format[i] == 'e' || format[i] == 'g') ? 'e' : 'E';
              buf[len++] = '+';
            } else if ((format[i] == 'E' || format[i] == 'e') && (p == 1)) {
              buf[len++] = (format[i] == 'e') ? 'e' : 'E';
              buf[len++] = '+';
            }
            if (((m < 10) && (b == 0)) || ((b < 10) && (m == 0)))
              buf[len++] = '0';
            char buffer_2[10];
            int le = intToStr((b > 0) ? b : m, buffer_2, 10);
            s21_strcpy(buf + len, buffer_2);
            if (((flags & PLUS) && (min_zerog == 0)) || (flags & SPACE) ||
                min_zerog == 1) {
              flags |= SIGN;
            }
            le = float_print(flags, buf, field_width, len + le, min_zerog);
            s21_strcpy(str + j, buf);
            j += le;
          }
          break;
        case 'p':
          if (field_width == -1) {
            field_width = 14;
            if (flags & PLUS) field_width = 15;
            flags |= ZEROPAD;
          }
          flags |= SIGN;
          s21_number(pstr, (unsigned long)va_arg(args, void *), 16, field_width,
                     precision, flags |= HEX_PREP);
          int plen = s21_strlen(pstr);
          s21_strcpy(str + j, pstr);
          j += plen;
          break;
        case 'n':
          num = va_arg(args, int *);
          *num = j;
          break;
        case '%':
          str[j++] = '%';
          break;
        default:
          str[j++] = format[i];
      }
    } else {
      str[j++] = format[i];
    }
    i++;
  }
  va_end(args);
  str[j] = '\0';
  return j;
}