const accountID = 146734
let accountEmail = "arpit360raj@gmail.com"
var accountPassword = "pass@word"  //Prefer not to use var keyword because of block and functional scope
accountCity = "Gr. Noida"
let accountState   //Right now undefined is stored in this variable.

// accountID = 2 // Not allowed as it is defined as Constant (see const keyword at line 1)
accountEmail = "arpit@gmail.com"
accountPassword = "word@pass"
accountCity = "Narkatiaganj"

console.log(accountID);  //Log on Console or terminal
console.table([accountID, accountEmail, accountPassword, accountCity, accountState])  //Create a table view of all passed values on console or terminal like this 👇🏻
/*
┌─────────┬───────────────────┐
│ (index) │ Values            │
├─────────┼───────────────────┤
│ 0       │ 146734            │
│ 1       │ 'arpit@gmail.com' │
│ 2       │ 'word@pass'       │
│ 3       │ 'Narkatiaganj'    │
│ 4       │ undefined         │
└─────────┴───────────────────┘
*/
//Here we can see that the variables with keywords like var and let can be further modified/change.