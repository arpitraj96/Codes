// Immediately Invoked Function Expressions (IIFE)


(function chai(){
    // named IIFE
    console.log(`DB CONNECTED`);
})();
// The semi colon stops the execution of immediate function
( (name) => {
    console.log(`DB CONNECTED TWO ${name}`);
} )('Arpit')
