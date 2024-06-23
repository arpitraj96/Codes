const name = "Arpit's"
const repocount = 13
console.log(name+"repoCount is "+repocount);
console.log(name.length);

console.log(`${name} repo count is ${repocount}`); //String Interpolation allows injecting variables, function calls, and arithmetic expressions directly into a string. By using this we can do many things on the go like adding some functions like touppercase etc.

// Another way to declare a String => by using new keyword
const str = new String("Arpit")  // This declaration method creates key value pairs of characters. 0: "A", 1: "r", 2: "p", 3: "i", 4: "t"
console.log(str);
console.log(str.length);
console.log(str.toUpperCase());
console.log(str[3]);
console.log(str.charAt(4));
console.log(str.indexOf("r"));


const str1 = "substring"
console.log(str1.length);
console.log(str1.substring(0,5));
console.log(str1.slice(-2));

const newStringOne = "   hitesh    "
console.log(newStringOne);
console.log(newStringOne.trim());

const url = "https://hitesh.com/hitesh%20choudhary"

console.log(url.replace('%20', '-'))

console.log(url.includes('sundar'))

const str2 = "He-is-a-good-boy"
console.log(str2.split('-'));