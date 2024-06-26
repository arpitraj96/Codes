let myDate = new Date()
console.log(myDate.toString());
console.log(myDate.toDateString());
console.log(myDate.toISOString());
console.log(myDate.toLocaleString());
console.log(typeof(myDate));

let mySpecificDate = new Date(2024, 5, 27)
console.log(mySpecificDate.toDateString());
let mySpecificDate2 = new Date("01-14-2024")
console.log(mySpecificDate2.toDateString());
console.log(mySpecificDate2.getTime());
console.log(Math.floor(Date.now()/1000));

let newDate = new Date()
console.log(newDate.getDate());
console.log(newDate.getDay());
console.log(newDate.getFullYear());
console.log(newDate.getMonth()+1);

newDate.toLocaleString('default', {
    weekday: "long",
    
})