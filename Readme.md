lock-your-macs
============

Check if Mac OS is currently locked.

## Requirements

- [Node.js and NPM](https://nodejs.org/en/)
- [node-gyp](https://www.npmjs.com/package/node-gyp)
- Xcode Command-Line Tools

## Installation
```bash
npm install --save lock-your-macs
```

## Usage

```javascript
var lockYourMacs = require('lock-your-macs');

var isLocked = lockYourMacs.isLocked();
console.log("Mac OS is currently "+(isLocked ? "locked" : "unlocked"));
```

## Developing

### Recompile the native C++ addon

```bash
node-gyp rebuild
```

### Run tests

```bash
npm test
```