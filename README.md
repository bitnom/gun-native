# gun-native

#### The Gun decentralized graph database as a native library.

## Rationale

For most people reading this, I probably don't have to tell you how great [Gun](https://github.com/amark/gun) is. I found myself wanting (Badly) to use Gun in native languages.

There are a few different ways to go about this, in order of difficulty (Most to least):

* Port Gun to an entirely separate language that compiles natively (C, Nim, Rust, Go, etc.).
* Use a Javascript compiler or JS to \<SomethingNative> transpiler.

We will therefor work up this list until success is had.

## Attempt #1 - NectarJS

I found [NectarJS](https://github.com/NectarJS/nectarjs) researching for this port. It was started in 2017 and appears
to be in active development. Its ways are largely unknown to me but it promises "Javascript's God Mode. No VM. No
Bytecode. No GC. Just native binaries."

Let's find out if it can deliver or if it can't, how much contribution it might take to catch it up to
where we need it to be. Each different tech/attempt will live in its own branch.

Nectar branch has been started [here](https://github.com/TensorTom/gun-native/tree/nectar).

## Attempt #2 - Js2Py (Some Success!)

Python isn't primarily a "Native" language. However, If we can get Gun transpiled to Python, we should then be able to (With a bit extra work) compile that to a native library. Even before that, having Gun in Python would be a great start. While there exists [pygundb](https://github.com/xmonader/pygundb) (A huge thanks to xmonader for that), I also couldn't help but realize how much better it would be to not rely on just pushing data to a separate running Gun server via websockets. We need implementations in other languages.

In this repo we now have `gun.py`. Let's see an exerpt:


```
import js2py
Gun = js2py.require('gun')
gun = Gun('http://localhost:8089/gun')
baz = gun.get('baz')
```

and from this we can see the message:
```
Hello wonderful person! :) Thanks for using GUN, please ask for help on http://chat.gun.eco if anything takes you longer than 5min to figure out!
```

yay! The war is not yet won though. I'm having trouble sucessfully executing puts and then gets. However, when I
execute them, I do see that Gun has returned all the heap of stuff involved in a Gun object. This will take more
research.

![debug](http://i.imgur.com/nebYtjJ.png)

Help is welcome.


