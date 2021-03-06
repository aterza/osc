# `osc`
A command line oscillator - SPERM project

Un oscillatore da linea di comando

## Uso

`osc [OPTIONS] frq1 ...`

## Requirements

* la libreria `portaudio`:
  * Debian: `apt-get install portaudio19-dev`

## Compilazione (con file pristine)

Sequenza dei comandi:

```sh
$ # MacOsx: glibtoolize - Linux/Debian: libtoolize
$ *libtoolize
$ autoreconf -i
$ ./configure
$ make
```

## Scopo

PBL sulla programmazione in C

* design
* struttura dello sviluppo (semplice -> complesso, file multipli, libreria dinamica, ecc.)
* infrastruttura (`make`, `dir structure`, `tdd`, documentazione, ecc.)
* testing
* debugging
* portabilità
* `OSC` extensions
* gui extensions

## Progressione

1. Design

1. oscillatore semplice che sputa numeri sul terminale

1. aggiunta di opzioni (`getopts`)

1. aggiunta di inviluppo esponenziale

1. uso di librerie esterne (`API`, ecc.)

1. controllo `OSC`

1. gui => oscilloscopio, anche oscilloscopio ncurses

----

## References

* [automake manual](https://www.gnu.org/software/automake/manual/html_node/index.html#Top)
* [autoconf manual](https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.69/autoconf.html)
* [Makefile Conventions](https://www.gnu.org/prep/standards/html_node/Makefile-Conventions.html#Makefile-Conventions)
* [PortAudio](http://portaudio.com/docs/v19-doxydocs/index.html)
* [Getopt](https://www.gnu.org/software/libc/manual/html_node/Getopt.html)
* [Signals](http://titania.ctie.monash.edu.au/signals/)
