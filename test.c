 /* confdefs.h */
 #define PACKAGE_NAME "elfutils"
 #define PACKAGE_TARNAME "elfutils"
 #define PACKAGE_VERSION "0.178"
 #define PACKAGE_STRING "elfutils 0.178"
 #define PACKAGE_BUGREPORT "https://sourceware.org/bugzilla"
 #define PACKAGE_URL "http://elfutils.org/"
 #define PACKAGE "elfutils"
 #define VERSION "0.178"
 #define DEFAULT_AR_DETERMINISTIC false
 #define YYTEXT_POINTER 1
 /* end confdefs.h.  */
 int foo (int a)
 {
   for (int i = 0; i < a; ++i) if (i % 4) break; int s = a; return s;
 }

 double bar (double a, double b)
 {
   double square (double z) { return z * z; }
   return square (a) + square (b);
 }

 void baz (int n)
 {
   struct S { int x[n]; };
 }

