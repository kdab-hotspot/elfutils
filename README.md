# ElfUtils

The elfutils project provides libraries and tools for ELF files and DWARF data.

The project home is http://elfutils.org/

Releases are published at ftp://sourceware.org/pub/elfutils/
Which can also be found at https://sourceware.org/elfutils/ftp/

To build a release do: ./configure && make && make check
Please check the configure summary to make sure all recommended
features are enabled. There should be no failures after make check.

Please reports bugs at https://sourceware.org/bugzilla/

The current elfutils source code can be checked out with
git clone git://sourceware.org/git/elfutils.git

To build a git checkout do:
  autoreconf -i -f && \
  ./configure --enable-maintainer-mode && \
  make && make check

The developer mailinglist to send patches to is
elfutils-devel@sourceware.org.
https://sourceware.org/ml/elfutils-devel/

To subscribe send an email to elfutils-devel-subscribe@sourceware.org
Or use the form at https://sourceware.org/lists.html#ml-requestor

See the CONTRIBUTING file for how to propose patches to the code.

See the NOTES files for some design decisions and notes.

## Building on MacOSX

```
brew install autoconf automake libtool gcc argp-standalone gawk libarchive libmicrohttpd gettext
export PATH="/usr/local/opt/m4/bin:$PATH"
export PATH="/usr/local/opt/autoconf/bin:$PATH"
export PATH="/usr/local/opt/libtool/bin:$PATH"
export PATH="/usr/local/opt/gcc/bin:$PATH"
aclocal; autoheader; glibtoolize --copy; autoconf; automake --gnu --copy --add-missing
mkdir build
cd build
CC=gcc-9 CFLAGS="-I/usr/local/include -I/usr/local/opt/gettext/include/" LDFLAGS="-L/usr/local/opt/argp-standalone/lib/" PKG_CONFIG_PATH=/usr/local/opt/libarchive/lib/pkgconfig ../configure --prefix=$(pwd)/../install --disable-symbol-versioning --enable-maintainer-mode
make -j12
```

