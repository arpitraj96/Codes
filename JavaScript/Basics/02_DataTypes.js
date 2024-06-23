"use strict";  // It treat all JS code as newer version
//alert(3+3)  // 

let name = "Arpit"
let age = 18
let isLoggedIn = false

/*
Primitive Data Types
number => 2^53
bigint
string => ""
boolean => true/false
null => standalone value
undefined => 
symbol => unique

Object Data Types

*/

console.log(typeof "Arpit");
console.log(typeof age);
console.log(typeof null);
console.log(typeof undefined);


/************** More about Data Types **************/
/* 
// Primitive Data Types (Call by Value (Copy))
7 types => String, Number, Boolean, Null, Undefined, Symbol, BigInt, 

// Reference (Non - Primitive) -> Data Types that are derived from Primitive Data Types
Types => Array, Object, Functinons
*/
const arr = ["Apple", "Boy", "Cat", "Dog", "Eye"]  //Array in JS -> typeof -> object
let myObj = {    //Object in JS -> typeof -> object
    name: "Alex",
    age: 22,
    gender: "Male"
}
console.log(arr);
console.log(myObj);


const myFunction = function () {  //Functions in JS -> typeof -> functions
    console.log("Hello");
}
myFunction()

console.log(typeof arr);
console.log(typeof myObj);
console.log(typeof myFunction);


// Stack => Primitive Data Types
// Heap => Non-Primitive Data Types / Reference Data Types