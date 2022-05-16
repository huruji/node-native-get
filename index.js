const getAddon = require('./build/Debug/get.node')

console.log("123")

console.log('output:', getAddon.first())

console.log('output', getAddon.add(12, 12))
getAddon.runCallback(console.log)

console.log(getAddon.setObject("✨"))

const fn = getAddon.fn();
console.log(fn())