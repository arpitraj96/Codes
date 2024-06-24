// Numbers
const score = 400
console.log(score);

const balance = new Number(200)  //Here we have used new keyword for defining Number(An object in JS)
console.log(balance);
console.log(balance.toString());
console.log(balance.toFixed(2));

const otherNumber = 13.8567
console.log(otherNumber.toPrecision(3));

const lakhs = 100000
console.log(lakhs.toLocaleString('en-IN')); //Represents the number in Indian Number System Form, EX = 1,00,000

// Maths
console.log(Math);
console.log(Math.abs(-4));
console.log(Math.round(4.3));
console.log(Math.ceil(4.3));
console.log(Math.floor(4.3));
console.log(Math.min(4, 2, 6, 8, 1, 9));
console.log(Math.max(4, 2, 6, 8, 1, 9));

console.log(Math.random());
console.log((Math.random()*10)+1);
console.log(Math.floor((Math.random()*10)+1));
const max = 20
const min = 10

console.log(Math.floor(Math.random() * (max-min+1))+min);  //This is for generating random number between a range.