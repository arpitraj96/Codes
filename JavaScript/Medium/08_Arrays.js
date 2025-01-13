const myArr = [1, 2, 'A', 'B', 'C', "Arpit"]
console.log(myArr[0]);
console.log(myArr[3]);
console.log(myArr[5]);
console.log(myArr);
myArr.push(6)
myArr.push(7)
myArr.pop()

console.log(myArr.includes(9));
console.log(myArr.indexOf(3));
myArr.unshift(0);
console.log(myArr);
myArr.unshift('D');
console.log(myArr);


console.log("A ", myArr);

const myn1 = myArr.slice(1, 3)

console.log(myn1);
console.log("B ", myArr);


const myn2 = myArr.splice(1, 3)
console.log("C ", myArr);
console.log(myn2);