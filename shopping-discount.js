// This program claculate the total amount of shopping after the give discount percentage.

// To run this code you must link this js file with your HTML file

let amount = Number(prompt("What is the total amount?"));
// Brute Force Approach

/*
if(amount > 0 && amount <= 5000) {
    console.log(amount);
} else if(amount > 5000 && amount <= 7000) {
    console.log(amount - Math.floor((5 * amount) / 100));
} else if(amount > 7000 && amount <= 9000) {
    console.log(amount - Math.floor((10 * amount) / 100));
} else if(amount > 9000) {
    console.log(amount - Math.floor((20 * amount) / 100));
} else {
    console.log("Invalid Input");
}
*/

// Optimal Approach

let discount = 0;

if(amount > 0 && amount <= 5000) {
    discount = 0;
} else if(amount > 5000 && amount <= 7000) {
    discount = 5;
} else if(amount > 7000 && amount <= 9000) {
    discount = 10;
} else if(amount > 9000) {
    discount = 20;
} else {
    console.log("Invalid Input");
}

console.log(amount - Math.floor((discount * amount) / 100));
