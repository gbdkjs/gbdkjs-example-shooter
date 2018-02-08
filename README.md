# gbdkjs-example-shooter

> GBDKJS Example Top Down Shooter

![Screenshot](screenshot.png?raw=true)

## Dependencies

- [Emscripten](http://kripken.github.io/emscripten-site/)
- [GBDK](http://gbdk.sourceforge.net/) ([Mac Build](https://www.gbdkjs.com/downloads/gbdk-mac.zip))

Install both and make sure `emcc` and `lcc` are in your `$PATH`.

[More information](https://www.gbdkjs.com/docs/installation/) at the GBDK.js site.

## Build

```shell
git clone git@github.com:gbdkjs/gbdkjs-example-shooter.git;
cd gbdkjs-example-shooter;
npm install;
```

### Game Boy ROM

```shell
make rom;
open build/gb/game.gb;
```

### Emscripten 

```shell
make web;
live-server build/web;
```