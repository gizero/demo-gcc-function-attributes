# demo-gcc-function-attributes
compiler aware syntax for declaring attributes of functions

Default build disables overriding function foo():

```
make
./prog
foo was not overriden.
```

Enable override:

```
make clean; make ENABLE_OVERRIDE=1
./prog
foo was overriden.
```
