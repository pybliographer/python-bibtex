# Python BibTex

This python extension contains a BibTeX parser and a simple binding to
the GNU Recode library. They are intended to be used with pybliographer.

This module requires the following libraries to be installed:

   - Glib-2.x (and its development headers)
   - GNU Recode 3.5 (and its development headers)


## Compilation

Run the following command:

```sh
   python setup.py build
```

For additional options:

```sh
   python setup.py build --help
```

## Installation

```sh
   python setup.py install
```

For additional options:

```sh
   python setup.py install --help
```

## Troubleshooting

Here are listed some common problems while building the python-bibtex
module.


### Glib-2.0 is not in a standard place

Ensure that the path to glib-2.0.pc from your installation is
available in the environment variable PKG\_CONFIG\_PATH.


### GNU Recode is not in a standard place

To build, run:

```sh
    python setup.py build_ext -I /path/to/recode/include -L /path/to/recode/lib
```

### The installation fails with one of the following errors:

```
"the _recode module is broken."
```

This means that you are using an inadequate version of GNU Recode. You
need to use either Recode 3.5, or Recode 3.6 with some extra patches.

 **The stock version of Recode 3.6 from any GNU mirror DOES NOT WORK.**

### "the recode library is probably broken."

This means that GNU Recode has been compiled with a buggy version of
gcc (gcc-3.3.2 seems to trigger this problem). You can recompile
recode with the following option for configure:

```sh
       CFLAGS=-g ./configure --prefix=...
```
