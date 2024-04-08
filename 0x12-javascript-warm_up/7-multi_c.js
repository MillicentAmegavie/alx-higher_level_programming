#!/usr/bin/node
const x = Math.floor(Number(process.argv[2]));
if (isNaN(x)) {
  console.log('Missing number of occurrences');
} else {
  for (let m = 0; m < x; m++) {
    console.log('C is fun');
  }
}
