let score = "33"
let num = "78abc"

console.log(typeof score);
console.log(typeof num);

let valueInNumber = Number(score);  // If we convert boolean then for true it will give 1 and for false it will give 0
let valueInNumber2 = Number(num);  
console.log(typeof valueInNumber);
console.log(typeof valueInNumber2);
console.log(valueInNumber2);

/*
"33" => 33
"33abc" => NaN
true => 1
false => 0
"" => false
"abc" => true
*/
let str = "abc"
let emptyStr = ""
let isLoggedIn = 1
let booleanData = Boolean(isLoggedIn)
let booleanData2 = Boolean(str)
let booleanData3 = Boolean(emptyStr)
let stringData = String(isLoggedIn)
let stringData1 = String(score)

console.table([booleanData, booleanData2, booleanData3, stringData, stringData1])

